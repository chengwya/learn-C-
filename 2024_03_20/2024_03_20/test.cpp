//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	//��Ա�����Ӻ����������
//	/*Student operator+(Student& s)
//	{
//		Student temp;
//		temp.m_A = this->m_A + s.m_A;
//		temp.m_B = this->m_B + s.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
//
////ȫ�ֺ����Ӻ����������
//Student operator+(Student& s1, Student& s2)
//{
//	Student temp;
//	temp.m_A = s1.m_A + s2.m_A;
//	temp.m_B = s1.m_B + s2.m_B;
//	return temp;
//}
//
////��������
//Student operator+(Student& s, int val)
//{
//	Student temp;
//	temp.m_A = s.m_A + val;
//	temp.m_B = s.m_B + val;
//	return temp;
//}
//
//void test01()
//{
//	Student s1;
//	s1.m_A = 10;
//	s1.m_B = 20;
//	Student s2;
//	s2.m_A = 10;
//	s2.m_B = 20;
//
//	Student s3 = s1 + s2;
//	Student s4 = s1 + 10;
//	//��Ա�������ʵ���
//	//Student s3 = s1.operator+(s2);
//	//ȫ�ֺ������ʵ���
//	//Student s3 = operator+(s1, s3);
//
//	cout << "s3 - m_A = " << s3.m_A << endl;
//	cout << "s3 - m_B = " << s3.m_B << endl;
//	cout << "s4 - m_A = " << s4.m_A << endl;
//	cout << "s4 - m_B = " << s4.m_B << endl;
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
//	friend ostream& operator<<(ostream& cout, Student& s);
//public:
//	Student(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//ʹ�ó�Ա����������������� s1.operator<<(cout) s1 << cout�����޷�ʵ�֣���Ϊcout�����
//ֻ��ʹ��ȫ�ֺ����������������
//ȫ�ֺ������ص��ñ��� operator<< (cout , p)  cout << p
//ostream& operator<<(ostream &cout, Student &s)
//{
//	cout << "m_A = " << s.m_A << " " << "m_B = " << s.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Student s1(10, 20);
//
//	cout << s1 << endl;
//	cout << "hello C++" << endl;
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
//class MyIntData                        
//{
//	friend ostream& operator<<(ostream& cout, MyIntData myInt);
//public:
//	MyIntData()
//	{
//		m_Num = 0;
//	}
//
//	//ǰ��++
//	MyIntData& operator++()
//	{
//		m_Num++;
//		return *this; //��������
//	}
//
//	//����++
//	MyIntData operator++(int)
//	{
//		MyIntData temp = *this; //�ȼ�¼��ǰ���
//		m_Num++;				//����
//		return temp;			//����¼�������
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyIntData myInt)
//{
//	cout << myInt.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyIntData myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
//void test02()
//{
//	MyIntData myInt2;
//	cout << myInt2++ << endl;
//	cout << myInt2 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class BasePage
{
public:
	void top()
	{
		cout << "��ӭ����abc���Ϲ�������" << endl;
	}
	void left()
	{
		cout << "Shoes��Water��Paper��Clothes...(���������б�)" << endl;
	}
	void bottom()
	{
		cout << "�������ġ�����ָ������ϵ����...(�����ײ�)" << endl;
	}
};

class Shoes :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy shoes" << endl;
	}
};

class Water :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy water" << endl;
	}
};

class Paper :public BasePage
{
public:
	void conter()
	{
		cout << "You can buy paper" << endl;
	}
};

class Clothes : public BasePage
{
public:
	void conter()
	{
		cout << "You can buy clothes" << endl;
	}
};

void test01()
{
	cout << "Ь�ӹ���ҳ�����£�" << endl;
	Shoes sh;
	sh.top();
	sh.bottom();
	sh.left();
	sh.conter();
	cout << "--------------------" << endl;
	cout << "��Ȫˮ����ҳ�����£�" << endl;
	Water wt;
	wt.top();
	wt.bottom();
	wt.left();
	wt.conter();
	cout << "--------------------" << endl;
	cout << "ֽ����ҳ�����£�" << endl;
	Paper pr;
	pr.top();
	pr.bottom();
	pr.left();
	pr.conter();
	cout << "--------------------" << endl;
	cout << "�·�����ҳ�����£�" << endl;
	Clothes cl;
	cl.top();
	cl.bottom();
	cl.left();
	cl.conter();
}

int main()
{
	test01();
	return 0;
}