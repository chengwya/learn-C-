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
////����������ʹ��ʱ��������ͨ�����ǰ���ã������в����ͷ���ֵ
//void test01()
//{
//	myAdd myadd;
//	cout << myadd(10, 20) << endl;
//}
//
////�������󳬳���ͨ�����ĸ����������������Լ���״̬
//class myPrint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
////�����������Ϊ�������д���
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
//	vector<int>::iterator it = find_if(v.begin(), v.end(), myCompare()); //myCompare()������������
//
//	if (it != v.end())
//	{
//		cout << "�ҵ�����6��Ԫ��" << *it << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
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
//	//��
//	plus<int>p;
//	cout << p(10, 20) << endl;
//	//��
//	minus<int>m;
//	cout << m(20, 10) << endl;
//	//��
//	multiplies<int>mp;
//	cout << mp(10, 20) << endl;
//	//��
//	divides<int>d;
//	cout << d(20, 10) << endl;
//}
//
//void test02()
//{
//	//ȡģ
//	modulus<int>md;
//	cout << md(10, 3) << endl;
//	//ȡ��
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
////��ͨ����
//void myPrint01(int val)
//{
//	cout << val << " ";
//}
//
////�º���
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
////�º���
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
//	cout << "40�ĸ���:" << num << endl;
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
//	Student s1("С��", 18);
//	Student s2("С��", 22);
//	Student s3("С��", 19);
//	Student s4("С��", 19);
//	Student s5("С��", 20);
//	Student sf("Сï", 19);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//
//	int num = count(v.begin(), v.end(), sf);
//	cout << "��Сïͬ��ĸ���:" << num << endl;
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
//	cout << "40�ĸ���:" << num << endl;
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
//	Student s1("С��", 18);
//	Student s2("С��", 22);
//	Student s3("С��", 19);
//	Student s4("С��", 19);
//	Student s5("С��", 20);
//
//	v.push_back(s1);
//	v.push_back(s2);
//	v.push_back(s3);
//	v.push_back(s4);
//	v.push_back(s5);
//
//
//	int num = count_if(v.begin(), v.end(), ExceedNineTeen());
//	cout << "����19��ĸ���:" << num << endl;
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
//	cout << "v1��v2�ĲΪ:" << endl;
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), aimT.begin());
//	for_each(aimT.begin(), itEnd, myPrint);
//	cout << endl;
//
//	cout << "v2��v1�ĲΪ:" << endl;
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
//	cout << "v1��v2�Ĳ���Ϊ:" << endl;
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
//	cout << "v1��v2�Ľ���Ϊ:" << endl;
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
//		cout << "�ҵ������ظ�Ԫ��:" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
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
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�" << endl;
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
//	����
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	����
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
//	cout << "��תǰ��" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "��ת��" << endl;
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
//	cout << "�滻ǰ:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "�滻��:" << endl;
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
//	cout << "�滻ǰ:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//
//	cout << "�滻��:" << endl;
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
//	cout << "����ǰ:" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
//	cout << "������:" << endl;
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