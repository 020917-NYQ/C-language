#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
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


////一维数组传参
//void test1(int arr[]) {} //正确写法
//void test2(int arr[10]) {} //正确写法
//void test3(int* arr) {} //正确写法，数组名是首元素地址，可以用指针接收
//void test4(int* arr[20]) {} //正确写法
//void test5(int** arr) {} //正确写法，传参的数组是int*类型，可以用二级指针接收
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test1(arr1);
//	test2(arr1);
//	test3(arr1);
//	test4(arr2);
//	test5(arr2);
//	return 0;
//}


////二维数组传参
//void test(int arr[3][5]) {} //正确写法
//void test(int arr[][]) {} //错误写法，行可以省略，列不能省略
//void test(int arr[][5]) {} //正确写法
//void test(int* arr) {} //错误写法，二维数组首元素是第一行的地址，类型不匹配
//void test(int* arr[5]) {} //错误写法，使用指针数组接收，类型不匹配
//void test(int (*arr)[5]) {} //正确写法，使用数组指针接收，该指针指向了含有5个元素的数组
//void test(int** arr) {} //错误写法，实参不是一级指针的地址，类型不匹配
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


////函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n", &Add); //打印结果为：00007FF6170613C0
//	printf("%p\n", Add); //打印结果为：00007FF6170613C0
//	//"函数名"和"&函数名"得到的都是函数的地址
//	return 0;
//}


////函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add; //用函数指针"pf"接收函数的地址
//	//"pf"与"*"结合，说明是指针，该指针的类型是"int (*)(int, int)"
//	//第一个int说明Add()函数返回值是int类型，后两个说明函数参数是int类型
//
//	int ret = (*pf)(3, 5); //通过函数指针调用了Add()函数
//	printf("%d\n", ret); //打印结果为：8
//
//	//Add就是pf，所以可以用pf调用函数
//	printf("%d\n", pf(10, 20)); //打印结果为：30
//	return 0;
//}


////函数指针练习
//char* test(int c, float* b) {}
//
//int main()
//{
//	//对于上面的函数test，定义的函数指针如下
//	char* (*pf)(int, float*) = test;
//	return 0;
//}


////函数指针使用场景
//typedef void(*pf_t)(int); //将函数指针类型"void(*)(int)"重命名为"pf_t"
//
//int main()
//{
//	//分析下面代码的含义
//	(*(void(*)())0)();
//	//"(void(*)())0"是将"0"强转为函数指针类型，函数返回值为void，无参数
//	//"*(void(*)())0"是将函数指针解引用，拿到内存块编号为0里面的代码
//	//"(*(void(*)())0)()"是拿到这个代码之后，调用这块代码
//	//因此这个语句的含义是：
//	//内层中编号为0的内存块里面存储了一个可执行代码，通过"(*(void(*)())0)();"来调用这个可执行代码
//	
//	
//	//分析下面代码的含义
//	void (*signal(int, void(*)(int)))(int);
//	//"signal"是一个函数，两个参数类型分别是int和void(*)(int)
//	//该函数的返回值是函数指针，类型是void(*)(int)
//
//	//可以使用typedef关键字将第二个代码简化
//	pf_t signal(int, pf_t);
//	return 0;
//}


////函数指针数组
//void test1() {}
//void test2() {}
//void test3() {}
//void test4() {}
//
//int main()
//{
//	//函数指针数组的每个元素是一个函数指针
//	void (*pf_arr[4])() = { &test1, &test2, &test3, &test4 };
//	return 0;
//}


////函数指针数组的使用
//void menu()
//{
//	printf("*****************************************\n");
//	printf("**************** 计算器! ****************\n");
//	printf("***** 1. 加法    2. 减法    3. 乘法 *****\n");
//	printf("*****************************************\n");
//	printf("***** 4. 除法    5. 取负    6. 取正 *****\n");
//	printf("*****************************************\n");
//	printf("***** 7. 开方    8. 平方    0. 退出 *****\n");
//	printf("*****************************************\n");
//}
//
//float ADD(float x, float y) { return x + y; }
//float SUM(float x, float y) { return x - y; }
//float MUL(float x, float y) { return x * y; }
//float DIV(float x, float y) { return x / y; }
//float NEG(float x) { return -x; }
//float ABS(float x) { return x > 0 ? x : -x; }
//float SQRT(float x) { return (float)sqrt(x); }
//float SQ(float x) { return x * x; }
//
//int main()
//{
//	int input = 0;
//	float x = 0, y = 0;
//	char ch[7] = { ' ', '+', '-', '*', '/', '-', '+'};
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4 && input % 1 == 0)
//		{
//			float (*pf_arr1[5])(float, float) = { NULL, &ADD, &SUM, &MUL, &DIV };
//
//			printf("请输入两个操作数：");
//			scanf("%f %f", &x, &y);
//			printf("%f %c %f = %f\n", x, ch[input], y, (*(pf_arr1[input]))(x, y));
//		}
//		else if (input >= 5 && input <= 8 && input % 1 == 0)
//		{
//			float (*pf_arr2[5])(float) = { NULL, &NEG, &ABS, &SQRT, &SQ };
//
//			printf("请输入一个操作数：");
//			scanf("%f", &x);
//
//			if (input == 7)
//				printf("√%f = %f\n", x, (*(pf_arr2[input - 4]))(x));
//			else if(input == 8)
//				printf("%f * %f = %f\n", x, x, (*(pf_arr2[input - 4]))(x));
//			else
//				printf("%c%f = %f\n", ch[input], x, (*(pf_arr2[input - 4]))(x));
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//			printf("选择错误，请重新选择\n");
//	} while (input);
//	return 0;
//}


