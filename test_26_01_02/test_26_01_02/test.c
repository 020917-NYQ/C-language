#include <stdio.h>
////变量的作用域
//int num1 = 20;
//int main()
//{
//	{
//		int num = 100;
//		printf("%d\n", num); //可以成功输出100
//	}
//	//printf("%d\n", num); //无法找到num，因为变量num已经被销毁了
//	//局部变量的作用域是变量所在的局部范围
//
//	printf("%d\n", num1); //可以成功输出20，因为num1是全局变量
//	//全局变量的作用域是整个工程
//	return 0;
//}


////字面常量
//int main()
//{
//	3.14; //浮点型常量
//	100; // 整形常量
//	'a';
//	return 0;
//}


////const修饰的常变量
//int main()
//{
//	const int num = 10; //此时num称为常变量，本质上还是变量，但不可修改性决定了它的常属性
//	//num = 20; //由于num已经被const修饰，具有常属性，所以不可被修改
//	return 0;
//}

//
////#define定义的标识符常量
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	//NUM = 20; //不可修改，因为NUM是常量
//	return 0;
//}


////枚举常量
//enum Colour //三原色，红绿蓝
//{
//	RED = 0, GREEN = 1, BLUE = 2 //这里对枚举常量初始化，即使不初始化，默认值也是0、1、2
//};
//
//int main()
//{
//	//RED = 10; //枚举常量不可修改
//	return 0;
//}


////字符和字符串的打印
//int main()
//{
//	char ch = 'a'; //定义字符变量ch
//	printf("%c\n", ch); //使用"%c"打印字符
//
//	char arr[10] = "abcdef"; //定义字符串"abcdef"
//	printf("%s\n", arr); //使用"%s"打印字符串
//	return 0;
//}


////两种创建方式的对比
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//arr1在创建的时候，会主动在末尾添加"\0"作为字符串结束标志
//	//而arr2创建之后并没有添加"\0"，所以打印出现乱码，直到出现"\0"才会停止打印
//	
//	//主动加入"\0"
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%s\n", arr3);
//	return 0;
//}


////strlen()函数
//#include <string.h> //想要使用strlen()函数，需要包含该头文件
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	//strlen()函数可以求出字符串的长度，其中"\0"结束标志不计算在内
//	return 0;
//}


