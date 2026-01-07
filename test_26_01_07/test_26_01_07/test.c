#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////if语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//单分支if语句
//	if (age >= 1 && age < 18)
//		printf("未成年\n");
//	else
//		printf("已成年\n");
//
//	//多分支if语句
//	if (age >= 1 && age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 70)
//		printf("中年\n");
//	else if (age >= 70 && age < 150)
//		printf("老年\n");
//	else
//		printf("年龄不合法\n");
//	return 0;
//}


////悬空else
////这段代码的结果是什么都不输出，但这并不是一个优秀的写法
//int main()
//{
//	int a = 0, b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


////悬空else
////实际上这段代码的"else"应该属于第二个"if"，因为每一个"else"会与离它最近的"if"匹配
//int main()
//{
//	int a = 0, b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}


////if语句书写对比
////这个if语句是条件满足返回"x"，否则返回"y"，但是不容易理解
//if (condition)
//{
//	return x;
//}
//return y;


//