#include "point.h"


//不同作用域下的成员函数需要在使用时告知 其作用域

//设置、获取圆心坐标
void Point::setX(int x)
{
	m_X = x;
}
int Point::getX()
{
	return m_X;
}

void Point::setY(int y)
{
	m_Y = y;
}
int Point::getY()
{
	return m_Y;
}


