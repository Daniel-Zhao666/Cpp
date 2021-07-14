#include<iostream>
#include<string>

using namespace std;//空间

#define Year 365

int main()
{

	/*cout << "一年天数:" << Year << "天" << endl;//拼接*/
	/*cout << "hello world!" << endl*/

	//float f1 = 2.3f;//加 "f" 表示有效数字为单精度,否则可能会导致精度缺失(double -> float)

	//cout << "f1的精度打印" << f1 << endl;

	//double d1 = 2.312368;//默认情况下为双精度 double

	//cout << "d1的精度显示" << d1 << endl;//默认打印的有效数字为 "6"

	/*char ch1 = 'a';//注：只可用单引号
	char ch2 = 'A';//引号中字符不可多
	char ch3 = '0';*/
	/*cout << "char类型的变量内存中所占大小"<< sizeof(char) << endl;*/

	/*cout << (int)ch1 << endl;//97(内存中对应的ASCII码值)
	cout << (int)ch2 << endl;//65
	cout << (int)ch3 << endl;//48
	*/
	

	/*char str[] = "welcome to CDUT";
	cout << str << endl;
	*/

	/*string str2 = "hello CDUT";
	cout << str2 << endl;
	*/


	//bool flag = true;
	//cout << flag << endl;

	//flag = false;//不能重复定义
	//cout << flag << endl;

	//cout << "bool所占大小：" << sizeof(flag) << endl;

	//string str;
	//cout << "请输入字符串的变量:" << endl;
	//
	//cin >> str;
	//cout << str << endl;

	/*bool flag = true;
	cout << "请输入bool类型的数据" << endl;
	
	cin >> flag;
	cout << flag << endl;*/

	/*int a = 1;
	int b = (a++) * 2;
	cout << "a的值为=" << a << endl;
	cout << "b的值=" << b << endl;*/

	/*
	int c = 3;
	int d = (--c) % 3;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;//前置运算为先进行开始字符，后计算表达式，后置运算相反
	*/

	int a = 1;
	    a %= 10;
	cout << "a=" << a << endl;


    system("pause");//暂停
	return 0;

}