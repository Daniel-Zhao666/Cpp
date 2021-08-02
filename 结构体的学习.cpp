#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(struct Hero HArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j的下标的元素年龄大于 j+1 的元素的年龄，交换两个元素
			if (HArray[j].age > HArray[j+1].age)
			{
				struct Hero temp = HArray[j];
				HArray[j] = HArray[j + 1];
				HArray[j + 1] = temp;
			}
		}
	}
}

/*打印后*/
void printHero(struct Hero HArray[], int len)
{
	cout << "排序后打印" << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << HArray[i].name << "年龄: " << HArray[i].age << "性别： " << HArray[i].sex << endl;
	}
	
}

void main()
{
	struct Hero HArray[5] = 
	{
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"}
	};
	
	int len = sizeof(HArray) / sizeof(HArray[0]);

	cout << "排序前的打印: " << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << HArray[i].name << " 年龄: " << HArray[i].age << " 性别: " << HArray[i].sex << endl;
	}

	bubblesort(HArray, len);

	
	printHero(HArray,len);

	system("pause");
}



/*struct student
{
	string studentname;
	int score;
};

struct Teacher
{
	string teachername;
	string studentname;
	struct student SArray[5];
};*/

/*void printInfo(struct Teacher TArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "教师姓名: " << TArray[i].teachername << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生的姓名: " << TArray[i].SArray[j].studentname << "分数：" <<
				TArray[i].SArray[j].score << endl;
		}

	}
}
*/

/*为老师以及学生的情况进行赋值的函数*/
//void Space(struct Teacher TArray[], int len)
//{
//	string nameSeed = "abvgh";
//	//给老师的信息进行赋值(包括自己的信息和所带学生的信息)
//	for (int i = 0; i < len; i++)
//	{
//		TArray[i].teachername = "Teacher_";
//		TArray[i].teachername += nameSeed[i];
//
//		/*为每个老师所带的学生信息进行赋值*/
//		for (int j = 0; j < 5; j++)
//		{
//			/*学生信息的赋值*/
//			TArray[i].SArray[j].studentname = "Student_";
//			TArray[i].SArray[j].studentname += nameSeed[j];
//
//			int random = rand() % 61 + 40;
//			TArray[i].SArray[j].score = random;
//		}
//	}
//}



//void main()
//{
//	/*产生随机数种子*/
//	srand((unsigned int)time(NULL));
//	/*创建老师的数组*/
//	struct Teacher TArray[3];
//
//	/*通过函数为三名老师的信息进行赋值，以及给学生信息也赋值*/
//	int len = sizeof(TArray) / sizeof(TArray[0]);
//	Space(TArray,len);
//
//	/*string SArray[5] = {};*/
//	printInfo(TArray, len);
//
//	system("pause");
//}

/*struct stu
{
	//成员列表
	string name;
	int age;
	string height;
	string weight;

};

struct teacher 
{
	int id;
	int age;
	string profession;
	struct stu s;
};

void printstu(const struct stu * p)
{
	//const 修饰结构体变量时不会被外界修改结构体内部的元素
	//p->name = "Do";

	cout << "学生的名字: " << p->name << " 学生身高: " << p->height << endl;
}*/



//void main()
//{
//
//	/*结构体传参数函数*/
//    struct stu s;
//	s.name = "Hello";
//	s.age = 23;
//	s.height = "180cm";
//
//	printstu(&s);//地址传递 形参可以修改实参的值
//
//	cout << "学生名字: " << s.name << endl;

	/*结构体嵌套结构体*/
	/*teacher t;
	t.id  = 2013111666;
	t.age = 36;
	t.profession = "电气工程";
	t.s.name = "Hello";

	cout << "教师的工号:" << t.id << " 教师的专业: " << t.profession << " 教师所教学生的名字: " << t.s.name << endl;
	*/


	/*结构体指针*/
	/*struct stu s = {"你好", 20, "180cm","75kg"};

	struct stu *p = &s;

	cout << "姓名：" << p->name << " 年龄：" << p->age << " 身高:" << p->height << " 体重：" << p->weight << endl;
	*/


	//创建结构体变量
	/*struct stu s1;
	s1.name = "Hello";
	s1.age = 20;
	s1.height = "180cm";
	s1.weight = "60kg";

	cout << "姓名: " << s1.name << "年龄: " << s1.age << "身高: "
		<< s1.height << "体重: " << s1.weight << endl;*/

//	system("pause");
//}