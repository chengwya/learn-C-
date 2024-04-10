//#include <iostream>
//using namespace std;
//
//class myAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////函数对象在使用时，可像普通函数那般调用，可以有参数和返回值
//void test01()
//{
//	myAdd myadd;
//	cout << myadd(10, 20) << endl;
//}
//
////函数对象超出普通函数的概念，函数对象可以有自己的状态
//class myPrint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
////函数对象可作为参数进行传递
//void doPrint(myPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test02()
//{
//	myPrint myprint;
//	myprint("Hello C++");
//	myprint("Hello world");
//}
//
//void test03()
//{
//	myPrint myprint2;
//	doPrint(myprint2, "Hello C++");
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

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class myCompare
//{
//public:
//	bool operator()(int v1)
//	{
//		return v1 > 6;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), myCompare()); //myCompare()匿名函数对象
//
//	if (it != v.end())
//	{
//		cout << "找到大于6的元素" << *it << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
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
//class myCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	sort(v.begin(), v.end(), myCompare());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
//#include <functional>
//
//void test01()
//{
//	//加
//	plus<int>p;
//	cout << p(10, 20) << endl;
//	//减
//	minus<int>m;
//	cout << m(20, 10) << endl;
//	//乘
//	multiplies<int>mp;
//	cout << mp(10, 20) << endl;
//	//除
//	divides<int>d;
//	cout << d(20, 10) << endl;
//}
//
//void test02()
//{
//	//取模
//	modulus<int>md;
//	cout << md(10, 3) << endl;
//	//取反
//	negate<int>n;
//	cout << n(10) << endl;
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
//#include <functional>
//#include <algorithm>
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
//#include <vector>
//#include <functional>
//#include <algorithm>
//#include <functional>
//
//void test01()
//{
//	vector<bool>v1;
//	vector<bool>v2;
//
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(false);
//
//	v2.resize(v1.size());
//	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
//
//	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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
//#include <algorithm>
//#include <vector>
//
////普通函数
//void myPrint01(int val)
//{
//	cout << val << " ";
//}
//
////仿函数
//class myPrint02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), myPrint01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), myPrint02());
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
//#include <algorithm>
//#include <vector>
//
//class myTransform
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
//
////仿函数
//class myPrint02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	vector<int>aimT;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	aimT.resize(v.size());
//	transform(v.begin(), v.end(), aimT.begin(), myTransform());
//
//	for_each(v.begin(), v.end(), myPrint02());
//	cout << endl;
//
//	for_each(aimT.begin(), aimT.end(), myPrint02());
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
//#include <vector>
//#include <algorithm>
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//	cout << "40的个数:" << num << endl;
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
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	bool operator==(const Student& s)
//	{
//		if (this->m_Age == s.m_Age)
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
//	vector<Student>v;
//
//	Student s1("小明", 18);
//	Student s2("小王", 22);
//	Student s3("小红", 19);
//	Student s4("小李", 19);
//	Student s5("小黑", 20);
//	Student sf("小茂", 19);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//
//	int num = count(v.begin(), v.end(), sf);
//	cout << "与小茂同岁的个数:" << num << endl;
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
//class ExceedThirty
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 30;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(40);
//
//	int num = count_if(v.begin(), v.end(), ExceedThirty());
//	cout << "40的个数:" << num << endl;
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
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class ExceedNineTeen
//{
//public:
//	bool operator()(const Student& s)
//	{
//		return s.m_Age > 19;
//	}
//};
//
//void test01()
//{
//	vector<Student>v;
//
//	Student s1("小明", 18);
//	Student s2("小王", 22);
//	Student s3("小红", 19);
//	Student s4("小李", 19);
//	Student s5("小黑", 20);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//
//	int num = count_if(v.begin(), v.end(), ExceedNineTeen());
//	cout << "大于19岁的个数:" << num << endl;
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>aimT;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 3);
//	}
//
//	aimT.resize(max(v1.size(), v2.size()));
//
//	cout << "v1和v2的差集为:" << endl;
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), aimT.begin());
//	for_each(aimT.begin(), itEnd, myPrint);
//	cout << endl;
//
//	cout << "v2和v1的差集为:" << endl;
//	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), aimT.begin());
//	for_each(aimT.begin(), itEnd, myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>aimT;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 3);
//	}
//
//	aimT.resize(v1.size()+ v2.size());
//
//	cout << "v1和v2的并集为:" << endl;
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), aimT.begin());
//	for_each(aimT.begin(), itEnd, myPrint);
//	cout << endl;
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>aimT;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 3);
//	}
//
//	aimT.resize(min(v1.size(), v2.size()));
//
//	cout << "v1和v2的交集为:" << endl;
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), aimT.begin());
//	for_each(aimT.begin(), itEnd, myPrint);
//	cout << endl;
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
//#include <algorithm>
//#include <vector>
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos != v.end())
//	{
//		cout << "找到相邻重复元素:" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
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
//#include <algorithm>
//#include <vector>
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	bool ret = binary_search(v.begin(), v.end(), 4);
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
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
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(60);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(30);
//
//	升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
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
//#include <vector>
//#include <algorithm>
//#include <ctime>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>aimV;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+3);
//	}
//	aimV.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), aimV.begin());
//	for_each(aimV.begin(), aimV.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "反转前：" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "反转后：" << endl;
//	reverse(v1.begin(), v1.end());
//	for_each(v1.begin(), v1.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	v2.resize(v1.size());
//
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "替换前:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "替换后:" << endl;
//	replace(v1.begin(), v1.end(), 2, 20);
//	for_each(v1.begin(), v1.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class ExceedEqualFour
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 4;
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "替换前:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "替换后:" << endl;
//	replace_if(v1.begin(), v1.end(), ExceedEqualFour(), 20);  
//	for_each(v1.begin(), v1.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+10);
//	}
//
//	cout << "交换前:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
//	cout << "交换后:" << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
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
//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void test01()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	
//	int total = accumulate(v1.begin(), v1.end(), 0);
//	cout << "total = " << total << endl;
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
#include <algorithm>
#include <vector>
#include <numeric>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	v1.resize(10);
	fill(v1.begin(), v1.end(), 10);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}