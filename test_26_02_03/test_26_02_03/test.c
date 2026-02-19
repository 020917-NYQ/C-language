#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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


////指向函数指针数组的指针
//int ADD(int x, int y) { return x + y; }
//int SUM(int x, int y) { return x - y; }
//
//int main()
//{
//	int (*pf_arr[2])(int, int) = { &ADD, &SUM }; //函数指针数组
//	int (*(*ppf_arr)[2])(int, int) = &pf_arr; //ppf_arr是指向函数指针数组的指针
//	//ppf_arr与"*"结合，即"(*ppf_arr)"，说明是指针
//	//(*ppf_arr)与"[]"结合，即(*ppf_arr)[2])，说明指向的是数组
//	//去掉(*ppf_arr)[2])，剩下的是函数指针类型，即"int(*)(int, int)"
//
//	int add = (*ppf_arr)[0](10, 20);
//	int sum = (*ppf_arr)[1](10, 20);
//	printf("%d %d\n", add, sum); //打印结果为：30 -10
//	return 0;
//}


////回调函数
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. 加法    2. 减法 *****\n");
//	printf("***** 3. 乘法    4. 除法 *****\n");
//	printf("***** 0. 退出            *****\n");
//	printf("******************************\n");
//}
//
//int ADD(int x, int y) { return x + y; }
//int SUM(int x, int y) { return x - y; }
//int MUL(int x, int y) { return x * y; }
//int DIV(int x, int y) { return y ? x / y : 0; }
//
//int Calc(int(*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	return pf(x, y); //这里的pf是函数指针，调用其他函数
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			int (*pf_arr[5])(int, int) = { NULL, &ADD, &SUM, &MUL, &DIV };
//			printf("%d\n", Calc(pf_arr[input]));
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


////qsort()函数
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0, flag = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 1;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//
//int compar_int(const void* p1, const void* p2)
//{
//	//这个函数是使用者提供给qsort()的比较函数，该函数能够比较出两个整型的大小
//	//如果p1 > p2，会返回大于0的数，如果p1 < p2，会返回小于0的数，否则返回0
//
//	return *((int*)p1) - *((int*)p2); //"void*"类型指针不能解引用，必须强制类型转换
//	//qsort()函数默认排列升序，如果想排列降序，返回值可以用p2 - p1
//}
//
//void sort_int()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar_int);
//
//	printf("整数按照升序排序：");
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int compar_struct_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int compar_struct_name(const void* p1, const void* p2)
//{
//	//两个字符串用strcmp()函数比较
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void sort_struct()
//{
//	struct Stu s[] = { {"张三", 20}, {"李四", 19}, {"王五", 21} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), compar_struct_age); //按照年龄比较
//	printf("年龄按照升序排序：");
//	for (int i = 0; i < sz; i++)
//		printf("%s, %d  ", (s[i]).name, (s[i]).age);
//	printf("\n");
//
//	qsort(s, sz, sizeof(s[0]), compar_struct_name); //按照姓名比较
//	printf("名字按照升序排序：");
//	for (int i = 0; i < sz; i++)
//		printf("%s, %d  ", (s[i]).name, (s[i]).age);
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz); //使用冒泡排序方法进行降序排列
//	
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]); //打印结果为：10 9 8 7 6 5 4 3 2 1
//	printf("\n");
//
//
//	//上面的冒泡排序只能排序数字，qsort()函数可以排序任意类型的数据
//	//qsort()底层使用快速排序，使用时需包含头文件<stdlib.h>
//	//下面是qsort()的函数声明，该函数一共四个参数，第四个参数是一个函数指针
//	/*
//	void qsort(
//		void* base, 
//		size_t num, 
//		size_t size,
//		int (*compar)(const void*, const void*));
//	*/
//	//第一个参数base指针指向了待排序数组的第一个元素，也就是待排序空间的起始位置
//	//第二个参数num是待排序数组中的元素个数，第三个参数是数组中每个元素的大小，单位是字节
//	//第四个参数指向了一个函数，该函数用来比较两个元素大小
//
//
//	sort_int(); //用qsort()函数排序整形数组
//	sort_struct(); //用qsort()函数排序结构体
//	return 0;
//}


//使用冒泡排序模拟实现qsort()函数
void Swap(char* buf1, char* buf2, size_t size)
{
	//这里面没办法一起交换，可以一个字节一个字节的交换
	for (size_t i = 0; i < size; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++, buf2++;
	}
}

int compar_int(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}

void my_qsort(
	void* base, //执行待比较数组的首元素
	size_t num, //数组中元素个数
	size_t size, //元素大小，单位是字节
	int(*cmp)(const void* p1, const void* p2)) //函数指针执行的函数返回值类型是int
{
	//冒泡排序过程
	for (size_t i = 0, flag = 0; i < num; i++)
	{
		for (size_t j = 0; j < num - 1 - i; j++)
		{
			//假设排列升序
			//char*指针一次跳过一个字节，这样base加上j × size(宽度)，就是跳过了多少字节数
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//交换，这里还传入了宽度参数，这样就知道交换多少字节
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

void sort_int()
{
	int arr[] = { 4, 2, 7, 9, 0, 3, 1, 6, 8, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), compar_int);

	printf("整数按照升序排序：");
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};

int compar_struct_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

int compar_struct_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void sort_struct()
{
	struct Stu s[] = { {"张三", 20}, {"李四", 19}, {"王五", 21} };
	int sz = sizeof(s) / sizeof(s[0]);

	my_qsort(s, sz, sizeof(s[0]), compar_struct_age); //按照年龄比较
	printf("年龄按照升序排序：");
	for (int i = 0; i < sz; i++)
		printf("%s, %d  ", (s[i]).name, (s[i]).age);
	printf("\n");

	my_qsort(s, sz, sizeof(s[0]), compar_struct_name); //按照姓名比较
	printf("名字按照升序排序：");
	for (int i = 0; i < sz; i++)
		printf("%s, %d  ", (s[i]).name, (s[i]).age);
	printf("\n");
}

int main()
{
	sort_int(); //用my_qsort()函数排序整形数组
	sort_struct(); //用my_qsort()函数排序结构体
	return 0;
}