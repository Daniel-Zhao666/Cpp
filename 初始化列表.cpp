#include<iostream>
using namespace std;

class Stu
{
public:

	//初始化列表
	Stu(int a, int b, int c) : A(a), B(b), C(c)
	{
	
	}

	int A;
	int B;
	int C;
};

void hs()
{
	Stu s(1, 2, 3);
	cout << "A = " << s.A << endl;
	cout << "B = " << s.B << endl;
	cout << "C = " << s.C << endl;
}

/*
int main()
{

	hs();

	system("pause");
	return 0;
}*/