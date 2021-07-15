#include<iostream>
#include<string>

using namespace std;


int main()
{
	string names[3] = {"张**","李**","黄**"};

	int score[3][3] = { {90,90,100}, {90,60,100}, {60,70,80}};

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
				//cout<< score[i][j] << " " ;
		}
		cout << names[i] << "的分数为: " << sum << endl;//通过行数来得到对应人名的总和
	}

	/*int arr[2][3] = { {1,2,3}, {1,2,3} };

	cout << "整个arr数组所占内存空间的大小" << sizeof(arr) << endl;

	cout << "第一行所占内存空间的大小：" << sizeof(arr[0]) << endl;
	cout << "每个元素所占的内存空间大小" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "二维数组的首地址" << (int)&arr << endl;
	cout << "二维数组的首元素地址" << (int)&arr[0][0] << endl;
	cout << "二维数组第一行的地址" << (int)&arr[0] << endl;
	cout << "二维数组的第二行元素首地址" << (int)&arr[1] << endl;*/
	
	//cout << sizeof(arr) << endl;
	/*int arr1[3][3] = { { 1, 2, 3 }, { 1, 2, 3 }, {1, 2, 3} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}*/

	system("pause");
	return 0;
}