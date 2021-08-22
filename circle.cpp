#include "circle.h"

//设置、获取半径
void Circle::setR(int r)
{
  m_R = r;
}
int Circle::getR()
{
  return m_R;
}

//设置、获取圆心
void Circle::setCenter(Point center)
{
  m_Center = center;
}
Point Circle::getCenter()
{
  return m_Center;
}

