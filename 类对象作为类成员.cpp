#include<iostream>
#include<string>

using namespace std;


class Computer
{
public:
	Computer(string Logo)
	{
		logo = Logo;
		cout << "Computer的构造函数调用" << endl;
	}

	~Computer()
	{
		cout << "Computer的析构函数调用" << endl;
	}

	string logo;

};

class Stu
{
public:
	Stu(string name, string Logo) : Name(name), computer(Logo)
	{
		cout << "Stu的构造函数调用" << endl;
	}

	~Stu()
	{
		cout << "Stu的析构函数调用" << endl;
	}

	//姓名
	string Name;

	//在本类中创建的其他类的成员  在构造函数调用时先调用的新创建的其他类
	//电脑
	Computer computer;

	//析构时 其顺序和构造相反
};

void cs1()
{
	Stu s("你好", "ASUS");
	
	cout << "***: " << s.Name << " 拥有: " << s.computer.logo << endl;
}

/*
int main()
{
	cs1();

	system("pause");
	return 0;
}*/