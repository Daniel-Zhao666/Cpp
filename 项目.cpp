#include<iostream>
#include<string>

#define MAX 1000

using namespace std;

/*创建菜单栏*/
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出此系统  *****" << endl;
	cout << "***************************" << endl;
}

/*创建联系人的结构体*/
struct person
{
	string Name;
	int Sex;
	int Age;
	string Phone;
	string Addr;
};

/*通讯录的结构体*/
struct Addressbooks
{
	/*通讯录中保存联系人的数组*/
	struct person Personarray[MAX];

	/*记录下当前通讯录中的联系人个数*/
	int size;
};

/*添加联系人的函数*/
void Addperson(Addressbooks *abs)
{
	//首选判断通讯录是否人数已满，如果已满，不在添加
	if (abs->size == MAX)
	{
		cout << "人数已满，无法继续添加" << endl;
		return;
	}
	else
	{
		//开始添加联系人
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->Personarray[abs->size].Name = name;
	}

	//请输入性别
	cout << "请输入性别：" << endl;
	cout << "1、男 " << endl;
	cout << "2、女 " << endl;

	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->Personarray[abs->size].Sex = sex;
			break;
		}
		cout << "输入错误，请重新输入！" << endl;
	}


	//请输入年龄
	cout << "请输入年龄 " << endl;
	int age = 0;
		cin >> age;
		abs->Personarray[abs->size].Age = age;


	//请输入联系电话
	cout << "请输入电话：" << endl;
	string phone;
	cin >> phone;
	abs->Personarray[abs->size].Phone = phone;

	//请输入地址
	cout << "请输入地址: " << endl;
	string address;
	cin >> address;
	abs->Personarray[abs->size].Addr = address;

	//更新通讯录的人数
	abs->size++;

	cout << "添加联系人成功" << endl;

	//添加信息成功后需要清屏幕
	system("pause");
	system("cls");
}


//2、显示联系人
void ShowPerson(Addressbooks *abs)
{
	//判断当前的通讯录中有没有联系人
	if (abs ->size ==0)
	{
		cout << "当前通讯录中没有联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名: " << abs->Personarray[i].Name << "\t";
			cout << "性别: " << (abs->Personarray[i].Sex  == 1 ? "男":"女") << "\t";
			cout << "年龄: " << abs->Personarray[i].Age << "\t";
			cout << "电话: " << abs->Personarray[i].Phone << "\t";
			cout << "地址: " << abs->Personarray[i].Addr << endl;

		}

	}
	system("pause");
	system("cls");

}

//判断联系人是否存在
/*传通讯录的地址， 将比对的联系人名称也作为参数*/

int IsExist(Addressbooks *abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		//找到用户的名称
		if (abs->Personarray[i].Name == name)
		{
			return i;//找到就返回这个人所在的下标
		}
	}
	/*如果没找到*/
	return -1;//遍历结束都没找到 那么返回 -1
}

//删除联系人
void DelPerson(Addressbooks *abs)
{
	cout << "请输入您要删除的联系人 " << endl;
	string name;
	cin >> name;

	/*  ret == -1  未查到  
	    ret != -1  查到了 */
	int ret = IsExist(abs, name);

	if (ret != -1)
	{
		//已经查到联系人,并进行删除
		for (int i = ret; i < abs->size; i++)
		{
			/*数据的前移 >覆盖前一个地址上的人名 */
			abs->Personarray[i] = abs->Personarray[i + 1];
		}
		abs -> size--;
		cout << "删除成功 " << endl;
	}
	else
	{
		cout << "未查到联系人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void FindPerson(Addressbooks *p)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断要找的联系人是否存在
	int ret = IsExist(p, name);
	if (ret != -1)
	{
		cout << "姓名: " << p->Personarray[ret].Name << "\t";
		cout << "性别: " << p->Personarray[ret].Sex << "\t";
		cout << "年龄: " << p->Personarray[ret].Age << "\t";
		cout << "电话: " << p->Personarray[ret].Phone << "\t";
		cout << "地址: " << p->Personarray[ret].Addr << endl;
	}
	else
	{
		//没有找到需要的；联系人
		cout << "没找到您要找的联系人" << endl;
	}
	system("pause");
	system("cls");

}


//修改联系人
void ModefyPerson(Addressbooks *p)
{
	cout << "请输入联系人" << endl;
	string name;
	cin >> name;

	int ret = IsExist(p, name);
	//找到您要改的联系人
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		p->Personarray[ret].Name = name;
		
		//性别
		cout << "请输入性别" << endl;
		cout << "1 ---> 男" << endl;
		cout << "2 ---> 女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
             if (sex == 1 || sex == 2)
		   {
			//输入正确就退出循环
		   	p->Personarray[ret].Sex = sex;
			break;
		   }
			 cout << "输入有误, 请重新输入" << endl;
		}
		
		//年龄的输入
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		p->Personarray[ret].Age = age;

		//电话
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		p->Personarray[ret].Phone = phone;

		//地址
		cout << "请输入地址" << endl;
		string address;
		cin >> address;
		p->Personarray[ret].Addr = address;

		cout << "修改成功" << endl;

	}
	else
	{
		cout << "没找到您要找到的联系人" << endl;
	}
	system("pause");
	system("cls");

}

/*清空联系人--> 重置联系人的数量为0 */ 
void CleanPerson(Addressbooks *p)
{
	p->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	/*创建通讯录的结构体变量*/
	Addressbooks abs;
	//初始化当前通讯录中的人数
	abs.size = 0;

	int sel = 0;

	while (true)
	{
		/*菜单创建*/
		showMenu();

		cin >> sel;

		switch (sel)
		{
		case 1://添加联系人
			Addperson(&abs);
			break;
		case 2://显示联系人
			ShowPerson(&abs);
			break;
		case 3://删除联系人
		            /*{cout << "请输入想要删除的人名: " << endl;
		               string name;
		               cin >> name;
		            if (IsExist(&abs, name) == -1)
		            {
		            	cout << "找不到此人" << endl;
		            }
		            else
		            {
		            	cout << "找到了 " << endl;
		            }
		            }*/
			DelPerson(&abs);

			break;
		case 4://查找联系人
			FindPerson(&abs);
			break;
		case 5://修改联系人
			ModefyPerson(&abs);
			break;
		case 6: //清空联系人
			CleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}

