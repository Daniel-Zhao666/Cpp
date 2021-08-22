#include<iostream>

using namespace std;

//引用的使用场景
void ShowValue(const int& v)
{
	//v = 1;//相当于常量指针，不可对指针指向的地址中存放的值进行修改
	cout << v << endl;
}

int main()
{
	//int& ref = 1;//引用需要开辟一个合法的空间

	const int& ref = 1;//const后编译器会优化代码，int temp = 1; const int& ref = temp;

	//ref = 2;//错误 --》不可修改值

	//函数中利用const引用，以防止误操作修改实参
	int a = 10;
	ShowValue(a);

	system("pause");
	return 0;
}

/*void swap1(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//引用的传递
void swap2(int& x , int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//引用做函数的返回值
//注：不要返回局部变量的引用
int& test1()
{
	int a = 1;//局部变量存放在 栈区
	return a;//返回一个引用的值
}

//函数的调用可以作为左值
int& test2()
{
	//全局区中的静态变量，在整个程序运行结束后被系统所释放
	static int a = 1;
	return a;

}*/



//int main()
//{
//	int a = 1;
//	int b = 0;
	//const int* p = &a;//常量指针(常指针)，本质是常量（const在前），这个常量是指针的地址
	//指针的方向可以被修改， 指针指向的值不可被修改
	
	// *p = 2;//错误
	//p = &b;//正确  指针的指向可以被修改

 //	int* const p1 = &a;//指针常量(本质是指针)，此时const修饰的是指针所指向的地址（不可更改）
	//即常量的值可以被修改 而指针的方向不可被修改
  //	*p1 = 1; //正确

	//p1 = &a; // 错误

//	cout << "*p1= " << *p1 << endl;

	//int &ref = test1();
	//cout << "ref= " << ref << endl;//编译器做了一次保留
	//cout << "ref= " << ref << endl;//由于a中的局部变量被释放，导致结果出错

	/*int& ref = test2();
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;*/

	//函数的引用可以作为左值使用
	//test2() = 2;
	//cout << "ref= " << ref << endl;

	/*int a = 1;
	int b = 2;
	cout << "交换前a = " << a << endl;
	cout << "交换前b = " << b << endl;*/

	//swap1(&a, &b);
	//cout << "传址交换后a: " << a << endl;
	//cout << "传址交换后b: " << b << endl;


	//swap2(a,b);
	//cout << "引用交换后a: " << a << endl;
	//cout << "引用交换后b: " << b << endl;



	//引用必须初始化,初始化后不可以被改变

	//int &b;
	//int c = 10;

	////引用：  数据类型 &别名 = 原名
	//int &b = a;
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;

	//b = 2;

	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;

//	system("pause");
//
//	return 0;
//}