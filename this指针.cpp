#include<iostream>
using namespace std;


class Student
{
public:
	Student(int weight)
	{
	//当形参和成员变量同名称时 可以用this指针来进行区分
		this -> weight = weight;
	}

	//采取引用返回的方式 以防止出现值返回造成创建新的变量
	Student& StudentandStudent(Student stu)
	{
		this->weight += stu.weight;//this指针存在于每个成员函数中
		//返回对象本身
		return *this;
	}

	int weight;
};

void show()
{
	Student stu(50);
	cout << "weight = " << stu.weight << endl;
}

void show1()
{
	Student stu1(30);
	Student Stu_new(30);
	Stu_new.StudentandStudent(stu1).StudentandStudent(stu1).StudentandStudent(stu1);
	cout << "Stu_new的体重为： " << Stu_new.weight << endl;
}

/*
int main()
{
	//show();
	show1();

	system("pause");
	return 0;
}
*/