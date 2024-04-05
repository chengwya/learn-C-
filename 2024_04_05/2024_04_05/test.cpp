//#include <iostream>
//using namespace std;
//#include <vector>
//
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1; //默认构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	//通过区间方式构造
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//通过n个elem方式构造
//	vector<int>v3(10, 10);
//	printVector(v3);
//	
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
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
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1; 
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//operator=
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem方式
//	vector<int> v4;
//	v4.assign(10, 10);
//	printVector(v4);
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
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为" << v1.capacity() << endl;
//		cout << "v1的大小为" << v1.size() << endl;
//	}
//
//	//给v1容器重新指定大小
//	v1.resize(20);
//	printVector(v1); //如果重新指定的长度比原长度长，默认用0填充新的位置
//
//	v1.resize(20, 10);
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1); //如果重新指定的长度比原长度短，超出的部分将被删除
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
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入 第一个参数 - v1.begin() 为迭代器
//	v1.insert(v1.begin(), 3, 60);
//	printVector(v1);
//
//	//删除 参数 - 迭代器
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
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
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for (int i = 0; i< v.size(); i++)
//	{
//		cout << v[i] << " "; //通过[]方式访问元素
//	}
//	cout << endl;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " "; //通过at方式访问元素
//	}
//	cout << endl;
//
//	cout << "v的第一个元素为" << v.front() << endl;
//	cout << "v的最后一个元素为" << v.back() << endl;
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
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	for (int i = 9; i >= 0; i--)
//	{
//		v2.push_back(i);
//	}
//	cout << "swap - before" << endl;
//	printVector(v1);
//	printVector(v2);
//
//	v1.swap(v2);
//	cout << "swap - after" << endl;
//	printVector(v1);
//	printVector(v2);
//}
//
////实际运用
//void test02()
//{
//	vector<int>v3;
//	for (int i = 0; i < 10000; i++)
//	{
//		v3.push_back(i);
//	}
//
//	cout << "v3的容量为：" << v3.capacity() << endl;
//	cout << "v3的大小为：" << v3.size() << endl;
//
//	//重新指定大小
//	v3.reserve(5);
//	cout << "v3的容量为：" << v3.capacity() << endl;
//	cout << "v3的大小为：" << v3.size() << endl;
//
//	//利用swap收缩内存
//	vector<int>(v3).swap(v3);
//	cout << "v3的容量为：" << v3.capacity() << endl;
//	cout << "v3的大小为：" << v3.size() << endl;
//
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
//	vector<int> v;
//	int count = 0;
//	int* p = NULL;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			count++;
//		}
//	}
//	cout << "count = " << count << endl; //24
//}
//
//void test02()
//{
//	vector<int> v;
//	v.reserve(10000);
//	int count = 0;
//	int* p = NULL;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			count++;
//		}
//	}
//	cout << "count = " << count << endl; //1
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//#include <deque>
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 10);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
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
//#include <deque>
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int> d4;
//	d4.assign(10, 10);
//	printDeque(d4);
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
//#include <deque>
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	d1.resize(5);
//	printDeque(d1);
//
//	d1.resize(20, 10);
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//#include <iostream>
//using namespace std;
//#include <deque>
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(30);
//	d1.push_front(40);
//	
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 100);
//	printDeque(d1);
//
//	//按照区间插入
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//按区间删除
//	d1.erase(d1.begin(), d1.end());
//	printDeque(d1);
//
//	//清空
//	d1.clear();
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//#include <deque>
//
//void test01()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(30);
//	d1.push_front(40);
//	
//	//[]方式访问
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//at方式访问
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "d1的第一个元素：" << d1.front() << endl;
//	cout << "d1的最后一个元素：" << d1.back() << endl;
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
#include <deque>
#include <algorithm>

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(30);
	d1.push_front(40);
	
	cout << "sort - before" << endl;
	printDeque(d1);

	sort(d1.begin(), d1.end());  //默认排序规则：从小到大 升序
	cout << "sort - after" << endl;
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}