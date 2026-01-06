#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////转义字符
//int main()
//{
//	printf("abc\ndef"); //本意想打印字符串"abc\ndef"，结果"\n"被视为了换行
//	//这里的"\n"就是转义字符，含义是转换原来的含义
//	printf("\n");
//	printf("abc\\ndef"); //可以使用"\"来转义转义字符
//	return 0;
//}


////转义字符"\ddd"和"\xdd"
//int main()
//{
//	printf("%c\n", '\130'); //打印结果为X，这里要求输出字符
//	printf("%d\n", '\130'); //打印结果为88，这里要求输出十进制数字
//	printf("%o\n", '\130'); //打印结果为130，这里要求输出八进制数字
//	//字符"\130"代表一个八进制数字，转换为十进制为：(1×64)+(3×8)+(0×1)=88
//	//在ASCII编码中，编号88所对应的字符刚好是'X'
//	//其中字符'0'~'9'的范围是48~57，字符'A'~'Z'的范围是65~90，字符'a'~'z'的范围是97~122）
//	
//	printf("%c\n", '\x3C'); //打印结果为<，这里要求输出字符
//	printf("%d\n", '\x3C'); //打印结果为60，这里要求输出十进制数字
//	printf("%x\n", '\x3C'); //打印结果为3c，这里要求输出十六进制数字
//	//输出的原理与上面完全相同，但因为ASCII码有限，所以数字不能过大
//	return 0;
//}


////用strlen()函数求字符串长度
//int main()
//{
//	printf("%d\n", strlen("E:\Bite\c - language\test_26_01_05"));
//	//这串字符串共33个字符，但是输出结果是31
//	//因为VS处理时，发现'\B'和'\c'是无效序列（不构成转义字符），因此丢弃了两个'\'
//	return 0;
//}


////选择语句
//int main()
//{
//	char input = 0;
//	printf("你要写代码吗？(请输入：Y or N)\n");
//	scanf("%c", &input);
//	if (input == 'Y')
//		printf("获取好Offer!");
//	else if (input == 'N')
//		printf("回家烤红薯!");
//	else
//		printf("输入错误！");
//	return 0;
//}


////循环语句
//int main()
//{
//	int line = 1;
//	printf("好好学习！\n");
//	while (line <= 1000)
//	{
//		printf("%d:敲代码！\n", line);
//		line++;
//
//		if (line == 500)
//		{
//			printf("我坠入爱河了！\n");
//			break;
//		}
//	}
//
//	if (line == 1000)
//		printf("好Offer!\n");
//	return 0;
//}


////写一个代码求两个整数的和，封装成函数
//int Add(int num1, int num2) //这里的num1和num2是形参
//{
//	return (num1 + num2); //该函数返回值为num1和num2的和
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//直接输出函数Add()的返回值
//	printf("%d\n", Add(num1, num2)); //这里的num1和num2是实参
//	return 0;
//}


////数组
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };
//	//定义一个整形数组，里面存储10个元素
//	//在内存中，会连续存储这10个元素，每个元素都有一个下标，从0开始
//	//因此可以根据元素的下标随机访问到每一个元素
//
//	printf("%d\n", arr[7]); //访问下标为7的元素
//
//	//打印数组中的全部元素
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	//键盘中输入元素存储到数组中
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


////算数操作符：+、-、*、/、%
//int main()
//{
//	printf("%d\n", 15 + 2);
//	printf("%d\n", 15 - 2);
//	printf("%d\n", 15 * 2);
//	printf("%d\n", 15 / 2); //C语言中，整数除法得到的是整数，小数部分会被舍弃
//	printf("%d\n", 15 % 2); //取模得到的永远是整数，且两个操作符必须是整数
//	return 0;
//}


////赋值操作符
//int main()
//{
//	int a = 10; //这里的"="代表把a初始化为10
//	a = 20; //这里的"="是赋值的含义，将20赋值给a
//	return 0;
//}


////"!"逻辑反操作
//int main()
//{
//	int a = 0, b = 1;
//	printf("%d %d\n", !a, !b); //打印结果为：1 0
//	//逻辑反操作是把真变假，假变真，C语言中，0为假，一切的非0表示真
//	//原来的a为假，所以!a就变成了真，在VS环境下用"1"表示真
//	//原来的b为真，所以!b就变成了假，用"0"表示
//
//
//	int flag = 0; //最开始的flag为假
//	//要求flag为真打印"hehe"，为假打印"haha"
//	if (flag)
//		printf("hehe\n"); //flag为假，那么if条件为假，不执行该语句
//	if (!flag)
//		printf("haha\n"); //!flag为真，那么if条件为真，执行该语句
//	return 0;
//}


////"+"、"-"正负号
//int main()
//{
//	int a = 10, b = -10;
//	printf("%d %d\n", -a, -b); //打印结果为：-10
//	//"-"代表在原来的值前面加上负号，而加不加"+"都不改变原来的值
//	return 0;
//}


////"sizeof"计算类型长度
//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d %d %d\n", sizeof(a), sizeof(arr), sizeof(arr[0])); //打印结果为：4 40 4
//	//sizeof(arr)计算的是数组的总大小，sizeof(arr[0])计算的是数组首元素的大小
//
//	//用sizeof操作符计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]); //用总大小除以一个元素的大小
//	printf("%d\n", sz); //打印结果为：10
//
//
//	char ch[] = "abcdef";
//	printf("%d %d %d\n", sizeof(ch), sizeof(ch) / sizeof(ch[0]), strlen(ch)); //打印结果为：7 7 6
//	//根据结果可知，该字符串的大小（所占字节数）为7字节，其中"\0"也占用1个字节
//	//该字符数组的元素个数为7，可知末尾隐藏一个"\0"
//	//使用strlen()函数求字符串长度时，结果为6，说明"\0"虽然占用1个字节，但是不算在字符串长度内
//	return 0;
//}


////"++"、"--"递增递减
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++); //a++是先输出a的值，再a=a+1
//	printf("%d\n", a);
//	printf("%d\n", ++a); //++a是先a=a+1，再输出a的值
//
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	printf("%d\n", --a);
//	return 0;
//}


////"(type)"强制类型转换
//int main()
//{
//	int a = (int)3.14; //本来3.14是double类型，想要存储到int类型变量中，需要强制类型转换为int类型
//	return 0;
//}


////逻辑操作符
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 1 && age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 35)
//		printf("青年\n");
//	else if (age >= 35 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 200)
//		printf("老年\n");
//	else
//		printf("年龄非法\n");
//	return 0;
//}


////逻辑操作符
//int main()
//{
//	int a = 1, b = 0, c = 1, d = 0;
//	printf("%d %d %d %d\n", a && b, a && c, a || b, b || d); //打印结果为：0 1 1 0
//	return 0;
//}


////条件操作符
//int main()
//{
//	//条件操作符可以代替简单的if语句
//	//下面语句的含义是，"10 > 20"如果成立，则整个表达式结果为10，否则为20
//	printf("%d\n", 10 > 20 ? 10 : 20); //打印结果为：20
//	return 0;
//}


////逗号表达式
//int main()
//{
//	//用一些逗号隔开的表达式就是逗号表达式
//	//从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//	int a = 3, b = 5, c = 1, d = 2;
//	printf("%d\n", (a += 3, b -= (c * 2), a += b, d = (d--) + c - 10)); //打印结果为：-7
//	printf("%d %d %d %d\n", a, b, c, d); //打印结果为：9 3 1 -8
//	return 0;
//}


////下标引用操作符
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6 }; //不完全初始化，剩余元素默认初始化为0
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]); //打印结果为：1 2 3 4 5 6 0 0 0 0
//	//这里的"[i]"中的"[]"就是下标引用操作符
//	return 0;
//}


////函数调用操作符
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len); //打印结果为：6
//	//这里调用的函数所带的"()"是函数调用操作符
//	return 0;
//}


////typedef关键字
//int main()
//{
//	typedef int i; //将"int"类型重命名为"i"
//	i a = 10; //用重命名的类型创建变量，这里的"i"就相当于"int"
//	int b = 20; //重命名之后，原来的名字依旧可以使用
//	printf("%d %d\n", a, b); //打印结果为：10 20
//	return 0;
//}


//static修饰局部变量
void test1()
{
	int a = 5;
	a++;
	printf("%d ", a);
}

void test2()
{
	static int a = 5; //加上static修饰之后，可以保存上一次执行的值
	a++;
	printf("%d ", a);
}

int main()
{
	for (int i = 0; i < 10; i++)
		test1(); //打印结果为：6 6 6 6 6 6 6 6 6 6
	printf("\n");

	for (int i = 0; i < 10; i++)
		test2(); //打印结果为：6 7 8 9 10 11 12 13 14 15
	printf("\n");

	return 0;
}