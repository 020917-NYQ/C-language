int add = 2026; //全局变量，具有外部链接属性
static int val = 2026; //用static修饰全局变量

//函数同样具有外部链接属性，加上static修饰后，变成了内部链接属性
//这样该函数只能在本文件中使用，其他外部文件中无法使用
static int Add(int x, int y)
{
	return x + y;
}