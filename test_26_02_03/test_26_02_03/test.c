#include <stdio.h>
////字符指针
//int main()
//{
//	char ch = 'x';
//	char* pc = &ch; //字符指针，存放字符型变量的地址
//	const char* ps = "abcdef"; //ps中存储的是字符串首字符的地址
//
//	//*ps = 'w'; //这种指向常量字符串的指针，不可被修改
//	//因此最好在常量字符串前面加上"const"
//
//	char arr[] = "abcdef"; //这种存储在字符数组中的字符串是可以被修改的
//	char* parr = arr;
//	*parr = 'w';
//	printf("%s\n", arr); //打印结果为：wbcdef
//	return 0;
//}


////笔试题
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	//因为str1和str2是同样的字符数组，里面存储了同样的字符串，但它们属于不同的空间
//	//另外字符串相等不能用"=="比较，因此第一个if-else语句执行else后的内容
//	
//	//str3和str4指向了同一个常量字符串，对于常量字符串来说，地址是固定不变的
//  //因此str3和str4中的地址相同，第二个if-else语句执行if后的内容
//
//	printf("%p %p\n", str1, str2);
//	printf("%p %p\n", str3, str4);
//	return 0;
//}


////指针数组的创建
//int main()
//{
//	//指针数组是存放指针的数组
//	char* arr1[5] = { 0 }; //存放字符指针的数组（字符指针数组）
//	int* arr2[10] = { 0 }; //存放整型指针的数组（整型指针数组）
//	return 0;
//}


////指针数组的使用
//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "haha" };
//	for (int i = 0; i < 3; i++)
//		printf("%s ", arr[i]); //打印结果为：abcdef hehe haha
//	return 0;
//}


////字符指针数组模拟二维数组
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	char arr2[] = { 'h', 'i', 'j', 'k', 'l', 'm', 'n' };
//	char arr3[] = { 'o', 'p', 'q', 'r', 's', 't', ' '};
//	char arr4[] = { 'u', 'v', 'w', 'x', 'y', 'z', ' '};
//	char* arr[] = { arr1, arr2, arr3, arr4 }; //存放字符型指针的数组
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 7; j++)
//			printf("%c  ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


////数组指针的定义
//int main()
//{
//	//数组指针是指向数组的指针
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int (*pa)[10] = &arr; //"&arr"拿到整个数组的地址
//	//将数组arr的地址存放到数组指针变量pa中，pa的指向的是数组arr
//	//数组指针pa的类型是"int (*) [10]"，其中的"*"代表pa是指针
//	// "int [10]"是数组arr的类型，"int"代表arr是整型数组
//	//"10"代表数组arr中含有10个元素
//
//	char ch[5] = { 'a', 'b', 'c' }; //字符数组
//	char (*pc)[5] = &ch; //字符数组指针
//	
//	int* arr1[5] = { 0 }; //整型指针数组，里面存放5个整型指针变量
//	int* (*p)[5] = &arr1; //指向整型指针数组的指针
//	return 0;
//}


////数组指针的使用
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (*p)[10] = &arr;
//
//	for (int i = 0; i < sz; i++)
//		printf("%d ", (*p)[i]); //p存放的是&arr，那么*p就是arr
//	//虽然用数组指针也可以访问整个数组，但是显得多此一举
//	return 0;
//}


////数组传参
////参数是一维数组名，可以用一维数组接收
//void Print1(int arr[10], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
////参数是一维数组名，可以看成一维数组首元素地址，用指针接收
//void Print2(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n\n");
//}
//
////参数是二维数组名，用二维数组接收
//void Print3(int arr[3][5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//}
//
////参数是二维数组名，看出二维数组首元素的地址，用指针接收
////二维数组首元素是第一行，二维数组的每一行是一个元素
////二维数组可以理解成存放多个一维数组的数组，其首元素地址是第一行的地址
////这里的"int (*arr)[5]"是数组指针，这个指针存储了二维数组首元素地址
////其中"5"代表二维数组首元素（本质是一维数组）中含有5个元素
//void Print4(int (*arr)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%d ", arr[i][j]);
//			//也可以写成：printf("%d ", *(*(arr + i) + j));
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Print1(arr1, sz);
//	Print2(arr1, sz);
//
//	int arr2[3][5] = { {1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
//	Print3(arr2, 3, 5);
//	Print4(arr2, 3, 5);
//	return 0;
//}


////区分下面几个变量
//int main()
//{
//	int arr[5]; //整型数组，含有5个元素
//	int* parr1[10]; //parr1与"[]"结合，本质是数组，类型是"int*"，能存放10个整型指针的指针数组
//	int (*parr2)[10]; //parr2与"*"结合，本质是指针，指向一个能存放10个整型指针的数组的指针
//	int(*parr3[10])[5]; //parr3与"[]"结合，本质是数组，含有10个元素，数组元素类型是"int(*)[5]"
//	//所以parr3是一个存放10个数组指针的数组，每个数组指针指向一个能够存放5个整型变量的数组
//	return 0;
//}


