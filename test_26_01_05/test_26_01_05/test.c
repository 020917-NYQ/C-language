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


////static修饰局部变量
//void test1()
//{
//	int a = 5;
//	a++;
//	printf("%d ", a);
//}
//
//void test2()
//{
//	static int a = 5; //加上static修饰之后，可以保存上一次执行的值
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//		test1(); //打印结果为：6 6 6 6 6 6 6 6 6 6
//	printf("\n");
//
//	for (int i = 0; i < 10; i++)
//		test2(); //打印结果为：6 7 8 9 10 11 12 13 14 15
//	printf("\n");
//
//	return 0;
//}


////static修饰全局变量
//extern int add; //用extern声明外部符号
//extern int val; //当用extern声明被static修饰的全局变量时，结果会报错
////这是因为被static修饰后，该全局变量的外部链接属性变成了内部链接属性
////导致该变量只能在自己的文件中使用，其他文件中不可使用
//
//int main()
//{
//	printf("%d\n", add); //打印结果为2026
//	//printf("%d\n", val); //结果报错
//	return 0;
//}


////static修饰函数
//extern int Add(int x, int y); //声明外部的函数
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}


////#define定义常量
//#define NUM 100 //定义常量100，这里不需要加";"


////#define定义宏
//#define ADD(x, y) ((x) + (y)) //定义宏，功能和函数类似，计算两个数的和
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", ADD(10, 20)); //打印结果为：30
//  //当想要使用宏时，会将"ADD(10, 20)"用"((x) + (y))"替换
//	return 0;
//}


////指针
//int main()
//{
//	int a = 10;
//	//"int a"代表在内存申请一块空间，大小为4B（由变量类型"int"决定），变量名为"a"
//	//这个"a"并不是把内存中这块中间叫做"a"，而是为了方便我们使用和管理这块空间起的名字罢了
//	//这块空间在内存中占有4个内存单元，每个单元1B，也就是共32个bit位
//	//每一个bit位可以存储1位数字0或1，那么这块空间最多可以存储32个数字0或1
//	//这个范围是00000000 00000000 00000000 00000000【无符号】 ~ 11111111 11111111 11111111 11111111【无符号】
//	//换算成十进制是0 ~ 4,294,967,295，也就是说，我们对该变量赋值时，理论上最多可以放的数字最大是4,294,967,295
//	//但是C语言中，"int"是有符号的整型，实际上的范围如下
//	//11111111 11111111 11111111 11111111【有符号】 ~ 01111111 11111111 11111111 11111111【有符号】（-2,147,483,648 ~ 2,147,483,647）
//	//"unsigned int"才表示无符号整型，实际范围是0 ~ 4,294,967,295
//
//	int* pa = &a; //这行代码是拿到了变量a的地址，并把这个地址存放到整型指针变量pa中
//	//变量a的是4B的内存单元，里面包含了32个bit位，也就有32个地址，那么pa中存放的到底是哪个地址呢
//	//下面代码的运行结果展示了pa中存放的内容，和变量a的32个内存单元地址
//
//	//先打印出pa里面的值（地址）看看
//	printf("%p\n", pa); //使用"%p"可以打印地址
//
//	//再打印出变量a的32个地址看看
//	for (int i = 0; i < 32; i++)
//		printf("%p\n", (char*)(& a) + i);
//	return 0;
//}


////指针的解引用
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//对变量pa进行解引用，得到的就是a
//	printf("%d\n", *pa); //打印结果为：10
//
//	*pa = 20; //还可以通过pa来修改a的值
//	printf("%d\n", a); //打印结果为：20
//	return 0;
//}


////字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch; //char*的字符指针可以存储字符变量
//	return 0;
//}


////指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}


//创建结构体
struct Book
{
	char name[50]; //书名
	int price; //价格
};

int main()
{
	struct Book b = { "《深入理解计算机系统》",59 }; //结构体变量的类型是"struct Book"
	printf("书名：%s   价格：%d元\n", b.name, b.price); //打印结果为：书名：《深入理解计算机系统》   价格：59元
	//这里的"."是结构成员访问操作符，使用对象是结构体对象
	
	struct Book* pb = &b; //结构体指针变量存放结构体变量，类型是"struct Book*"
	printf("书名：%s   价格：%d元\n", (*pb).name, (*pb).price); //打印结果为：书名：《深入理解计算机系统》   价格：59元
	printf("书名：%s   价格：%d元\n", pb->name, pb->price); //打印结果为：书名：《深入理解计算机系统》   价格：59元
	//这里的"->"也是结构成员访问操作符，只不过使用对象是结构体指针
	return 0;
}

