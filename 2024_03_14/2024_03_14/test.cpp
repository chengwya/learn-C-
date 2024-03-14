/*#include <iostream>
using namespace std;

class Cube			//创建立方体类
{
public:
	void setH(int h) //设置高度
	{
		m_h = h;
	}

	int getH()       //获取高度
	{
		return m_h;
	}

	void setL(int l) //设置长度
	{
		m_l = l;
	}
		
	int getL()		 //获取长度
	{
		return m_l;
	}

	void setW(int w) //设置宽度
	{
		m_w = w;
	}

	int getW()       //获取宽度
	{
		return m_w; 
	}

	int caculateS()  //计算面积
	{
		return 2 * m_l * m_h + 2 * m_l * m_w + 2 * m_w * m_l;
	}

	int caculateV()  //计算体积
	{
		return m_l * m_w * m_h;
	}

private:
	int m_h; //高
	int m_l; //长
	int m_w; //宽
};

bool isSame(Cube& c1, Cube& c2) //判断两个立方体是否相等
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
		return true;
	return false;
}

int main()
{
	Cube c1;    //创建立方体对象c1
	c1.setH(20);
	c1.setL(20);
	c1.setW(30);
	cout << "c1的面积是" << c1.caculateS() << endl;
	cout << "c1的体积是" << c1.caculateV() << endl;
	Cube c2;	//创建立方体对象c1
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	cout << "c2的面积是" << c2.caculateS() << endl;
	cout << "c2的体积是" << c2.caculateV() << endl;
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1与c2相等" << endl;
	}
	else
	{
		cout << "c1与c2不相等" << endl;
	}
	system("pause");
	return 0;
}*/

//#include <iostream>
//using namespace std;
//
//class Point //创建点类
//{
//public:
//	void setX(int x) //设置x轴坐标
//	{
//		m_x = x;
//	}
//
//	int getX()       //获取x轴坐标
//	{
//		return m_x;
//	}
//
//	void setY(int y) //设置y轴坐标
//	{
//		m_y = y;
//	}
//
//	int getY()       //获取y轴坐标
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};
//
//class Circle
//{
//public:
//	void setR(int r) //设置半径
//	{
//		m_r = r;
//	}
//	int getR()       //获取半径
//	{
//		return m_r;
//	}
//
//	void setCenter(Point Center) //设置圆心
//	{
//		m_center = Center;
//	}
//
//	Point getCenter()            //获取圆心
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;   //半径
//	Point m_center;  //圆心
//};
//
//int isInCircle(Circle& c, Point& p)  //判断点跟圆的关系
//{
//	int distance =  (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//					(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int R = c.getR() * c.getR(); //半径平方
//
//	if (distance == R)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance < R)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆外" << endl;
//	}
//	return 0;
//}
//
//int main()
//{
//	Circle c;   //创建圆对象c
//	c.setR(10);
//	Point center; //创建点对象center
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;   //创建点对象p
//	p.setX(10);
//	p.setY(10);
//
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class Student
{
public:
	Student()
	{
		cout << "Student的构造函数调用" << endl;
	}

	~Student()
	{
		cout << "Student的析构函数调用" << endl;
	}
};

void test()
{
	Student s;
}

int main()
{
	test();
	system("pause");
	return 0;
}