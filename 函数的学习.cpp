#include<iostream>

using namespace std;

// .cpp文件中的函数中进行具体的功能实现
//多在.h文件中表达函数的申明

/*函数的申明在要调用的函数之前*/
//函数申明不用有函数体的部分
//同一个函数的定义有且仅有一次，申明则可以多次使用

int mim(int x, int y)
{
	
	if (x > y )
	{
		return y;
	}
	else 
	{
		return x;
	}
}

/*int sum(int a, int b)
{
	//a、b形参 --> 用来接收main函数中传过来的实参
	int c = a + b;
	return  c;//返回数据的类型同函数的类型必须相同
}*/



/*
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "交换后x的值: " << x << endl;
	cout << "交换后y的值: " << y << endl;

}
*/


void main()
{
	int a = 100;
	int b = 200;

	int c = mim(a, b );

	cout << "最小值c为: " << c << endl;

	/*
	//在传值函数中，形参的改变并不会改变实参的值
	int a = 1;
	int b = 3;

	cout << "交换前a的值: " << a << endl;
	cout << "交换前b的值: " << b << endl;

	swap(a, b);

	cout << "交换后a的值: " << a << endl;
	cout << "交换后b的值: " << b << endl;
	*/


	/*传值调用  区别于传址调用（防止数据被修改时使用，或者有数据的溢出）*/
	//x、y为实参
	/*int x = 1;
	int y = 2;
	
	int	c = sum(x, y);
	cout << "c= " << c << endl;
	*/
	system("pause");
	//return 0;
}
