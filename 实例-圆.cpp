#include<iostream>
#include "circle.h"
#include "point.h"

using namespace std;


//创建点类
//class Point 
//{
//public:
//	//设置、获取圆心坐标
//	void setX(int x)
//	{
//		 m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//
//private:
//	//圆心坐标的确定
//	int m_X;
//	int m_Y;
//
//};


//创建圆类
//class Circle
//{
//public:
//	//设置、获取半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//
//	//设置、获取圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;         //半径
//	Point m_Center;  //圆心
//};

//判断点 、 圆之间的关系
void IfOnCircle(Circle &c, Point &p)
{
	//计算两点之间距离的平方
	int Distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
				   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int RDistance = c.getR() * c.getR();

	//判断以上两个量的关系
	if (Distance > RDistance)
	{
		cout << "点在圆外" << endl;
	}
	else if (Distance < RDistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆上" << endl;
	}

}


/*int main()
{
	//创建圆(实例化) 以（1，0）为圆心 半径为1的圆
	Circle c;
	c.setR(1);
	Point center;
	center.setX(1);
	center.setY(0);
	c.setCenter(center);

	//创建点(实例化)
	Point  p;
	p.setX(1);
	p.setY(0);
	//判断关系
	IfOnCircle(c , p);

	system("pause");
	return 0;
}
*/

/*
//创建立方体的类
//属性设置
//行为   立方体的面积和体积
//全局函数 成员函数判断立方体是否相等

class Cube
{
	//对属性进行操作(函数进行)
public:
	//分别获取立方体的长、宽、高
   //分别获取立方体的长、宽、高
	void SetL(int l)
	{
		m_L = l;
	}
	int GetL()
	{
		return m_L;
	}

	void SetW(int w)
	{
		m_W = w;
	}
	int GetW()
	{
		return m_W;
	}

	void SetH(int h)
	{
		m_H = h;
	}
	int GetH()
	{
		return m_H;
	}

	//计算面积
	int CalS()
	{
		return 2 * m_L* m_W + 2 * m_L*m_H + 2 * m_W*m_H;
	}

	//计算体积
	int CalV()
	{
		return m_L * m_W * m_H;
	}

	//成员函数判断两个立方体是否相同
	bool IfSameByClass(Cube &C)
	{
		if ((m_L == C.GetL()) && (m_W == C.GetW()) && (m_H == C.GetH()))
		{
			return true;
		}
			return false;
	}

  //属性设置为私有
private:
	int m_L;
	int m_W;
	int m_H;

};

//创建一个全局函数 比较两个立方体是否相同
bool IfSame(Cube &C, Cube &C1)
{
	if ( (C.GetL() == C1.GetL()) && (C.GetW() == C1.GetW()) && (C.GetH() == C1.GetH()) )
	{
		return true;
	}
	else
	{
		return false;
	}

}


int main()
{
	//创建长、宽、高的对象
	Cube C;
	C.SetL(3);
	C.SetW(3);
	C.SetH(3);

	cout << "C的面积：" << C.CalS() << endl;
	cout << "C的体积：" << C.CalV() << endl;

	Cube C1;
	C1.SetL(1);
	C1.SetW(1);
	C1.SetH(1);

	cout << "C1面积为: " << C1.CalS() << endl;
	cout << "C1体积为: " << C1.CalV() << endl;

	
	bool ret = IfSame(C, C1);
	if (ret)
	{
		cout << "全局函数判断后: C和C1相同" << endl;
	}
	else
	{
		cout << "全局函数判断后: C和C1不同" << endl;
	}

	

	ret = C.IfSameByClass(C1);
	if (ret)
	{
		cout << "成员函数判断后：C和C1相同" << endl;
	}
	else
	{
		cout << "成员函数判断后: C和C1不同" << endl;
	}

	system("pause");
	return 0;
}
*/