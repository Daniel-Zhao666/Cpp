#include<iostream>

using namespace std;

int* fun()
{
	int a = 0;
	return &a;

}

int main()
{
	int *p = fun();

	cout << "*p的值为: " << *p << endl;

	//不要将局部变量的地址放到栈区，当程序执行完后，会将其释放掉
	cout << "*p的值为: " << *p << endl;

	system("pause");
	return 0;
}