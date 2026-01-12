#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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


//写一个函数判断一个数字是否是素数
//素数是只能被1和本身整除的数
int is_prime(int n)
{
	if ((n % 2 == 0)) //偶数一定不是素数
		return 0;

	
}

int main()
{
	int n = 0;
	printf("请输入一个正整数，用来判断是否是素数：");
	scanf("%d", &n);
	int ret = is_prime(n); //用于判断n是否是素数，返回1是素数，返回0不是
	if (ret == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);
	return 0;
}