#include<iostream>

using namespace std;

class Phone
{
public:
	int x;//非静态成员变量，属于类的对象上

	static int y;//静态成员变量 类内申明 类外初始化   不属于类的对象上

	void function() {};//非静态成员函数，不属于类的对象上
	static void function1(){};//静态成员函数，不属于类的对象上
};
//int Phone::y = 0;

void adjust()
{
	Phone p;
	//空对象占用的内存空间为  1
	//C++的编译器会给每个空对象分配一个byte的空间 ，以便区分空对象所占的内存位置
	//空对象 应有一个独一无二的内存地址

	cout << "sizeof(p) = " << sizeof(p) << endl;
}

void adjust1()
{
	Phone ph;
	cout << "sizeof ph = " << sizeof(ph) << endl;

}

/*
int main()
{
	//adjust();
	adjust1();

	system("pause");
	return 0;
}*/