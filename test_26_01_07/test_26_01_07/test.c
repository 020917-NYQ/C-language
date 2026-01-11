#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
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


////语法结构
//int main()
//{
//	for (int i = 0; i < 10; i++);
//	//"int i = 0"是循环的初始化部分，也可以写成"i = 0"，i在循环外定义
//	//"i < 10"是循环的判断部分
//	//"i++"是循环的调整部分
//	//";"是for循环的循环语句，这里只有一条什么都不执行的语句
//	return 0;
//}


////使用for循环输出数字1 ~ 10
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//		printf("%d ", i); //打印结果为：1 2 3 4 5 6 7 8 9 10
//	return 0;
//}


////for循环的break和continue语句
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			break; //遇到break会直接跳出循环
//		printf("%d ", i); //打印结果为：1 2 3 4
//	}
//	printf("\n");
//
//	for (int j = 1; j < 10; j++)
//	{
//		if (5 == j)
//			continue; //遇到continue会跳过本次循环，执行"j++"
//		printf("%d ", j); //打印结果为：1 2 3 4 6 7 8 9
//	}
//	return 0;
//}


////笔试题
//int main()
//{
//	//下面循环要循环多少次
//	for (int i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	//该循环一次都不会执行，因为循环判断条件"k = 0"（赋值语句）结果为假
//	return 0;
//}


////语法结构
//int main()
//{
//	int i = 1;
//	//do while循环无论判断条件如何，都至少执行一次循环
//	do
//		; //循环体
//	while (i <= 10); //循环判断条件
//	return 0;
//}


////使用do while循环输出数字1 ~ 10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i); //打印结果为：1 2 3 4 5 6 7 8 9 10
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}


////do while循环的break和continue语句
//int main()
//{
//	int i = 1, j = 1;
//	do
//	{
//		if (i == 5)
//			break; //遇到break会直接跳出循环
//		printf("%d ", i); //打印结果为：1 2 3 4
//		i++;
//	} while (i <= 10);
//	printf("\n");
//
//	do
//	{
//		if (j == 5)
//			continue; //遇到continue会跳过本次循环，回到"i <= 10"
//		printf("%d ", j); //打印结果为：1 2 3 4，之后死循环，什么也不输出
//		j++;
//	} while (j <= 10);
//	return 0;
//}


////计算n!
//int main()
//{
//	int n = 0, num = 1;
//	printf("请输入一个整数n，用来计算n!\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		num *= i;
//	printf("%d! = %d\n", n, num);
//	return 0;
//}


////计算1! + 2! + ... + n!
//int main()
//{
//	int n = 0, num = 1, sum = 0;
//	printf("请输入一个整数n，用来计算1! + 2! + ... + n!\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			num *= j; //分别计算1!、2!、3!、...、n!
//		sum += num; //将1!、2!、3!、...、n!加起来
//		num = 1; //每次阶乘计算之后要把num重新置为1
//	}
//	printf("1! + 2! + ... +%d! = %d\n", n, sum);
//	return 0;
//}


////只用一个循环实现
//int main()
//{
//	int n = 0, num = 1, sum = 0;
//	printf("请输入一个整数n，用来计算1! + 2! + ... + n!\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//		sum += num;
//		//或者可以写成sum += (num *= i);
//	}
//	printf("1! + 2! + ... +%d! = %d\n", n, sum);
//	return 0;
//}


////在有序数组中查找某一个数字n
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 0;
//	printf("请输入要查找的数字\n");
//	scanf("%d", &n);
//	int flag = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了，下标为：%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//
//	if (0 == flag)
//		printf("没找到\n");
//	return 0;
//}


////二分查找
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 0;
//	printf("请输入要查找的数字\n");
//	scanf("%d", &n);
//	
//	/*
//	假设要查找元素为：7
//	根据左右下标的平均值进行查找，如果mid对应的元素不是，则会根据大小向两边查找
//	元素： 1    2    3    4    5    6   '7'   8    9    10
//	下标： 0    1    2    3    4    5    6    7    8    9
//	初始：left                mid                      right  此时mid = (left + right) / 2 = (0 + 9) / 2 = 4
//	一次：                         left      mid       right  此时mid = (5 + 9) / 2 = 7
//	二次：                         left right                 此时mid = (5 + 6) / 2 = 5
//	                               mid
//	三次：                              left                  此时mid = (6 + 6) / 2 = 6
//	                                   right
//									    mid
//	这时，arr[mid] == 7，查找成功，如果left和right重合时，仍然找不到元素，则查找失败
//	*/
//	
//	int sz = sizeof(arr) / sizeof(arr[0]); //数组元素个数
//	int left = 0, right = sz - 1; //左右元素下标
//	int flag = 0;
//
//	//可以允许left == right，此时只剩下最后一个元素没有被查找
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //中间元素下标
//		//中间元素下标必须定义在循环内部，因为每一次循环都需要改变mid的值
//
//		if (arr[mid] < n) //中间元素小于待查找元素
//		{
//			left = mid + 1; //此时mid左边的元素都不会是待查找的元素
//		}
//		else if (arr[mid] > n) //中间元素大于待查找元素
//		{
//			right = mid - 1; //此时mid右边的元素都不会是待查找的元素
//		}
//		else if (arr[mid] == n) //中间元素等于待查找元素
//		{
//			printf("找到了，下标是：%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//
//	if (0 == flag)
//		printf("没找到\n");
//	return 0;
//}


////编写代码，演示字符从两边向中间移动
///*想输出"Hello World!!!"，显示效果如下:
//
//	**************
//	H************!
//	He**********!!
//	Hel********!!!
//	Hell******d!!!
//	Hello****ld!!!
//	Hello **rld!!!
//	Hello world!!!
//
//*/
//int main()
//{
//	char arr1[] = "Hello world!!!";
//	char arr2[] = "**************";
//	int left = 0, right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		//依次将arr1中对应位置的元素复制到arr2的对应位置
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000); //等待1秒
//		system("cls"); //清理屏幕
//		left++, right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


////编写代码模拟登录
////要求只能登录三次，允许三次输入密码，正确则登陆成功，全部错误则退出程序
//int main()
//{
//	int i = 0, flag = 0;
//	char password[20] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password); //数组名本质上地址，因此不用再次取地址
//
//		//使用strcmp()函数比较两个字符串是否相同，如果相同会返回0
//		//假设正确密码是123456
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			flag = 1;
//			break;
//		}
//		else if((strcmp(password, "123456") != 0) && (i < 2))
//			printf("密码错误，请重新输入，还剩%d次机会\n", 3 - (i + 1));
//	}
//
//	if (flag == 0)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}


////猜数字游戏
////电脑生成1 ~ 100之间的随机数，之后猜数字
////猜大了会提示猜大了，猜小了会提示猜小了，猜中了会恭喜
//void menu()
//{
//	printf("*****************************\n");
//	printf("********** 1. play **********\n");
//	printf("********** 0. exit **********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//生成随机数
//	int ret = (rand() % 100) + 1; //用于生成随机数的函数，使用需要包含头文件<stdlib.h>
//	//rand()函数的返回值是一个随机整数，范围是0 ~ RAND-MAX（0 ~ 32767）
//	//使用该函数时，需要使用srand()函数设置随机数生成器，srand()的参数改变，随机数就会改变
//	//想要srand()函数的参数一直改变，可以使用时间戳，因为时间戳是一直在变化的
//	//获得时间戳可以使用time()函数，返回值是时间戳，使用需要包含头文件<time.h>
//	//要获得1 ~ 100的随机数，可以将rand()的返回值模100再加1
//
//	//猜数字
//	int num = 0, count = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &num);
//		count++;
//		if (num > ret)
//			printf("猜大了，再试一次吧！\n");
//		else if (num < ret)
//			printf("猜小了，不要气馁哦！\n");
//		else
//		{
//			printf("你好厉害呀！%d次就猜中了呢！\n", count);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //随机数生成器，设置一次即可
//	do 
//	{
//		menu(); //游戏界面s
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game(); //游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


////goto语句
//int main()
//{
//	int i = 0;
//	printf("hehe\n");
//again:
//	printf("haha\n");
//	printf("hihi\n");
//	i++;
//
//	//如果不加限制条件，结果很可能会死循环
//	if(i < 3)
//	    goto again; //遇到这条语句，会跳转到带有"again"标签处继续执行
//	return 0;
//}


////goto语句使用场景
//int main()
//{
//	int ture = 1;
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			for (int n = 0; n < 10; n++)
//				if (ture)
//					goto exit; //这种场景下，使用goto语句就可以跳过所以循环，要是写break则需要写三次
//exit:
//	return 0;
//}


//关机程序
//程序运行起来之后，倒计时60s会自动关机，满足相应条件则取消关机
int main()
{
	char arr[20] = { 0 };
	int flag = 0;

	//"shutdown -s -t 60"，这个命令是60s之后自动关机
	//"shutdown -a"，这个命令是取消关机
	system("shutdown -s -t 60");
	printf("您的电脑将在1分钟之后关机\n");
	printf("输入\"我是猪\"会为您取消关机\n");

again:
	if (flag == 0)
	    printf("输入错误，无法取消关机程序\n");

	scanf("%s", arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
		flag = 1;
		printf("已经取消关机\n");
	}
	else
		goto again;
	return 0;
}