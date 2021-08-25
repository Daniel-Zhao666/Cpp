#include<iostream>

using namespace std;

//拷贝构造函数的调用时机:

//1、使用一个已经创建好的对象 初始化一个新的对象

//2、值传递给函数参数传值

//3、值方式返回局部对象

/*
class Stu
{
public:

	Stu()
	{
		cout << "Stu的默认构造函数调用" << endl;
	}

	Stu(int age)
	{
		Age = age;
		cout << "Stu的有参函数调用" << endl;
	}

	Stu(const Stu &s)
	{
		Age = s.Age;
		cout << "Stu的拷贝函数调用" << endl;
	}

	~Stu()
	{
		cout << "Stu的析构函数调用" << endl;
	}

	int Age;
};*/

/*
//1、使用一个已经创建好的对象 初始化一个新的对象
void test()
{
	Stu s1(20);
	Stu s2(s1);

	cout << "s2的年龄为: " << s2.Age << endl;
}

//2、值传递给函数参数传值
void tranv(Stu s)
{

}
void test1()
{
	Stu s;
	tranv(s);
}

//3、值方式返回局部对象
Stu tranv2()
{
	//创建局部对象
	Stu s1;
	cout << (int*)&s1 << endl;
	return s1;
}

void test2()
{
	Stu s = tranv2();
	cout << (int*)&s << endl;
}
*/

/*
int main()
{
	//test();
	//test1();
	test2();

	system("pause");
	return 0;
}
*/


/*
class Stu
{
public:
	//有参构造函数
	Stu(int a)
	{
		age = a;
		cout << "Stu的有参构造函数" << endl;
	}

	//无参构造函数
	Stu()
	{
		cout << "Stu的无参构造函数" << endl;
	}

	//拷贝构造函数
	Stu(const Stu &s)
	{
	//将所有传入的Stu属性，拷贝到 p中
		age = s.age;
		cout << "Stu的拷贝函数" << endl;
	}

	int age;
};*/

//无参构造函数的调用
/*void test1()
{
	Stu s;

}*/

//有参构造函数调用
/*void test2()
{
	//括号法 
	//Stu s1(20);
	//注： 在调用无参构造函数时 不可加括号  如果加括号 编译器会认为是一个函数的申明 即--> Stu s1();
	
	//显示法
	//Stu s2 = Stu(20);//Stu(20)在单独写时 是作为匿名对象  在当前的行 结束之后 会被立马析构
	//Stu s3 = Stu(s2);//拷贝构造

	//不可用拷贝构造函数 初始化匿名对象 
	//Stu(s3);  //编译器会将拷贝的构造函数认为是 Stu s3 和显示法中的拷贝构造函数发生重定义

	//隐式转化法
	Stu s4 = 20; //等价于 Stu s4 = Stu(20) -->  有参构造
	Stu s5 = s4; //拷贝构造

}*/

/*
int main()
{
	//test1();
	test2();

	system("pause");
	return 0;
}
*/

/*
class Student
{
public:
	//构造函数
	Student()
	{
		cout << "Student的构造函数调用" << endl;
	}

	//析构函数
	~Student()
	{
		cout << "Student的析构函数的调用" << endl;
	}
};


void test()
{
	Student s;
}*/

/*
//构造函数用于初始化  析构函数用于清理
int main()
{
	//1、构造函数  类名(){}  无返回值 不加void
	//2、函数名与类名相同
	//3、可以有参数 ，可以出现重载
	//4、程序调用对象时自动调用构造 无需手动调用  且只调用一次

	test();

	//1、析构函数  ~类名(){}  无返回值 不加void
	//2、函数名同类名
	//3、不可有参数  不发生重载
	//4、程序在对象销毁前自动调用  无需手动 也只会调用一次

	system("pause");
	return 0;
}
*/