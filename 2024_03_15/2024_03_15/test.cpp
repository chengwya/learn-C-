//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "Student��Ĭ�Ϲ��캯������" << endl;
//	}
//	Student(int age)
//	{
//		cout << "Student���вι��캯������" << endl;
//		m_age = age;
//	}
//	Student(const Student& s)
//	{
//		cout << "Student�Ŀ������캯������" << endl;
//		m_age = s.m_age;
//	}
//	~Student()
//	{
//		cout << "Student���������캯������" << endl;
//	}
//
//
//	int m_age;
//};
//
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
//void test01()
//{
//	Student s1(18);
//	Student s2(s1);
//	
//	cout << "s2��������" << s2.m_age << endl;
//}
//
//void Work1( Student s)
//{
//
//}
////ֵ���ݵķ�ʽ������������ֵ
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
////��ֵ��ʽ���ؾֲ�����
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
		cout << "Student��Ĭ�Ϲ��캯������" << endl;
	}*/
	Student(int age)
	{
		cout << "Student���вι��캯������" << endl;
		m_age = age;
	}
	Student(const Student& s)
	{
		cout << "Student�Ŀ������캯������" << endl;
		m_age = s.m_age;
	}
	~Student()
	{
		cout << "Student��������������" << endl;
	}

	int m_age;
};

//void test01()
//{
//	Student s1;
//	s1.m_age = 18;
//	Student s2(s1);
//	cout << "s2�������ǣ�" << s2.m_age << endl;
//}

void test02()
{
	Student s3(20);
	Student s4(s3);
	cout << "s4��������" << s4.m_age << endl;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
}