#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////打印100 ~ 200之间的素数
//int main()
//{
//	for (int i = 101; i <= 200; i += 2)
//		if ((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0) && (i % 11 != 0) && (i % 13 != 0))
//			printf("%d ", i);
//	return 0;
//}


////打印1000 ~ 2000之间的闰年
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//	return 0;
//}


////计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 - … + 1/99 - 1/100的值
//int main()
//{
//	double sum = 0.0;
//	for (int i = 1, flag = 1; i <= 100; i++, flag = (-flag))
//		sum += ((double)flag / i);
//	printf("%f\n", sum);
//	return 0;
//}


////求10个整数中最大值
//int main()
//{
//	int arr[10] = { 2, 6, 5, 3, 9, 1, 4, 8, 10, 7 };
//	int max = arr[0]; //假定数组首元素是最大值
//	for (int i = 0; i <= 10; i++)
//		if (arr[i] > max)
//			max = arr[i];
//	printf("%d\n", max);
//	return 0;
//}


////打印1 ~ 100之间所有3的倍数的数字
//int main()
//{
//	for (int i = 3; i < 100; i += 3)
//		printf("%d ", i);
//	return 0;
//}


////将三个整数数按从大到小输出
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a > b ? (a > c ? a : c) : (b > c ? b : c)); //最大值
//	int min = (a < b ? (a < c ? a : c) : (b < c ? b : c)); //最小值
//	int mid = a + b + c - max - min; //中间值
//	printf("%d %d %d\n", max, mid, min);
//	return 0;
//}