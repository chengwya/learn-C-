//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "Student的默认构造函数调用" << endl;
//	}
//	Student(int age)
//	{
//		cout << "Student的有参构造函数调用" << endl;
//		m_age = age;
//	}
//	Student(const Student& s)
//	{
//		cout << "Student的拷贝构造函数调用" << endl;
//		m_age = s.m_age;
//	}
//	~Student()
//	{
//		cout << "Student的析构构造函数调用" << endl;
//	}
//
//
//	int m_age;
//};
//
////使用一个已经创建完毕的对象来初始化一个新的对象
//void test01()
//{
//	Student s1(18);
//	Student s2(s1);
//	
//	cout << "s2的年龄是" << s2.m_age << endl;
//}
//
//void Work1( Student s)
//{
//
//}
////值传递的方式给函数参数传值
//void test02()
//{
//	Student s3;
//	Work1(s3);
//}
//
//Student work2()
//{
//	Student s5;
//	cout << &s5 << endl;
//	return s5;
//}
//
////以值方式返回局部对象
//void test03()
//{
//	Student s4 = work2();
//	cout << &s4 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class Student
{
public:
	/*Student()
	{
		cout << "Student的默认构造函数调用" << endl;
	}*/
	Student(int age)
	{
		cout << "Student的有参构造函数调用" << endl;
		m_age = age;
	}
	Student(const Student& s)
	{
		cout << "Student的拷贝构造函数调用" << endl;
		m_age = s.m_age;
	}
	~Student()
	{
		cout << "Student的析构函数调用" << endl;
	}

	int m_age;
};

//void test01()
//{
//	Student s1;
//	s1.m_age = 18;
//	Student s2(s1);
//	cout << "s2的年龄是：" << s2.m_age << endl;
//}

void test02()
{
	Student s3(20);
	Student s4(s3);
	cout << "s4的年龄是" << s4.m_age << endl;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
}