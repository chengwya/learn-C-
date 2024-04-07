//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(list<int>& l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L3(10, 10);
//	printList(L3);
//
//	list<int>L4(L3);
//	printList(L4);
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
//#include <list>
//
//void printList(list<int>& l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//		{
//			cout << *it << " ";
//		}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//	printList(L1);
//
//	list<int>L2(L1.begin(),L1.end());
//	printList(L2);
//
//	list<int>L3(10, 10);
//	printList(L3);
//
//	list<int>L4;
//	L4 = L3;
//	printList(L4);
//
//	list<int>L5;
//	L5.assign(10, 20);
//	cout << "swap - before" << endl;
//	printList(L3);
//	printList(L5);
//
//	L3.swap(L5);
//	cout << "swap - after" << endl;
//	printList(L3);
//	printList(L5);
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
#include <list>

void printList(list<int>& l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	printList(L1);

	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1元素个数：" << L1.size() << endl;
	}

	L1.resize(2);
	printList(L1);

	L1.resize(15, 10);
	printList(L1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}