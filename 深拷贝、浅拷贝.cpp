#include<iostream>

using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默认函数调用" << endl;
	}

	Person(int id, int w)
	{
		ID = id;
		weight = new int(w);//将新引入的变量放到堆区
		cout << "Person的有参函数调用" << endl;
	}

	//新的拷贝构造函数
	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		ID = p.ID;
		//weight = p.weight;//编译器默认拷贝的情况
		//深拷贝
		weight = new int(*p.weight);
	}

	~Person()
	{
		//析构代码 将堆区开辟的数据做释放操作
		if (weight != NULL)
		{
			delete weight;
			weight = NULL;
		}
		//导致堆区被重复释放  <-- 浅拷贝引起
		//深拷贝 --> 解决办法是 重新开辟一个空间来将不同变量的释放进行存放(另写一个拷贝构造函数)
		//堆区数据释放的规则：先进后出

		cout << "Person的析构函数调用" << endl;

	}

	int ID;
	int *weight;
};

void cs()
{
	
	Person p1(106, 180);
	Person p2 = Person(p1);

	cout << "p1的ID为: " << p1.ID << " 体重为: "<< *p1.weight <<  endl;
	cout << "p2的ID为: " << p2.ID << " 体重为: "<< *p2.weight <<  endl;

}
/*
int main()
{
	cs();


	system("pause");
	return 0;
}*/