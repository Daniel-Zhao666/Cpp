#include<iostream>

using namespace std;

//函数重载 -->> 注意事项
//1、引用也可作为重载的条件
//2、函数重载遇到函数默认参数

void hanshu(int &a)
{
	cout << "hanshu(int &a)的调用 " << endl;
}

//+ const 相当于常量指针 限制其值不能被修改
void hanshu(const int &a)
{
	cout << "hanshu(const &a)的调用 " << endl;
}


void add(int a , int b = 2)
{
	cout << "add函数中a、b的调用" << endl;
}

void  add(int a )
{
	cout << "add函数a变量的调用" << endl;
}

int main()
{
	//int a = 1;
	//hanshu(a);

	//const 会将代码进行优化 --->> 创建一个中间变量存放传入的实参
	//hanshu(10);

	//add(1);//出现二义性，导致编译器无法区分具体调用的函数
	system("pause");
	return 0;
}

//函数的重载满足的条件
//1、作用域为同一个 例：在全局作用域中
//2、函数的名称相同
//3、函数的参数不同，或者个数不同，或者顺序不同

//void Div(int a,  double b)
//{
//	cout << "a / b = " << a / b << endl;
//}
//
//void Div(int a, int b)
//{
//	cout << "a / b = " << a / b << endl;
//}
//
//void Div(double a, int b)
//{
//	cout << "a / b = " << a / b << endl;
//}



//函数的返回值不可作为函数重载的条件
//double Div(int a, double b)
//{
//	cout << "a / b = " << a / b << endl;
//}

//函数的占位参数 --> 就是在函数中只传形参的数据类型，而不进行具体赋值操作
//void Swap(int a, int);

//在函数的申明中如果有参数，那么实现的函数不能再有默认参数
//函数申明和实现有且仅有一个有默认参数

//int add(int a ,int b , int c);

//C++中可以在函数的实现中，直接对形参进行赋初值
//如果在函数的某个位置参数有默认值，那么从该位置往后，从左往右的参数都必须要有默认值
/*int add(int a = 1, int b = 2, int c =3)
{
	 return  a + b + c; 
}*/

/*int main()
{
	//Div(1, 3.0);
	//Div(3.0, 1);
	Div(1,1);

	//如果在函数调用中赋初值后，那么在函数实现中按照所传的实参为准来实现
	//int ret = add(2,3,4);

	//cout << ret << endl;

	system("pause");
	return 0;
}*/