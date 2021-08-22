#include<iostream>
#include<string>

using namespace std;

class Stu
{
public:

	//写 姓名 
	void SetName(string name)
	{
		Name = name;
	}

	//读 姓名
	string GetName()
	{
		return Name;
	}

	//年龄只读
	int GetAge()
	{
		Age = 0;
		return Age;
	}


private:
	//需要对 类 内部的成员进行访问的时候 通常在私有权限之前引入接口 即成员函数来实现
	//name权限 -->可读写
	string Name;

	// age -> 只读
	int Age;


};

/*
int main()
{

	Stu s1;

	s1.SetName("Hello");

	cout << "姓名为：" << s1.GetName() << endl;

	cout << "年龄为: " << s1.GetAge() << endl;
	

	system("pause");
	return 0;
}
*/

//创建一个学生类
/*class Student
{
	//权限设置
	//访问权限 公共权限
     public:
		 //属性  成员属性
		 //姓名、学号
		 string Name;
		 int id;

		 //行为：
		//成员方法 即用函数进行实现
		//给学生的姓名和学号进行赋值，并显示出来
		 void Show()
		 {
			 cout << "姓名: " << Name << "学号: " << id << endl;
		 }

		 //可以通过对行为的修改来实现其属性的修改
		 void SetName(string name)
		 {
			 Name = name;
		 }

		 void SetId(int Id)
		 {
			 id = Id;
		 }

		 //class所创建的变量默认权限为私有
		 //struct 创建的变量的默认权限为公共 可以访问 

		 //成员属性的私有化   1、具有可由程序员独立控制其读写操作
		 //2、对于写权限 可以检测数据的有效性


};*/



/*int main()
{
	//创建一个具体学生类的对象
	//通过类进行实例化对象
	Student s1;
	//属性赋值
	//s1.Name = "hello ";
	//s1.id = 123;

	s1.SetName("Good ");

	s1.SetId(123);

	s1.Show();

	system("pause");
	return 0;
}*/