#pragma once
#include<iostream>
#include "point.h"

using namespace std;

class Circle
{
public:
	//设置、获取半径
	void setR(int r);

	int getR();
		//设置、获取圆心
	void setCenter(Point center);

	Point getCenter();
	
private:
	int m_R;         //半径
	Point m_Center;  //圆心
};