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


