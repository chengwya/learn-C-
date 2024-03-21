//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Student()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	Student& operator=(Student& s)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*s.m_Age);
//		return *this;
//	}
//	int *m_Age;
//};
//
//void test01()
//{
//	Student s1(18);
//	Student s2(20);
//	Student s3(19);
//	s1 = s2 = s3;
//	cout << "s1的年龄是：" << *s1.m_Age << endl;
//	cout << "s2的年龄是：" << *s2.m_Age << endl;
//	cout << "s3的年龄是：" << *s2.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//public:
//	Student(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Student& s)
//	{
//		if (this->m_Age == s.m_Age && this->m_Name == s.m_Name)
//			return true;
//		return false;
//	}
//	bool operator!=(Student& s)
//	{
//		if (this->m_Age == s.m_Age && this->m_Name == s.m_Name)
//			return false;
//		return true;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Student s1("小明", 18);
//	Student s2("小红", 18);
//	if (s1 == s2)
//	{
//		cout << "s1 = s2" << endl;
//	}
//	else
//	{
//		cout << "s1 != s2" << endl;
//	}
//	if (s1 != s2)
//	{
//		cout << "s1 != s2" << endl;
//	}
//	else
//	{
//		cout << "s1 = s2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class Printf
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void Printf02(string test)
{
	cout << test << endl;
}

class numAdd
{
public:
	int operator()(int value1, int value2)
	{
		return value1 + value2;
	}
};

void test01()
{
	Printf p;
	p("Hello C++");  //仿函数
	Printf02("Hello C++");
}

void test02()
{
	numAdd a;
	int result = a(10, 20);
	cout << "result = " << result << endl;
	cout << " numAdd()(20, 20) = " << numAdd()(20, 20) << endl; //匿名对象调用

}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}