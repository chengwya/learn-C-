//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Father
//{
//public:
//	void func()
//	{
//		m_A = 10; //�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		m_B = 20; //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_C = 30; //���������е�˽��Ȩ�޳�Ա������ûȨ�޷���
//	}
//};
//
//class Son2 :protected Father
//{
//public:
//	void func()
//	{
//		m_A = 10;    //�����еĹ���Ȩ�޳�Ա��������䱣��Ȩ��
//		m_B = 20;    //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_C = 30;  //���������е�˽��Ȩ�޳�Ա������ûȨ�޷���
//	}
//};
//
//class Son3 :private Father
//{
//public:
//	void func()
//	{
//		m_A = 10;	  //�����еĹ���Ȩ�޳�Ա���������˽��Ȩ��
//		m_B = 20;	  //�����еı���Ȩ�޳�Ա���������˽��Ȩ��
//		//m_C = 30;	  ////���������е�˽��Ȩ�޳�Ա������ûȨ�޷���
//	}
//};
//
//class GrandSon :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 10;	  //����m_A��Ϊ˽��Ȩ�ޣ����ʲ���
//		//m_B = 20;	  //����m_B��Ϊ˽��Ȩ�ޣ����ʲ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 10;
//	//s1.m_B = 20;  //����m_B�Ǳ���Ȩ�ޣ�������ʲ���
//
//	Son2 s2;
//	//s2.m_A = 10;   //����m_A�Ǳ���Ȩ�ޣ�������ʲ���
//	//s2.m_B = 20;   //����m_B�Ǳ���Ȩ�ޣ�������ʲ���
//
//	Son3 s3;
//	//s3.m_A = 10;   //����m_A��˽��Ȩ�ޣ�������ʲ���
//	//s3.m_B = 20;	 //����m_B��˽��Ȩ�ޣ�������ʲ���
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
//class Father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class Son : public Father
//{
//public:
//	int d;
//};
//
//void test01()
//{
//	�����е����зǾ�̬��Ա���Զ������������̳���ȥ
//	�����е�˽�г�Ա����Ҳ�ᱻ�̳���ȥ��ֻ�Ǳ������������ˣ���˷��ʲ���
//	cout << "sizeof(Son)�Ľ��Ϊ" << sizeof(Son) << endl; //16
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
//class Father
//{
//public:
//	Father()
//	{
//		cout << "Father�Ĺ��캯������" << endl;
//	}
//	~Father()
//	{
//		cout << "Father��������������" << endl;
//	}
//};
//
//class Son : public Father
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯������" << endl;
//	}
//	~Son()
//	{
//		cout << "Son��������������" << endl;
//	}
//};
//
//void test01()
//{
//	Son s1;
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
//class Father
//{
//public:
//	Father()
//	{
//		m_A = 10;
//	}
//	void func()
//	{
//		cout << "Father - func����" << endl;
//	}
//	void func(int )
//	{
//		cout << "Father - func(int)����" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Father
//{
//public:
//	Son()
//	{
//		m_A = 20;
//	}
//	void func()
//	{
//		cout << "Son - func����" << endl;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s1;
//	cout << "s1 m_A = " << s1.m_A << endl;
//	cout << "Father m_A = " << s1.Father::m_A << endl;
//
//	Son s2;
//	s2.func();
//	s2.Father::func();
//	//s2.func(30)  //����
//	//��������������븸��ͬ���ĳ�Ա����������Ὣ�����е�����ͬ����Ա��������
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
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base - static void func����" << endl;
//	}
//	static void func(int)
//	{
//		cout << "Son - static void func(int)����" << endl;
//	}
//};
//int Base::m_A = 10; //�����ʼ��
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son - static void func����" << endl;
//	}
//};
//int Son::m_A = 20;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//ͨ���������
//	Son s1;
//	cout << "s1 m_A = "  << s1.m_A << endl;
//	cout << "Base m_A = " << s1.Base::m_A << endl;
//
//	//ͨ����������
//	cout << "s1 m_A = " << Son::m_A << endl;
//	cout << "Base m_A = " << Son::Base::m_A << endl;
//}
//
//
////ͬ����̬��Ա����
//void test02()
//{
//	//ͨ���������
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	//ͨ����������
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(10);
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
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 10;
//	}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 20;
//	}
//	int m_A;
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_B = 30;
//		m_C = 40;
//	}
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	Son s1;
//	cout << "sizeof(Son) = " << sizeof(Son) << endl;
//	//�����г���ͬ����Ա���������������
//	cout << "Base1 m_A = " << s1.Base1::m_A << endl;
//	cout << "Base2 m_A = " << s1.Base2::m_A << endl;
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
//class Animal
//{
//public :
//	int m_Age;
//};
//
//class Sheep :virtual public  Animal //���Ϲؼ���virtual�����̳�
//{
//
//};
////Animal���Ϊ�����
//class Camel :virtual public Animal  //���Ϲؼ���virtual�����̳�
//{
//
//};
//
//class SheepCamel :public Sheep, public Camel
//{
//
//};
//
//void test01()
//{
//	SheepCamel sc;
//	sc.Sheep::m_Age = 18;
//	sc.Camel::m_Age = 18;
//	//���μ̳У���������ӵ����ͬ���ݣ��������������
//	cout << "sc.Sheep::m_Age = " << sc.Sheep::m_Age << endl;
//	cout << "sc.Camel::m_Age = " << sc.Camel::m_Age << endl;
//	cout << "sc.m_Age = " << sc.m_Age << endl;
//	//���μ̳е������������ݣ���Դ�˷ѣ���ʹ����̳������������ 
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

int main()
{

	system("pause");
	return 0;
}