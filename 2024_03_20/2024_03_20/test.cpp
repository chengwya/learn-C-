//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	//成员函数加号运算符重载
//	/*Student operator+(Student& s)
//	{
//		Student temp;
//		temp.m_A = this->m_A + s.m_A;
//		temp.m_B = this->m_B + s.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
//
////全局函数加号运算符重载
//Student operator+(Student& s1, Student& s2)
//{
//	Student temp;
//	temp.m_A = s1.m_A + s2.m_A;
//	temp.m_B = s1.m_B + s2.m_B;
//	return temp;
//}
//
////函数重载
//Student operator+(Student& s, int val)
//{
//	Student temp;
//	temp.m_A = s.m_A + val;
//	temp.m_B = s.m_B + val;
//	return temp;
//}
//
//void test01()
//{
//	Student s1;
//	s1.m_A = 10;
//	s1.m_B = 20;
//	Student s2;
//	s2.m_A = 10;
//	s2.m_B = 20;
//
//	Student s3 = s1 + s2;
//	Student s4 = s1 + 10;
//	//成员函数本质调用
//	//Student s3 = s1.operator+(s2);
//	//全局函数本质调用
//	//Student s3 = operator+(s1, s3);
//
//	cout << "s3 - m_A = " << s3.m_A << endl;
//	cout << "s3 - m_B = " << s3.m_B << endl;
//	cout << "s4 - m_A = " << s4.m_A << endl;
//	cout << "s4 - m_B = " << s4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student
//{
//	friend ostream& operator<<(ostream& cout, Student& s);
//public:
//	Student(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//使用成员函数重载左移运算符 s1.operator<<(cout) s1 << cout，但无法实现，因为cout在左侧
//只能使用全局函数重载左移运算符
//全局函数重载调用本质 operator<< (cout , p)  cout << p
//ostream& operator<<(ostream &cout, Student &s)
//{
//	cout << "m_A = " << s.m_A << " " << "m_B = " << s.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Student s1(10, 20);
//
//	cout << s1 << endl;
//	cout << "hello C++" << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class MyIntData                        
//{
//	friend ostream& operator<<(ostream& cout, MyIntData myInt);
//public:
//	MyIntData()
//	{
//		m_Num = 0;
//	}
//
//	//前置++
//	MyIntData& operator++()
//	{
//		m_Num++;
//		return *this; //将自身返回
//	}
//
//	//后置++
//	MyIntData operator++(int)
//	{
//		MyIntData temp = *this; //先记录当前结果
//		m_Num++;				//递增
//		return temp;			//将记录结果返回
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyIntData myInt)
//{
//	cout << myInt.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyIntData myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
//void test02()
//{
//	MyIntData myInt2;
//	cout << myInt2++ << endl;
//	cout << myInt2 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class BasePage
{
public:
	void top()
	{
		cout << "欢迎来到abc线上购物中心" << endl;
	}
	void left()
	{
		cout << "Shoes、Water、Paper、Clothes...(公共分类列表)" << endl;
	}
	void bottom()
	{
		cout << "服务中心、购物指导、联系我们...(公共底部)" << endl;
	}
};

class Shoes :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy shoes" << endl;
	}
};

class Water :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy water" << endl;
	}
};

class Paper :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy paper" << endl;
	}
};

class Clothes : public BasePage
{
public:
	void conter()
	{
		cout << "You can buy clothes" << endl;
	}
};

void test01()
{
	cout << "鞋子购买页面如下：" << endl;
	Shoes sh;
	sh.top();
	sh.bottom();
	sh.left();
	sh.conter();
	cout << "--------------------" << endl;
	cout << "矿泉水购买页面如下：" << endl;
	Water wt;
	wt.top();
	wt.bottom();
	wt.left();
	wt.conter();
	cout << "--------------------" << endl;
	cout << "纸巾购买页面如下：" << endl;
	Paper pr;
	pr.top();
	pr.bottom();
	pr.left();
	pr.conter();
	cout << "--------------------" << endl;
	cout << "衣服购买页面如下：" << endl;
	Clothes cl;
	cl.top();
	cl.bottom();
	cl.left();
	cl.conter();
}

int main()
{
	test01();
	return 0;
}