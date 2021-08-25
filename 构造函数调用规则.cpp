#include<iostream>
using namespace std;

//默认情况下 编译器会为创建的一个类提供3个函数
//1、无参构造函数 有参构造函数  拷贝函数
//2、当只写有参构造函数时 编译器不再提供无参构造函数(需要调用则无效)
//3、当只写拷贝函数时 编译器同样不再提供无参构造函数和有参构造函数(需要调用这两个函数时 报错)

/*
class Stu
{
public:
	Stu()
	{
		cout << "Stu的无参构造函数调用" << endl;
	}

	Stu(int age)
	{
		age = age;
		cout << "stu的有参构造函数调用" << endl;
	}

    Stu(const Stu &s)
	{
		cout << "Stu的拷贝函数调用" << endl;
		Age = s.Age;
	}

	~Stu()
	{
		cout << "Stu的析构函数调用" << endl;
	}

	int Age;
};*/

//void test0()
//{
//	Stu s;
//	s.Age = 10;
//
//	Stu s1(s);
//	cout << "s1的年龄为: " << s1.Age << endl;
//}

//void test1()
//{
//	Stu s2;
//}

/*
void test2()
{
	//Stu s;
	Stu s(10);
	Stu s3(s);

	cout << "s3的年龄为: " << s3.Age << endl;
}*/

/*
int main()
{
	//test0();
	//test1();
	test2();

	system("pause");
	return 0;
}*/