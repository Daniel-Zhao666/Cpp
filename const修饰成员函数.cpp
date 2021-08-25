#include<iostream>

using namespace std;

class Table
{
public:
	//常函数
	//this 指针的本质是 指针常量 即指针的指向不可被改变
	void showtab() const
	{
		//加上const相当于 const Table * const this --> 限制其指针指向的值也不可被修改
		//this -> len = 100;
		//this = NULL;//不可访问已经被修改的指针的方向 Table * const this
		this->width = 10;
	}

	void func(){};

	int len;
	//常对象 加上   mutable  后可在常函数中可以修改
	mutable int width;


};

void testshow()
{
	//常对象也可被修改
	const Table tab;
	
	//tab.len = 1;
	tab.width = 20;

	//常对象只可调用常函数
	tab.showtab();

	//tab.func();常对象不可调用普通成员函数（普通成员函数可以修改成员的属性）

}

/*
int main()
{

	
	system("pause");
	return 0;
}*/