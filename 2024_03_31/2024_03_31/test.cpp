//#include <iostream>
//using namespace std;
//
//template<class T>
//void MySwap(T& a, T& b) //交换函数
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template <class T>
//void MySort(T arr[], int len) //排序函数
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; //默认最大值的下标
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
//void printArray(T arr[], int len)   //打印数组函数
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
//	//测试char类型数组
//	char chArray[10] = "dbcaefg";
//	int chLength = sizeof(chArray) / sizeof(char); //计算数组长度
//	MySort(chArray, chLength);
//	printArray(chArray, chLength);
//
//	//测试int类型数组
//	int intArray[] = { 6,2,4,3,9,8,1,5,7 }; 
//	int intLength = sizeof(intArray) / sizeof(int); ////计算数组长度
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
//	cout << myAdd_1(a, c) << endl; //107,普通函数调用时可发生自动类型转换(隐式类型转换)
//
//	//cout << myAdd_2(a, c) << endl; //报错,函模板调用时，如果用自动类型转换，将不会发生隐式类型转换
//
//	cout << myAdd_2<int>(a, c) << endl; //107,如果用显示指定类型的方式，可发生隐式类型转换
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
//	cout << "普通函数调用" << endl;
//	return a + b;
//}
//
//template <class T>
//int myAdd(T a, T b)
//{
//	cout << "函数模板调用" << endl;
//	return a + b;
//}
//
//template <class T>
//int myAdd(T a, T b, T c)
//{
//	cout << "函数模板重载调用" << endl;
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
//	myAdd(a, b);     //普通函数调用
//
//	myAdd<>(a, b);   //函数模板调用
//
//	myAdd(a, b, 30); //函数模板重载调用
//
//	myAdd(ch1, ch2); //函数模板调用 
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
//template<> bool myCompare(Student & p1, Student& p2) //使用具体化Student版本实现代码，具体化优先调用
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
//	Student s1("小明", 20);
//	Student s2("小红", 18);
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
//		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01()
//{
//	Student<string, int> s1("小明", 18);
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
//		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01()
//{
//	//Student s1("小明", 18); //报错，类模板没有自动类型推导
//	Student<string> s1("小明", 18);
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
//	//s1.func2(); //报错，函数调用才会去创建成员函数
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
//		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
//void printStuInfo(Student<string, int>&s) //传入指定类型
//{
//	s.showStuInfo();
//}
//
//void test01()
//{
//	Student<string, int>s("小明", 18);
//	printStuInfo(s);
//}
//
//template<class T1, class T2>
//void printStuInfo2(Student<T1, T2>& s) //参数模板化
//{
//	s.showStuInfo();
//	cout << "T1的类型：" << typeid(T1).name() << endl; //T1的类型：class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
//	cout << "T2的类型：" << typeid(T2).name() << endl; //T2的类型：int 
//}
//
//void test02()
//{
//	Student<string, int>s("小红", 19);
//	printStuInfo2(s);
//}
//
//template<class T>
//void printStuInfo3(T& s) //整个类模板化
//{
//	s.showStuInfo();
//	cout << "T的类型：" << typeid(T).name() << endl; //T的类型：class Student<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int>
//}
//
//void test03()
//{
//	Student<string, int>s("小王", 20);
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
////class Son :public Base //报错，子类在声明的时候，要指定父类中T的类型
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
//class Son2 :public Base<T2> //想灵活指定父类中T的类型，子类需也变成类模板
//{
//public:
//	void showType()
//	{
//		cout << "T1的类型：" << typeid(T1).name() << endl; //T1的类型：int
//		cout << "T2的类型：" << typeid(T2).name() << endl; //T2的类型：char
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
//	//创建一个vector容器
//	vector<int> v;
//
//	//插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//通过迭代器访问
//	vector<int>::iterator itBegin = v.begin(); //起始迭代器，指向容器第一个元素
//	vector<int>::iterator itEnd = v.end();     //结束迭代器，指向容器最后一个元素的下一个位置
//
//	//方式1 遍历 - while
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//方式2 遍历 - for
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//方式3 遍历 - STL提供遍历算法
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
//class Student  //自定义数据类型
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
//	Student s1("小明", 20);
//	Student s2("小红", 21);
//	Student s3("小李", 18);
//	Student s4("小王", 19);
//	Student s5("小刘", 22);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//	for (vector<Student>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//}
//
//void test02() //自定义数据类型 - 指针
//{
//	vector<Student*> v;
//
//	Student s1("小明", 20);
//	Student s2("小红", 21);
//	Student s3("小李", 18);
//	Student s4("小王", 19);
//	Student s5("小刘", 22);
//
//	v.push_back(&s1);
//	v.push_back(&s2);
//	v.push_back(&s3);
//	v.push_back(&s4);
//	v.push_back(&s5);
//
//	for (vector<Student*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
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
//	cout << "姓名： " << this->m_Name << " 年龄：" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Student<string, int> s("小明", 18);
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
////#include "Student.cpp" //解决方法1 - 包含源文件
//
//#include "Student.hpp" //解决方法2 - .h和.cpp内容写一起，改后缀.hpp文件
//
//void test01()
//{
//	Student<string, int>s("小明", 18);
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

//提前让编译器知道Studet类存在
template<class T1, class T2> 
class Student;

//类外实现
template<class T1, class T2>
void printStuInfo(Student<T1, T2>s)
{
	cout << "姓名：" << s.m_Name << " 年龄：" << s.m_Age << endl;
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

	//全局函数 - 类内实现
	friend void printStuInfo(Student<T1, T2>s)
	{
		cout << "姓名：" << s.m_Name << " 年龄：" << s.m_Age << endl;
	}

	//全局函数 - 类外实现
	//提前让编译器知道函数的存在
	//加空模板参数列表
	friend void printStuInfo<>(Student<T1, T2>s);

	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Student<string, int>s("小明", 18);
	printStuInfo(s);

	Student<string, int>s2("小红", 19);
	printStuInfo(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}