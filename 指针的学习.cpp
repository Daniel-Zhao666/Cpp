#include<iostream>

using namespace std;

/*指针+函数 --> 实现冒泡升序排列*/

void bubble_sort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void PrintArray(int arr[], int len)
{
	for (int x = 0; x < len ; x++)
	{
		cout << arr[x] << endl;
	}
}

void main()
{
	int arr[8] = {3,6,9,8,1,0,13,11};

	int length = sizeof(arr) / sizeof(arr[0]);

	cout << "排序前: " << endl;
	
	for (int x = 0; x < 8; x++)
	{
		cout << arr[x] << endl;
	}
	
	bubble_sort(arr, length);

	cout << "排序后: " << endl;
	PrintArray(arr,length);

	system("pause");
}



/*
int add(int* p1, int* p2)
{
	int sum = 0;

	sum = *p1 + *p2;

	return sum;
}*/

//void main()
//{
//	/* 指针与函数 */
//	int a = 1;
//	int b = 2;
//
//	int sum = add(&a, &b);
//
//	cout << "sum的值为: " << sum << endl;

	//指针遍历数组
	/*int arr[6] = {1,2,3};

	int *p = arr;
	for (int i = 0; i < 3; i++)
	{
		cout << *p++ << endl;
	}*/

	 
	//int a = 1;
	//int b = 2;

	/*关键在于const后面紧跟着的是变量、还是指针，(const + p)-->指针常量， (const +  *p) -->常量指针 
	*/

	//C++中的运算符优先级为赋值运算符(= += ) > 单目运算符(* --> 指针 &)  

	//const int * p = &b;//const 修饰的指针变量不可被更改，但指针的指向可以被修改（常量指针）
	//理解为*先与p结合 = 指针，将b的地址取出赋值给*p, 然后加上const int 修饰

	//int * const p = &a;//指针常量，重点在常量（值可以被修改，但指针的指向不可被修改）
	//理解为 const先同p结合 = 常量 int*为整形指针 指向p中的内容（a的地址）
//	*p = 3;

	//cout << "a的值为：" << a << endl;

	/*空指针用来初始化指针变量，NULL对应的内存空间不可被访问*/
	/*野指针所指向的空间不可被访问*/
	//在32byte的平台下，不论数据类型是什么，指针所占的内存大小都为4byte
	//64byte下的指针所占内存大小为8byte
	/*
	int a = 6;
	
	int * p;

	p = &a;

	cout << &a << endl;
	cout << p << endl;

	*p = 3;
	cout << "*p= "<< *p << endl;
	*/

//	system("pause");
//}