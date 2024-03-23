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
//		m_A = 10; //父类中的公共权限成员，到子类依然是公共权限
//		m_B = 20; //父类中的保护权限成员，到子类依然是保护权限
//		//m_C = 30; //报错，父类中的私有权限成员，子类没权限访问
//	}
//};
//
//class Son2 :protected Father
//{
//public:
//	void func()
//	{
//		m_A = 10;    //父类中的公共权限成员，到子类变保护权限
//		m_B = 20;    //父类中的保护权限成员，到子类依然是保护权限
//		//m_C = 30;  //报错，父类中的私有权限成员，子类没权限访问
//	}
//};
//
//class Son3 :private Father
//{
//public:
//	void func()
//	{
//		m_A = 10;	  //父类中的公共权限成员，到子类变私有权限
//		m_B = 20;	  //父类中的保护权限成员，到子类变私有权限
//		//m_C = 30;	  ////报错，父类中的私有权限成员，子类没权限访问
//	}
//};
//
//class GrandSon :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 10;	  //报错，m_A变为私有权限，访问不到
//		//m_B = 20;	  //报错，m_B变为私有权限，访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 10;
//	//s1.m_B = 20;  //报错，m_B是保护权限，类外访问不到
//
//	Son2 s2;
//	//s2.m_A = 10;   //报错，m_A是保护权限，类外访问不到
//	//s2.m_B = 20;   //报错，m_B是保护权限，类外访问不到
//
//	Son3 s3;
//	//s3.m_A = 10;   //报错，m_A是私有权限，类外访问不到
//	//s3.m_B = 20;	 //报错，m_B是私有权限，类外访问不到
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
//	父类中的所有非静态成员属性都被被子类所继承下去
//	父类中的私有成员属性也会被继承下去，只是被编译器隐藏了，因此访问不到
//	cout << "sizeof(Son)的结果为" << sizeof(Son) << endl; //16
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
//		cout << "Father的构造函数调用" << endl;
//	}
//	~Father()
//	{
//		cout << "Father的析构函数调用" << endl;
//	}
//};
//
//class Son : public Father
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数调用" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数调用" << endl;
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
//		cout << "Father - func调用" << endl;
//	}
//	void func(int )
//	{
//		cout << "Father - func(int)调用" << endl;
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
//		cout << "Son - func调用" << endl;
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
//	//s2.func(30)  //报错
//	//子类中如果出现与父类同名的成员函数，子类会将父类中的所有同名成员函数隐藏
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
//		cout << "Base - static void func调用" << endl;
//	}
//	static void func(int)
//	{
//		cout << "Son - static void func(int)调用" << endl;
//	}
//};
//int Base::m_A = 10; //类外初始化
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son - static void func调用" << endl;
//	}
//};
//int Son::m_A = 20;
//
////同名静态成员属性
//void test01()
//{
//	//通过对象访问
//	Son s1;
//	cout << "s1 m_A = "  << s1.m_A << endl;
//	cout << "Base m_A = " << s1.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "s1 m_A = " << Son::m_A << endl;
//	cout << "Base m_A = " << Son::Base::m_A << endl;
//}
//
//
////同名静态成员函数
//void test02()
//{
//	//通过对象访问
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	//通过类名访问
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
//	//父类中出现同名成员，需加作用域区分
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
//class Sheep :virtual public  Animal //加上关键字virtual变成虚继承
//{
//
//};
////Animal类称为虚基类
//class Camel :virtual public Animal  //加上关键字virtual变成虚继承
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
//	//菱形继承，两个父类拥有相同数据，需加作用域区分
//	cout << "sc.Sheep::m_Age = " << sc.Sheep::m_Age << endl;
//	cout << "sc.Camel::m_Age = " << sc.Camel::m_Age << endl;
//	cout << "sc.m_Age = " << sc.m_Age << endl;
//	//菱形继承导致数据有两份，资源浪费，可使用虚继承来解决该问题 
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