/*#include <iostream>
using namespace std;

class Cube			//������������
{
public:
	void setH(int h) //���ø߶�
	{
		m_h = h;
	}

	int getH()       //��ȡ�߶�
	{
		return m_h;
	}

	void setL(int l) //���ó���
	{
		m_l = l;
	}
		
	int getL()		 //��ȡ����
	{
		return m_l;
	}

	void setW(int w) //���ÿ��
	{
		m_w = w;
	}

	int getW()       //��ȡ���
	{
		return m_w; 
	}

	int caculateS()  //�������
	{
		return 2 * m_l * m_h + 2 * m_l * m_w + 2 * m_w * m_l;
	}

	int caculateV()  //�������
	{
		return m_l * m_w * m_h;
	}

private:
	int m_h; //��
	int m_l; //��
	int m_w; //��
};

bool isSame(Cube& c1, Cube& c2) //�ж������������Ƿ����
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
		return true;
	return false;
}

int main()
{
	Cube c1;    //�������������c1
	c1.setH(20);
	c1.setL(20);
	c1.setW(30);
	cout << "c1�������" << c1.caculateS() << endl;
	cout << "c1�������" << c1.caculateV() << endl;
	Cube c2;	//�������������c1
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	cout << "c2�������" << c2.caculateS() << endl;
	cout << "c2�������" << c2.caculateV() << endl;
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2���" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
	system("pause");
	return 0;
}*/

//#include <iostream>
//using namespace std;
//
//class Point //��������
//{
//public:
//	void setX(int x) //����x������
//	{
//		m_x = x;
//	}
//
//	int getX()       //��ȡx������
//	{
//		return m_x;
//	}
//
//	void setY(int y) //����y������
//	{
//		m_y = y;
//	}
//
//	int getY()       //��ȡy������
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
//	void setR(int r) //���ð뾶
//	{
//		m_r = r;
//	}
//	int getR()       //��ȡ�뾶
//	{
//		return m_r;
//	}
//
//	void setCenter(Point Center) //����Բ��
//	{
//		m_center = Center;
//	}
//
//	Point getCenter()            //��ȡԲ��
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;   //�뾶
//	Point m_center;  //Բ��
//};
//
//int isInCircle(Circle& c, Point& p)  //�жϵ��Բ�Ĺ�ϵ
//{
//	int distance =  (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//					(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int R = c.getR() * c.getR(); //�뾶ƽ��
//
//	if (distance == R)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance < R)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//	return 0;
//}
//
//int main()
//{
//	Circle c;   //����Բ����c
//	c.setR(10);
//	Point center; //���������center
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;   //���������p
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
		cout << "Student�Ĺ��캯������" << endl;
	}

	~Student()
	{
		cout << "Student��������������" << endl;
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