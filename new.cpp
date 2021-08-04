#include<iostream>

using namespace std;

int * fun()
{
	int* p = new int(10);
	return p;

}

void test()
{
	int *p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//堆区的数据由程序员管理释放

	delete p;//删除改地址，进行释放
	//cout << *p << endl;

}

void test1()
{
	int * arr = new int[6];

	for (int i = 0; i < 6; i++)
	{
		arr[i] = i + 1;
	}

	for (int j = 0; j < 6; j++)
	{
		cout << arr[j] << endl;
	}

	//释放数组 --> 加[]
	delete[] arr;
}

int main()
{
	//test();

	test1();
	system("pause");
	return 0;
}