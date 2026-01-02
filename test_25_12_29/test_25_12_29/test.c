#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////第一个C语言程序
//#include <stdio.h>
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}
//
////printf()是一个库函数，功能是在屏幕上打印""中的内容，使用时需要包含头文件"stdio.h"
////printf()函数中的"\n"是换行符，可以在输出"Hello World"之后进行换行
////main()函数是程序的入口，C语言中有且仅有一个main()函数，C语言程序从该函数的第一行开始执行
////main()的函数类型是"int"，代表该函数执行后返回一个整型值，如果执行成功，会返回"0"
////"return 0;"的含义是mian()函数返回值为0（前提是执行没有错误的情况下）


////main()函数的其他几种写法
//int main() { return 0; } //最常用的写法
//int main(void) { return 0; } //不太常用的写法
//void main() {} //古老的写法
//main() {} //不标准的写法


////使用数据类型
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 10); //"%d"是打印十进制整数，也就是逗号后面的数字"10"
//	return 0;
//}


////sizeof操作符
//#include <stdio.h>
//int main()
//{
//	printf("sizeof(char) = %d\n", sizeof(char));
//	printf("sizeof(short) = %d\n", sizeof(short));
//	printf("sizeof(int) = %d\n", sizeof(int));
//	printf("sizeof(long) = %d\n", sizeof(long));
//	printf("sizeof(long long) = %d\n", sizeof(long long));
//	printf("sizeof(float) = %d\n", sizeof(float));
//	printf("sizeof(double) = %d\n", sizeof(double));
//	return 0;
//}

////定义变量
//#include <stdio.h>
//int main()
//{
//	int age = 23; //定义年龄为23岁，使用整型
//	float height = 172.5f; //定义身高为172.5cm，使用浮点型
//	//C语言中，默认小数为double类型，但定义了float类型，所以在小数后面加上"f"
//
//	printf("%d\n", age); //输出年龄
//	printf("%f\n", height); //输出身高，"%f"用于打印单精度浮点数，"%lf"用于打印双精度浮点数
//	//"%f"和"%lf"都可以输出到小数点后六位
//	
//	printf("%.1f\n", height); //输出身高，"%.1f"用于保留一位小数
//	printf("%.2f\n", height); //输出身高，"%.2f"用于保留两位小数
//	return 0;
//}


////非法的变量名
//#include <stdio.h>
//int main()
//{
//	int 3@abc = 10; //出现"@"，命名非法
//	char a - b - c = 'a'; //出现"-"，命名非法
//	short a b123 = 20; //出现" "（空格），命名非法
//	int 2B = 250; //数字开头，命名非法
//	float int = 3.14; //"int"是C语言的关键字，命名非法
//	return 0;
//}


////局部变量和全局变量
//#include <stdio.h>
//
//int num = 20; //全局变量
//
//int main()
//{
//	printf("%d\n", num);
//
//	int num = 10; //局部变量
//	printf("%d\n", num); //全局变量和局部变量名字冲突情况下，局部优先
//	return 0;
//}


//写一个程序，实现两个整数相加
//VS中认为scanf()函数不安全，如果强行使用需要在最顶部写下面这行代码
//#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2); //把输入的两个数字存储到num1和num2中
	int sum = num1 + num2; //求和
	printf("%d\n", sum);
	return 0;
}