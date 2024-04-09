//#include <iostream>
//using namespace std;
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//
//void test01()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(4, 40));
//	m1.insert(pair<int, int>(5, 50));
//	printMap(m1);
//
//	map<int, int>m2(m1);
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m1;
//	printMap(m3);
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
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//
//void test01()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 40));
//	m2.insert(pair<int, int>(5, 50));
//	m2.insert(pair<int, int>(6, 60));
//
//	if (m1.empty())
//	{
//		cout << "m1为空" << endl;
//	}
//	else
//	{
//		cout << "m1不为空" << endl;
//		cout << "m1的大小为" << m1.size() << endl;
//	}
//
//	cout << "swap - before " << endl;
//	printMap(m1);
//	printMap(m2);
//
//	cout << "swap - after " << endl;
//	m1.swap(m2);
//	printMap(m1);
//	printMap(m2);
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
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//
//void test01()
//{
//	map<int, int>m1;
//	//插入 - 方法1
//	m1.insert(pair<int, int>(1, 10));
//	//插入 - 方法2
//	m1.insert(make_pair(2, 20));
//	//插入 - 方法3
//	m1.insert(map<int, int>::value_type(3, 30));
//	//插入 - 方法4
//	m1[4] = 40;
//	printMap(m1);
//
//	//删除
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(3);
//	printMap(m1);
//
//	m1.erase(m1.begin(),m1.end());
//	m1.clear();
//	printMap(m1);
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
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//
//void test01()
//{
//	map<int, int>m1;
//
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(4, 40));
//
//	map<int, int>::iterator pos = m1.find(2);
//
//	if (pos != m1.end())
//	{
//		cout << "查到元素 key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	
//	map不允许插入重复key元素，结果要么0 要么1
//	int num = m1.count(1);
//	cout << "num = " << num << endl;
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
//#include <map>
//
//class myCompare
//{
//public:
//	bool operator()( int val1,  int val2)const
//	{
//		//降序
//		return val1 > val2;
//	}
//};
//
//void test01()
//{
//	map<int, int, myCompare>m1;
//
//	m1.insert(make_pair(1, 10));
//	m1.insert(make_pair(4, 40));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(2, 20));
//
//	for (map<int, int, myCompare>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
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
//#include <set>
//
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	set<int>::iterator pos = s1.find(20);
//	if (pos != s1.end())
//	{
//		cout << "找到元素" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	int num = s1.count(10); 
//	cout << "num = " << num << endl;
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
//void test01()
//{
//	pair<string, int>p1("小明", 19);
//	cout << "姓名：" << p1.first << " 年龄： " << p1.second << endl;
//
//	pair<string, int>p2 = make_pair("小红", 18);
//	cout << "姓名：" << p2.first << " 年龄： " << p2.second << endl;
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
//#include <set>
//
//class myCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int, myCompare>s1;
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//
//	for (set<int, myCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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
//#include <set>
//#include <string>
//
//class Student
//{
//public:
//	Student(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class myCompare
//{
//public:
//	bool operator()(const Student& s1, const Student &s2)const
//	{
//		return s1.m_Age > s2.m_Age;
//	}
//};
//
//void test01()
//{
//	Student s1("小明", 18);
//	Student s2("小红", 20);
//	Student s3("小王", 19);
//
//	set<Student, myCompare>s;
//	s.insert(s1);
//	s.insert(s2);
//	s.insert(s3);
//
//	for (set<Student, myCompare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//	cout << endl;
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
//#include <set>
//
//void printSet(set<int>& s) 
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	printSet(s1);
//
//	set<int>s2(s1);
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s1;
//	printSet(s3);
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
//#include <set>
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//
//	set<int>s2;
//	s2.insert(40);
//	s2.insert(50);
//	s2.insert(60);
//	
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为" << s1.size() << endl;
//	}
//
//	cout << "swap - before" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "swap - after" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
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
//#include <set>
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//
//	printSet(s1);
//
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(20);
//	printSet(s1);
//
//	s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
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
//#include <vector>
//#include <algorithm>
//
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
//	if (it != v1.end())
//	{
//		cout << "找到元素" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到元素" << endl;
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
//#include <vector>
//#include <algorithm>
//
//class Student
//{
//public:
//	Student(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Student& s) //重载==
//	{
//		if (this->m_Name == s.m_Name && this->m_Age == s.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Student> v2;
//
//	Student s1("小明", 18);
//	Student s2("小红", 19);
//	Student s3("小王", 20);
//
//	v2.push_back(s1);
//	v2.push_back(s2);
//	v2.push_back(s3);
//
//	Student f("小明", 18);
//
//	vector<Student>::iterator it = find(v2.begin(), v2.end(), f);
//	if (it != v2.end())
//	{
//		cout << "找到元素" << " 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//	else
//	{
//		cout << "没有找到元素" << endl;
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
//#include <vector>
//#include <algorithm>
//
//class ExceedFour
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 4;
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), ExceedFour());
//	if (it != v1.end())
//	{
//		cout << "找到大于4的元素" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到元素" << endl;
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
//#include <vector>
//#include <algorithm>
//
//class ExceedFour
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 4;
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), ExceedFour());
//	if (it != v1.end())
//	{
//		cout << "找到大于4的元素" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到元素" << endl;
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
#include <vector>
#include <algorithm>

class Student
{
public:
	Student(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class ExceedNineTeen
	{
	public:
		bool operator()(Student &s)
		{
			return s.m_Age > 19;
		}
	};

void test01()
{
	vector<Student> v2;

	Student s1("小明", 18);
	Student s2("小红", 19);
	Student s3("小王", 20);

	v2.push_back(s1);
	v2.push_back(s2);
	v2.push_back(s3);

	vector<Student>::iterator it = find_if(v2.begin(), v2.end(), ExceedNineTeen());
	if (it != v2.end())
	{
		cout << "找到元素" << " 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
	else
	{
		cout << "没有找到元素" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}