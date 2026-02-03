#include <stdio.h>
////指针
//int main()
//{
//	int a = 10;
//	int* pa = &a; //将a的地址放到指针变量pa中
//	//指针就是地址，口头说的指针其实是指针变量
//	return 0;
//}


////指针类型
//int main()
//{
//	char c = 'a';
//	short s = 10;
//	int i = 100;
//
//	char* pc = &c; //字符型指针变量
//	short* ps = &s; //短整型指针变量
//	int* pi = &i; //整型指针变量
//
//	printf("%zu %zu %zu\n", sizeof(pc), sizeof(ps), sizeof(pi)); //打印结果为：8 8 8
//	//指针变量在64位平台上大小固定为8个字节
//	return 0;
//}


////指针类型的第一个意义
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%x\n", a); //打印结果为：0
//	
//	a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	printf("%x\n", a); //打印结果为：11223300
//
//	a = 0x11223344;
//	short* ps = &a;
//	*ps = 0;
//	printf("%x\n", a); //打印结果为：11220000
//
//	//从上面可以看出，指针类型决定了解引用指针时可以访问几个字节
//	//用整型指针接收，可以改变4个字节，字符指针改变1个字节，短整型指针改变2个字节
//	return 0;
//}


////指针类型的第二个意义
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	short* ps = &a;
//	printf("%p %p\n", pa, pa + 1); //打印结果为：00000060476FF614 00000060476FF618
//	printf("%p %p\n", pc, pc + 1); //打印结果为：00000060476FF614 00000060476FF615
//	printf("%p %p\n", ps, ps + 1); //打印结果为：00000060476FF614 00000060476FF616
//	
//	//用整型指针接收的话，加1跳过了一个整型，地址会加4
//	//用字符型指针接收的话，加1跳过了一个字符型，地址会加1
//	//用短整型指针接收的话，加1跳过了一个短整型，地址会加2
//	//因此指针类型决定了指针进行加减整数时，一步可以走多远（步长）
//	return 0;
//}


////用指针对数组初始化
//int main()
//{
//	int arr[10] = { 0 }, arr1[10] = { 0 };
//	int* pa = &arr[0]; //拿到数组首元素
//	char* pc = &arr1[0]; //用char*指针接收，即使可以改变步长，但一次也只改变1个字节，而不是4个字节
//
//	for (int i = 0; i < 10; i++)
//		*(pa++) = i + 1; //对数组初始化为：1 2 3 4 5 6 7 8 9 10
//
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}


////指针创建未初始化
//int main()
//{
//	int* p;
//	//*p = 20; //这里报错，因为使用了未初始化的局部变量"p"
//	//printf("%d\n", *p);
//	
//	//创建了指针但未初始化时，里面存储的是随机值，这里的指针就是野指针
//	//如果要修改这个值的话，会造成非法访问
//	return 0;
//}


////指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	printf("%d %d\n", arr[-1], arr[11]); //打印结果为：-858993460 -858993460
//	//arr[-1]、arr[11]是以有符号整型的形式打印这两个内存中的内容
//
//	printf("%d %d\n", *(p - 1), *(p + 11)); //打印结果为：-858993460 -858993460
//	//本质上这就是野指针的越界访问，这里的p就是野指针，数组名本质也是指针
//	return 0;
//}


////指针指向已释放的空间
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test(); //用"p"接收变量"a"的地址，但出了test()作用域时，变量"a"已经被销毁
//	*p = 100; //这里访问了已经销毁的空间，p就是野指针
//	return 0;
//}


////指针创建时初始化
//int main()
//{
//	int* p = NULL; //如果指针创建时，不知道指向哪里，可以初始化为空指针
//	return 0;
//}


////指针指向空间释放时，将指针置空
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 100;
//	p = NULL; //指针使用结束之后要及时释放
//	return 0;
//}


////避免返回局部变量的地址
//int* test()
//{
//	int a = 10;
//	return &a; //这里写语法正确，但是尽量避免
//}
//
//int main()
//{ 
//	return 0; 
//}


////指针使用之前可以判断是否为空
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	if (p != NULL) //指针使用之前最好进行判断
//		*p = 100; //使用指针
//	return 0;
//}


////指针加减整数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*(str++) != '\0') //这里使用的是指针加整数，指针每次循环会加1
//		count++;
//	return count;
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("abcdef")); //打印结果为：6
//	return 0;
//}


////指针减指针
////指针减指针的前提条件是两个指针指向同一块空间，指针类型相同
////相减的本质就是两个地址相减，得到的还是地址，但是这个地址有特殊含义
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = &arr[8] - &arr[4];
//	printf("%d\n", n);
//
//	int* p1 = &arr[8], * p2 = &arr[4];
//	printf("%p %p %p %d\n", p1, p2, (int*)(p1 - p2), (int)(p1 - p2));
//	//可以看出，指针之间相减得到的是两个指针间的元素个数
//
//	printf("%p %d\n", (int*)(p2 - p1), (int)(p2 - p1));
//	//如果是小地址减去大地址得到的就是一个负数，负数的绝对值同样是相差的元素个数
//	return 0;
//}


////指针减指针的使用场景
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*(str++) != '\0');
//	return str - start - 1;
//	//这里使用的是指针减指针，减1是最后一次不满足条件，但也执行了str++
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("abcdef")); //打印结果为：6
//	return 0;
//}


////指针关系运算
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* pa = &arr[5]; //执行数组最后一个元素的下一个元素
//
//	//将数组中的内容置为0
//	while (pa > &arr[0]) //这里使用指针的关系运算
//		*(--pa) = 0;
//
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]); //打印结果为：0 0 0 0 0
//	return 0;
//}


////指针和数组的关系
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr; //数组名是数组首元素地址，可以直接存储到指针中
//
//	for (int i = 0; i < 10; i++)
//		*(pa++) = i + 1; //使用指针为数组赋值
//
//	pa = arr;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *(pa + i)); //打印结果为：1 2 3 4 5 6 7 8 9 10
//	return 0;
//}


////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a; //创建一级指针变量"pa"，存放整型变量"a"的地址
//	int** ppa = &pa; //创建二级指针变量"ppa"，存放整型指针变量"pa"的地址
//
//	*(*ppa) = 100; //第一次解引用找到"pa"，第二次解引用找到"a"
//	
//	printf("%d\n", a); //打印结果为：100
//	return 0;
//}


////创建指针数组
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* pa = &a, * pb = &b, * pc = &c;
//	int* parr[10] = { pa, pb, pc }; //数组里面存放的都是一级指针
//	//也可以这样写，不创建一级指针：int* parr[10] = { &a, &b, &c };
//
//	printf("%d %d %d\n", *(parr[0]), *(parr[1]), *(parr[2])); //打印结果为：10 20 30
//	return 0;
//}


////指针数组与二级指针的关系
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[10] = { &a, &b, &c };
//	int** pa = &arr[0]; //创建二级指针，保存指针数组首元素的地址
//
//	printf("%d %d %d\n", **pa, **(pa + 1), **(pa + 2)); //打印结果为：10 20 30
//	return 0;
//}


////一维数组模拟二维数组
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//
//	//访问数组
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%d ", parr[i][j]);
//			//以下几种写法都正确
//			//printf("%d ", (*(parr + i))[j]);
//		    //printf("%d ", *((parr[i]) + j));
//			//printf("%d ", *(*(parr + i) + j));
//		printf("\n");
//	}
//	return 0;
//}


////数组下标访问与指针访问
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//
//	for (int i = 0; i < 10; i++)
//		printf("%p %p\n", &arr[i], pa + i);
//	//打印结果相同，说明"&arr[i]"等价于"pa + i"
//	//那么"arr[i]"就等价于"*(pa + i)"，另外pa中存放的是arr，所以也等价于"*(arr + i)"
//	return 0;
//}


////结构体类型声明
////结构体类型：struct Book
////成员变量：name、price
////全局变量：b1、b2
////struct Book
////{
////	char name[30];
////	int price;
////}b1、b2;
//
////为结构体重命名为：Book
//typedef struct Book
//{
//	char name[30];
//	int price;
//}Book;
//
//int main()
//{
//	struct Book b3; //可以用结构体类型创建局部变量
//	Book b4; //也可以用重命名创建局部变量
//	return 0;
//}


////结构体变量创建与初始化
//typedef struct Book
//{
//	char name[30];
//	int price;
//}Book;
//
//int main()
//{
//	Book b1 = { "《数据结构》", 59 };
//	Book b2 = { "《C++ Primer》", 75 };
//
//	printf("%s %d\n", b1.name, b1.price);
//	printf("%s %d\n", b2.name, b2.price);
//	return 0;
//}


////结构体指针变量
//typedef struct Book
//{
//	char name[30];
//	int price;
//}Book, *PB;
//
//int main()
//{
//	Book b1 = { "《数据结构》", 59 }, b2 = { "《C++ Primer》", 75 };
//	PB pb1 = &b1, pb2 = &b2; //定义结构体指针
//
//	printf("%s %d\n", pb1->name, pb1->price);
//	printf("%s %d\n", pb2->name, pb2->price);
//	return 0;
//}


//结构体传参
struct S
{
	int arr[10];
	int n;
};

void Print1(struct S ss)
{
	for (int i = 0; i < 10; i++)
		printf("%d ", ss.arr[i]);
	printf("\n%d\n", ss.n);
}

void Print2(struct S* ps)
{
	for (int i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);
	printf("\n%d\n", ps->n);
}

int main()
{
	struct S s = { {1, 2, 3}, 100 };
	Print1(s);
	Print2(&s);
	return 0;
}