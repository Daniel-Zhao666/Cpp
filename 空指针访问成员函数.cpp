#include<iostream>
using namespace std;

//空指针调用成员函数
class Lib
{
public:
	void Showlib()
	{
		cout << "展示图书馆" << endl;
	}

	void Showbooknum()
	{
		//判断this所指向的空间是否为空
		if (this == NULL)
		{
			return;
		}
		cout << "图书的数量为: " << this -> Book_num << endl;//属性之前默认 加上this 
	}


	int Book_num;
};

void testfun()
{
	Lib * lib = NULL;

	lib->Showlib();
	lib->Showbooknum();
}

/*
int main()
{

	testfun();

	system("pause");
	return 0;
}
*/