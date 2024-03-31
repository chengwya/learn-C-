//#include <iostream>
//using namespace std;
//
//template<class T>
//void MySwap(T& a, T& b) //��������
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template <class T>
//void MySort(T arr[], int len) //������
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //Ĭ�����ֵ���±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			MySwap(arr[max], arr[i]); 
//		}
//	}
//}
//
//template <class T>
//void printArray(T arr[], int len)   //��ӡ���麯��
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����char��������
//	char chArray[10] = "dbcaefg";
//	int chLength = sizeof(chArray) / sizeof(char); //�������鳤��
//	MySort(chArray, chLength);
//	printArray(chArray, chLength);
//
//	//����int��������
//	int intArray[] = { 6,2,4,3,9,8,1,5,7 }; 
//	int intLength = sizeof(intArray) / sizeof(int); ////�������鳤��
//	MySort(intArray, intLength);
//	printArray(intArray, intLength);
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
//int myAdd_1(int a, int b)
//{
//	return a + b;
//}
//
//template <class T>
//int myAdd_2(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b =  20;
//	char c = 'a';
//
//	cout << myAdd_1(a, c) << endl; //107,��ͨ��������ʱ�ɷ����Զ�����ת��(��ʽ����ת��)
//
//	//cout << myAdd_2(a, c) << endl; //����,��ģ�����ʱ��������Զ�����ת���������ᷢ����ʽ����ת��
//
//	cout << myAdd_2<int>(a, c) << endl; //107,�������ʾָ�����͵ķ�ʽ���ɷ�����ʽ����ת��
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
//int myAdd(int a, int b)
//{
//	cout << "��ͨ��������" << endl;
//	return a + b;
//}
//
//template <class T>
//int myAdd(T a, T b)
//{
//	cout << "����ģ�����" << endl;
//	return a + b;
//}
//
//template <class T>
//int myAdd(T a, T b, T c)
//{
//	cout << "����ģ�����ص���" << endl;
//	return a + b + c;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char ch1 = 'a';
//	char ch2 = 'b';
//
//	myAdd(a, b);     //��ͨ��������
//
//	myAdd<>(a, b);   //����ģ�����
//
//	myAdd(a, b, 30); //����ģ�����ص���
//
//	myAdd(ch1, ch2); //����ģ����� 
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
//public:
//	Student(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//template <class T>
//bool myCompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<> bool myCompare(Student & p1, Student& p2) //ʹ�þ��廯Student�汾ʵ�ִ��룬���廯���ȵ���
//{
//	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test01()
//{
//	Student s1("С��", 20);
//	Student s2("С��", 18);
//
//	bool result = myCompare(s1, s2);
//	if (result)
//	{
//		cout << "s1 = s2" << endl;
//	}
//	else
//	{
//		cout << "s1 != s2" << endl;
//	}
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
//#include <string>
//
//template <class T1, class T2>
//class Student
//{
//public:
//	Student(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showStuInfo()
//	{
//		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01()
//{
//	Student<string, int> s1("С��", 18);
//	s1.showStuInfo();
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
//template<class T1, class T2 = int>
//class Student
//{
//public:
//	Student(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showStuInfo()
//	{
//		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01()
//{
//	//Student s1("С��", 18); //������ģ��û���Զ������Ƶ�
//	Student<string> s1("С��", 18);
//	s1.showStuInfo();
//
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
//class Student1
//{
//public:
//	void printStudent1()
//	{
//		cout << "Student1" << endl;
//	}
//};
//
//
//class Student2
//{
//public:
//	void printStudent2()
//	{
//		cout << "Student2" << endl;
//	}
//};
//
//template<class T>
//class Class
//{
//public:
//	T student;
//
//	void func1()
//	{
//		student.printStudent1();
//	}
//
//	void func2()
//	{
//		student.printStudent2();
//	}
//
//};
//
//void test01()
//{
//	Class<Student1>s1;
//	s1.func1();
//	//s1.func2(); //�����������òŻ�ȥ������Ա����
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
//template<class T1, class T2>
//class Student
//{
//public:
//	Student(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showStuInfo()
//	{
//		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void printStuInfo(Student<string, int>&s) //����ָ������
//{
//	s.showStuInfo();
//}
//
//void test01()
//{
//	Student<string, int>s("С��", 18);
//	printStuInfo(s);
//}
//
//template<class T1, class T2>
//void printStuInfo2(Student<T1, T2>& s) //����ģ�廯
//{
//	s.showStuInfo();
//	cout << "T1�����ͣ�" << typeid(T1).name() << endl; //T1�����ͣ�class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
//	cout << "T2�����ͣ�" << typeid(T2).name() << endl; //T2�����ͣ�int 
//}
//
//void test02()
//{
//	Student<string, int>s("С��", 19);
//	printStuInfo2(s);
//}
//
//template<class T>
//void printStuInfo3(T& s) //������ģ�廯
//{
//	s.showStuInfo();
//	cout << "T�����ͣ�" << typeid(T).name() << endl; //T�����ͣ�class Student<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int>
//}
//
//void test03()
//{
//	Student<string, int>s("С��", 20);
//	printStuInfo3(s);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//public:
//	T m_age;
//};
//
////class Son :public Base //����������������ʱ��Ҫָ��������T������
//class Son :public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
//template<class T1, class T2>
//class Son2 :public Base<T2> //�����ָ��������T�����ͣ�������Ҳ�����ģ��
//{
//public:
//	void showType()
//	{
//		cout << "T1�����ͣ�" << typeid(T1).name() << endl; //T1�����ͣ�int
//		cout << "T2�����ͣ�" << typeid(T2).name() << endl; //T2�����ͣ�char
//	}
//	T1 m_a;
//};
//
//void test02()
//{
//	Son2<int, char> s2;
//	s2.showType();
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//����һ��vector����
//	vector<int> v;
//
//	//��������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//ͨ������������
//	vector<int>::iterator itBegin = v.begin(); //��ʼ��������ָ��������һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();     //������������ָ���������һ��Ԫ�ص���һ��λ��
//
//	//��ʽ1 ���� - while
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//��ʽ2 ���� - for
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//��ʽ3 ���� - STL�ṩ�����㷨
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}\

//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
//class Student  //�Զ�����������
//{
//public:
//	Student(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Student> v;
//
//	Student s1("С��", 20);
//	Student s2("С��", 21);
//	Student s3("С��", 18);
//	Student s4("С��", 19);
//	Student s5("С��", 22);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//	for (vector<Student>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << endl;
//		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//	}
//}
//
//void test02() //�Զ����������� - ָ��
//{
//	vector<Student*> v;
//
//	Student s1("С��", 20);
//	Student s2("С��", 21);
//	Student s3("С��", 18);
//	Student s4("С��", 19);
//	Student s5("С��", 22);
//
//	v.push_back(&s1);
//	v.push_back(&s2);
//	v.push_back(&s3);
//	v.push_back(&s4);
//	v.push_back(&s5);
//
//	for (vector<Student*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << endl;
//		cout << "������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector>
//
//void test01()
//{
//	vector<vector<int>> v; 
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	vector<int> v5;
//
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		v5.push_back(i + 5);
//	}
//
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator itBegin = (*it).begin(); itBegin != (*it).end(); itBegin++)
//		{
//			cout << *itBegin << " ";
//		}
//		cout << endl;
//	}
//
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
//template<class T1, class T2>
//class Student
//{
//public:
//	Student(T1 name, T2 age);
//
//	void printStuInfo();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Student<T1, T2>::Student(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Student<T1, T2>::printStuInfo()
//{
//	cout << "������ " << this->m_Name << " ���䣺" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Student<string, int> s("С��", 18);
//	s.printStuInfo();
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
////#include "Student.cpp" //�������1 - ����Դ�ļ�
//
//#include "Student.hpp" //�������2 - .h��.cpp����дһ�𣬸ĺ�׺.hpp�ļ�
//
//void test01()
//{
//	Student<string, int>s("С��", 18);
//	s.printStuInfo();
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

//��ǰ�ñ�����֪��Studet�����
template<class T1, class T2> 
class Student;

//����ʵ��
template<class T1, class T2>
void printStuInfo(Student<T1, T2>s)
{
	cout << "������" << s.m_Name << " ���䣺" << s.m_Age << endl;
}

template<class T1,class T2>
class Student
{
public: 
	Student(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//ȫ�ֺ��� - ����ʵ��
	friend void printStuInfo(Student<T1, T2>s)
	{
		cout << "������" << s.m_Name << " ���䣺" << s.m_Age << endl;
	}

	//ȫ�ֺ��� - ����ʵ��
	//��ǰ�ñ�����֪�������Ĵ���
	//�ӿ�ģ������б�
	friend void printStuInfo<>(Student<T1, T2>s);

	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Student<string, int>s("С��", 18);
	printStuInfo(s);

	Student<string, int>s2("С��", 19);
	printStuInfo(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}