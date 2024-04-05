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
//	vector<int> v1; //Ĭ�Ϲ��캯��
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	//ͨ�����䷽ʽ����
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//ͨ��n��elem��ʽ����
//	vector<int>v3(10, 10);
//	printVector(v3);
//	
//	//��������
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
//	//n��elem��ʽ
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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//	}
//
//	//��v1��������ָ����С
//	v1.resize(20);
//	printVector(v1); //�������ָ���ĳ��ȱ�ԭ���ȳ���Ĭ����0����µ�λ��
//
//	v1.resize(20, 10);
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1); //�������ָ���ĳ��ȱ�ԭ���ȶ̣������Ĳ��ֽ���ɾ��
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
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//���� ��һ������ - v1.begin() Ϊ������
//	v1.insert(v1.begin(), 3, 60);
//	printVector(v1);
//
//	//ɾ�� ���� - ������
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//���
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
//		cout << v[i] << " "; //ͨ��[]��ʽ����Ԫ��
//	}
//	cout << endl;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " "; //ͨ��at��ʽ����Ԫ��
//	}
//	cout << endl;
//
//	cout << "v�ĵ�һ��Ԫ��Ϊ" << v.front() << endl;
//	cout << "v�����һ��Ԫ��Ϊ" << v.back() << endl;
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
////ʵ������
//void test02()
//{
//	vector<int>v3;
//	for (int i = 0; i < 10000; i++)
//	{
//		v3.push_back(i);
//	}
//
//	cout << "v3������Ϊ��" << v3.capacity() << endl;
//	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
//
//	//����ָ����С
//	v3.reserve(5);
//	cout << "v3������Ϊ��" << v3.capacity() << endl;
//	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
//
//	//����swap�����ڴ�
//	vector<int>(v3).swap(v3);
//	cout << "v3������Ϊ��" << v3.capacity() << endl;
//	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
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
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
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
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//ͷ��
//	d1.push_front(30);
//	d1.push_front(40);
//	
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	printDeque(d1);
//
//	//ͷɾ
//	d1.pop_front();
//	printDeque(d1);
//
//	//insert����
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 100);
//	printDeque(d1);
//
//	//�����������
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//������ɾ��
//	d1.erase(d1.begin(), d1.end());
//	printDeque(d1);
//
//	//���
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
//	//[]��ʽ����
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//at��ʽ����
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "d1�ĵ�һ��Ԫ�أ�" << d1.front() << endl;
//	cout << "d1�����һ��Ԫ�أ�" << d1.back() << endl;
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

	sort(d1.begin(), d1.end());  //Ĭ��������򣺴�С���� ����
	cout << "sort - after" << endl;
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}