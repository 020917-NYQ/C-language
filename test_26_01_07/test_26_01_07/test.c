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


////判断一个数是否为奇数
//int main()
//{
//	int input = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &input);
//
//	if (1 == input % 2)
//		printf("是奇数\n");
//	else if (0 == input % 2)
//		printf("不是奇数\n");
//	else
//		printf("输入不合法，请重新输入\n");
//	return 0;
//}


////输出1 ~ 100之间的奇数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//		if (1 == i % 2)
//			printf("%d ", i);
//	return 0;
//}


////根据数字1 ~ 7，输出对应的星期
//int main()
//{
//	int day = 0;
//	printf("请输入一个1~7之间的数\n");
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default :
//		printf("输入不合法\n");
//      break;
//	}
//	return 0;
//}


////根据数字1 ~ 7，输出工作日或休息日
//int main()
//{
//	int day = 0;
//	printf("请输入一个1~7之间的数\n");
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入不合法\n");
//		break;
//	}
//	return 0;
//}


////判断下面代码输出内容
//int main()
//{
//	int n = 1, m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n) //switch语句允许嵌套使用
//		{
//		case 1:n++;
//		case 2:
//		{
//			m++; n++;
//			break;
//		}
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n); //打印结果为：m = 5, n = 3
//	return 0;
//}


////死循环
//int main()
//{
//	while (1) //判断条件永远为真
//		printf("hehe\n"); //打印结果为：死循环输出"hehe"
//	return 0;
//}


////使用while循环，输出1 ~ 10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i); //打印结果为：1 2 3 4 5 6 7 8 9 10
//		i++;
//	}
//	return 0;
//}


////while循环中的break和continue语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break; //遇到break时，会直接跳出最内层循环，继续向下执行
//		printf("%d ", i); //打印结果为：1 2 3 4
//		i++;
//	}
//
//	int j = 1;
//	while (j <= 10)
//	{
//		if (j == 5)
//			continue; //遇到continue时，跳过后面的代码，重新判断条件
//		printf("%d ", j); //打印结果为：1 2 3 4 之后死循环，不输出任何结果
//		j++;
//	}
//	return 0;
//}


////清理输入缓冲区
//int main()
//{
//	//int c = getchar(); //功能是获取缓冲区的一个字符，返回值是ASCII码值，类型是int
//	////getchar()函数读取失败时，会返回EOF（本质是整形的-1）
//	//putchar(c); //功能是输出缓冲区的一个字符，参数是int类型
//
//
//	//使用while重复输入输出
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) //如果读取返回值不是EOF，就会一值读取
//	//	putchar(ch); //输入的字符会一直输出，直到输入Ctrl + Z停止
//	
//
//	//清理输入缓冲区
//	printf("请输入密码：");
//	char password[30] = { 0 };
//	scanf("%s", password); //默认读取到空格结束，如果没有空格，读取到\n停止
//	while (getchar() != '\n'); //清理缓冲区
//	printf("请确认密码(Y/N)：");
//
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}


////scanf()函数一直读取
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%[^\n]", arr); //代表一直读取，直到遇到"\n"停止
//	printf("%s\n", arr);
//	return 0;
//}


////判断下面代码输出内容
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch); //代码结果是只打印数字字符
//	}
//	return 0;
//}


//