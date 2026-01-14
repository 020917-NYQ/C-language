#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
////strcpy()函数
////函数头文件：<string.h>
////函数声明：char* strcpy (char* destination, const char* source);
////函数功能：将源字符串（source）包括"\0"，拷贝到目标空间中（destination）
////函数返回值：返回指向目标的指针（char*类型）
////注意事项：必须保证目标空间能够放得下源字符串，包括"\0"
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[20] = { 0 };
//	printf("%s\n", strcpy(str2, str1)); //打印结果为：abcdef
//	return 0;
//}


////memset()函数
////函数头文件：<string.h>
////函数声明：void* memset (void* ptr, int value, size_t num);
////函数功能：将指针ptr所指向的内存块中起始的num个字节设置为value值
////函数返回值：返回设置后的内存块的起始地址
////注意事项：这里的ptr是void*类型，因此使用时应该强制类型转换
//int main()
//{
//	char str[] = "abcdef";
//	//"memset(str, '*', 3)"含义是将字符串"abcdef"的前三个字符设置成"*"
//	printf("%s\n", (char*)memset(str, '*', 3)); //打印结果为：***def
//	return 0;
//}


////写一个函数找出两个整数的较大值
//int Max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d和%d的较大值为%d\n", a, b, Max(a, b)); //打印结果为：10和20的较大值为20
//	return 0;
//}


////传值传参
//void Swap(int x, int y)
//{
//	printf("交换前：x = %d, y = %d\n", x, y);
//	int tmp = x;
//	x = y;
//	y = tmp;
//	printf("交换后：x = %d, y = %d\n", x, y);
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}


////传址传参
//void Swap(int* x, int* y) //用指针接收a和b的地址
//{
//	printf("交换前：*x = %d, *y = %d\n", *x, *y);
//	int tmp = *x; //对指针x解引用得到了a的值
//	*x = *y;
//	*y = tmp;
//	printf("交换后：*x = %d, *y = %d\n", *x, *y);
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	Swap(&a, &b); //这里传入a和b的地址，那x和y就相当于a和b
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}


////写一个函数判断一个数字是否是素数
//int is_prime_num(int n)
//{
//	if (n % 2 == 0 && n != 2) //非2偶数一定不是素数
//		return 0;
//
//	for (int i = 2; i <= sqrt(n); i++)
//		if (n % i == 0) //能整除一定不是素数
//			return 0;
//
//	return 1; //不是非2偶数也不能整除一定是素数
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数，用来判断是否是素数：");
//	scanf("%d", &n);
//
//	if (is_prime_num(n)) //返回1是素数，返回0不是素数
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n", n);
//	return 0;
//}


////写一个函数判断某一年是否是闰年
//int is_ryear(int year)
//{
//	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_ryear(year))
//		printf("%d年是闰年\n", year);
//	else
//		printf("%d年不是闰年\n", year);
//	return 0;
//}


////写一个函数实现整型有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0, right = sz - 1; //左右下标
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2; //中间元素下标
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//			return mid; //找到返回下标
//	}
//	return -1; //未找到返回-1
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0; //待查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	
//	int ret = binary_search(arr, k, sz); //二分查找
//	if (ret == -1)
//		printf("未找到\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}


////写一个函数每次执行都会将num的值加1
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0, count = 0;
//	printf("输入执行次数：");
//	scanf("%d", &count);
//	for (int i = 0; i < count; i++)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}


////函数的嵌套调用与链式访问
//void Print()
//{
//	printf("Hello World!\n"); //Print()函数中调用了printf()函数，也是嵌套调用
//}
//
//int Add(int x, int y)
//{
//	Print(); //在Add()函数内部还调用了Print()函数，属于嵌套调用
//	return x + y;
//}
//
//int main()
//{
//	int x = 10, y = 20;
//	//printf()函数的参数是Add()函数的返回值
//	//而Add()函数的参数又是Add(10, x)的返回值，属于链式访问
//	printf("%d\n", Add(Add(10, x), y));
//	return 0;
//}


////函数的声明和定义
//int Add(int x, int y); //函数声明
//
//int main()
//{
//	//函数使用
//	printf("%d\n", Add(10, 20)); //打印结果为：30
//	return 0;
//}
//
////函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}


////函数的递归
////递归的两个必要条件：
////1、必须有限制条件，当满足该条件时，递归不再继续
////2、每次调用递归后，越来越接近该限制条件
//int main()
//{
//	printf("hehe\n");
//	main(); //函数自己调用自己，属于函数递归，但会死循环打印"hehe"，最终栈溢出
//	return 0;
//}


////接收一个整型值，按照顺序打印它的每一位
///*
//Print(1234)
//Print(123)  1234 / 10 = 123  1234 % 10 = 4 ———— 打印 4
//Print(12)   123 / 10 = 12    123 % 10 = 3  ———— 打印 3 4
//Print(1)    12 / 10 = 1      12 % 10 = 2   ———— 打印 2 3 4
//                                           ———— 打印 1 2 3 4
//*/
//void Print(int n)
//{
//	if (n > 9) //限制条件
//		Print(n / 10); //用于分别调用Print(123)、Print(12)、Print(1)
//	printf("%d ", n % 10); //用于分别打印1、2、3、4
//}
//
//int main()
//{
//	unsigned int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%u", &n); //"%u"用于接收无符号整数
//	Print(n);
//	return 0;
//}


////不创建临时变量，求字符串长度
////非递归实现，创建了临时变量
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////递归实现，不需要创建临时变量
///*
//my_strlen2("abcdef\0")
//1 + my_strlen2("bcdef\0")
//1 + 1 + my_strlen2("cdef\0")
//1 + 1 + 1 + my_strlen2("def\0")
//1 + 1 + 1 + 1 + my_strlen2("ef\0")
//1 + 1 + 1 + 1 + 1 + my_strlen2("f\0")
//1 + 1 + 1 + 1 + 1 + 1 + my_strlen2("\0")
//*/
//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//		return (1 + my_strlen2(str + 1));
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen1(str)); //数组名是数组首元素的地址
//	printf("%d\n", my_strlen2(str));
//	return 0;
//}


////求n!
////n! = n × (n-1)! = n × (n-1) × (n-2)! = ... = n × (n-1) × ... × 3 × 2 × 1
//int Fac(int n)
//{
//	if (n > 0)
//		return n * Fac(n - 1);
//	else
//		return 1; //0! = 1, 1! = 1
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}


////求第n个斐波那契数
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}


////求第n个斐波那契数
//int count = 0;
//
//int Fib(int n)
//{
//	count++;
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	printf("%d\n", count);
//	return 0;
//}


//迭代方式
int count = 0;

int Fib(int n)
{
	int a = 1, b = 1, c = 1; //a和b代表前两个斐波那契数，c是第三个斐波那契数
	while (n >= 3)
	{
		c = a + b; //第三个斐波那契数是前两个数之和
		a = b; //第二个斐波那契数给第一个
		b = c; //第三个斐波那契数给第二个
		n--;
		count++;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	printf("%d\n", count);
	return 0;
}