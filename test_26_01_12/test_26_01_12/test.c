#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
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


////写一个函数求两个整数的较大值
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}


////小飞机
//int main() {
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = 0; j < 12; j++)
//        {
//            if ((i == 0 || i == 1) && (j < 5 || j > 6))
//                printf(" ");
//            else if ((i == 4 || i == 5) && (j < 4 || j == 5 || j == 6 || j > 7))
//                printf(" ");
//            else
//                printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


////计算表达式的值
//int main() {
//    int a = 40, c = 212;
//    printf("%d", ((-8) + 22) * a - 10 + (c / 2));
//    return 0;
//}


////发布信息
//int main() {
//    printf("I lost my cellphone!");
//    return 0;
//}


////你是天才吗
//int main() {
//    int IQ = 0;
//    scanf("%d", &IQ);
//    if (IQ >= 140)
//        printf("Genius");
//    return 0;
//}


////计算y的值
//int f(int x)
//{
//    if (x < 0)
//        return 1;
//    else if (x > 0)
//        return -1;
//    else
//        return 0;
//}
//
//int main() {
//    int x = 0;
//    scanf("%d", &x);
//    int y = f(x);
//    printf("%d", y);
//    return 0;
//}


////被5整除问题
//int main() {
//    int M = 0;
//    scanf("%d", &M);
//    if (M % 5 == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}


////计算带余除法
//int main() {
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}


////平均身高
//int main() {
//    float a = 0, b = 0, c = 0, d = 0, e = 0;
//    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//    printf("%.2f", (a + b + c + d + e) / 5);
//    return 0;
//}


////判断两个数的大小关系
//int main() {
//    int a = 0, b = 0;
//    while (scanf("%d %d", &a, &b) != EOF) //scanf()函数读取失败会返回EOF
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    return 0;
//}


////成绩输入输出问题
//int main() {
//    int score = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &score);
//        printf("%d ", score);
//    }
//    return 0;
//}


////判断整数奇偶性
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//        if (a % 2 != 0)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    return 0;
//}


////线段图案
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}


////计算平均成绩
//int main() {
//    int score = 0;
//    float sum = 0.0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    printf("%.1f", sum / 5);
//    return 0;
//}


////小乐乐排电梯
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", (n / 12) * 4 + 2);
//    return 0;
//}


////小乐乐找最大数
//int main() {
//    int max = 0, num = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        scanf("%d", &num);
//        if (max < num)
//            max = num;
//    }
//    printf("%d", max);
//    return 0;
//}


////小乐乐转换成绩
//int main() {
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 90 && score <= 100)
//        printf("A");
//    else if (score >= 80 && score <= 89)
//        printf("B");
//    else if (score >= 70 && score <= 79)
//        printf("C");
//    else if (score >= 60 && score <= 69)
//        printf("D");
//    else if (score >= 0 && score <= 59)
//        printf("E");
//    else
//        printf("F");
//    return 0;
//}


////ANSIC码
//int main() {
//    char arr[13] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33, '\0' };
//    printf("%s", arr);
//    return 0;
//}


////统计数据正负个数
//int main() {
//    int positive = 0, negative = 0; //正数和负数
//    int n = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &n);
//        if (n > 0)
//            positive++;
//        else if (n < 0)
//            negative++;
//    }
//    printf("positive:%d\n", positive);
//    printf("negative:%d\n", negative);
//    return 0;
//}


////最高分与最低分之差
//int main() {
//    int max = 0, min = 100, score = 0, n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (max < score)
//            max = score;
//        if (min > score)
//            min = score;
//    }
//    printf("%d", max - min);
//    return 0;
//}


////判断一个数是否是素数
////素数是只能被1和本身整除的数字
//int is_prime_num(int n) //是素数返回1，不是返回0
//{
//	if (n % 2 == 0 && n != 2) //非2偶数一定不是素数
//		return 0;
//
//	//用n去除以2 ~ n-1的数字，看是否能整除，如果整除则不是素数
//	for (int i = 2; i <= n - 1; i++)
//		if (n % i == 0)
//			return 0;
//
//	return 1; //既不是非2偶数，也不能整除2 ~ n-1的数字，说明是素数
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个大于1的整数，用来判断是否是素数：");
//	scanf("%d", &n);
//
//	if (is_prime_num(n) == 0)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n", n);
//	return 0;
//}


////改进方法
//int is_prime_num(int n) //是素数返回1，不是返回0
//{
//	if (n % 2 == 0 && n != 2) //非2偶数一定不是素数
//		return 0;
//
//	//用n除以2 ~ √n的数字，整除则不是素数
//	//把试除范围缩小到2 ~ √n的原因是如果是素数，则必然有一个因子小于等于√n，另一个大于等于√n
//	for (int i = 2; i <= sqrt(n); i++) //sqrt()函数可以计算一个数的开平方
//		if (n % i == 0)
//			return 0;
//
//	return 1; //既不是非2偶数，也不能整除2 ~ n-1的数字，说明是素数
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个大于1的整数，用来判断是否是素数：");
//	scanf("%d", &n);
//
//	if (is_prime_num(n) == 0)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n", n);
//	return 0;
//}


////求两个数的最大公约数
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int k = m < n ? m : n; //最大公约数不可能大于m和n的较小值，因此先假设k是m和n的较小值
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//			break;
//		k--; //依次尝试，找出最大公约数
//	}
//	printf("%d\n", k);
//	return 0;
//}


//辗转相除法
int main()
{
	int m = 0, n = 0, k = 0;
	scanf("%d %d", &m, &n);
	while (k = m % n)
	{
		m = n;
		n = k;
	}
	printf("%d\n", n);
	return 0;
}