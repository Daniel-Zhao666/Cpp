#pragma once
#include<iostream>

using namespace std;

//头文件中申明类 源文件中实现类的功能
class Point
{
public:
	//设置、获取圆心坐标
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	
private:
	//圆心坐标的确定
	int m_X;
	int m_Y;

};