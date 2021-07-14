#include<iostream>

#include<ctime>

#include<iomanip>

using namespace std;


int main()
{
	//冒泡排序
	int arr[6] = {6, 3, 0, 8, 9, 1}; 

	cout << "排序前：" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	

	///int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	//总共需要排序的轮数（顺序比较的次数） = 元素个数 - 1
	for (int i = 0; i < right; i++)
	{
		//内层循环的比较： 比较的次数 = 元素个数 - 当前的轮数 - 1(sizeof(arr)/sizeof(arr[0])  - 1-i)
		for (int j = 0; j <right - i; j++)
		{
			//当前一个数字比后一个数大的时候进行排序（交换顺序）
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
			    arr[j] = arr[j + 1];
			    arr[j + 1] = temp;
			}
		}
	}

	 cout << "排序后" << endl;
	for (int i = 0; i < right + 1; i++)
	{
		cout << arr[i] << endl;
	}
	  


	/*
	//逆序排序
	int arr[6] = {0, 1, 2, 3, 9, 10};
	cout << "元素逆序前" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}

	int left = 0;//获取数组的首元素的下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//得到数组的最后一个元素下标


	while (left < right)
	{
		int temp = arr[left];
		    arr[left] = arr[right];
		    arr[right] = temp;
		    left++;
		    right--;
	}

	  cout << "元素逆序后" << endl;
	  for (int i = 0; i < 6; i++)
	  {
		  cout << arr[i] << endl;
	  }
	  */

	/*int arr[6] = {100,101,110,108,115,130};
	int max = 10;//自定义参考值，后对数组进行遍历，实时更新最值，最终输出

	for (int i = 0; i < 6; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
     cout << "最大值为：" << max << endl;*/

	/*
	//continue 语句 
	for (int i = 0; i < 10; i++)
	{
		if (0 == i % 2)
		{
			continue; //可以跳过for循环和continue之间的语句不执行，区别于break（直接跳过整个循环）
		}
		cout << i << endl;
	}
	*/

	//外循环一次，对应内循环一周

	//打印乘法口诀表
	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
		//setw() ---> 头文件 <iomanip> ,setw()表示紧跟的数据后边设置预定空间，如果数据小于该空间则
		//左边用0补齐，只对其后面的数据有效
			cout << j << " * " << i << " = " << setw(2) << j * i << "  ";
		}
		cout << endl;
	}*/

	/*
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "hello" << "   ";
		}
		cout << endl;

	}*/

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7 )
		{
			cout << "敲桌子" << endl;//特殊数字的打印
		}
		else//非特殊数字的直接打印
		{
			cout << i << endl;
		}
	}
	*/

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/

	//找到三位数的水仙花数 一个数例: 153 = 1^3 + 5^3 + 3^3
	/*int a = 0;
	int b = 0;
    int c = 0;
	int num = 100;//三位数初始化从100开始
	do
	{
		

		a = num % 10;//获取该三位数的个位数
		b = num / 10 % 10;
		c = num / 100;
		
		if (num == a*a*a + b*b*b + c*c*c)
		{
			cout << num << endl;
		}
		num++;

	} while (num < 1000);
*/

	/*
	int num = 0;

	//先执行do中的语句，后进行判断
	do
	{
		cout << num << endl;
		num++; 
	} while (num < 8);
	*/

	//while -> 先判断条件，后执行
	//while (num < 8)
	//{
	//	cout << num << endl;
	//	num++;
	//}
	
	
	/*
	//猜数字
	//生成随机数
    srand((unsigned int)time(NULL));
	int val = rand() % 10 + 1;//生成一个1~10的随机数字

	cout << "请输入你要猜的数字：" << endl;
	int num = 0;

	while (1)
	{
		cin >> num;

		if (num > val)
		{
			cout << "猜大了，重新来" << num << endl;
		}
		else if (num < val)
		{
			cout << "猜小了，再来" << num << endl;
		}
		else
		{
			cout << "猜对了" << num << endl;
			break;
		}
	}*/
	

	/*int a = 0;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}*/

	/*cout << "请对选手进行评价" << endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 9:
		cout << "非常优秀" << endl;
		break;
	case 8:
		cout << "良好" << endl;
		break;
	case 7:
		cout << "合格" << endl;
		break;
	case 6:
		cout << "继续努力" << endl;
		break;
	default:
		cout << "粗心大意" << endl;
		break;
	}//switch在判断时除int和char外，不能够判断其他情况
	*/

	system("pause");
	return 0;
}