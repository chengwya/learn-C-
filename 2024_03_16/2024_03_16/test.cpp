//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "Student的默认构造函数调用" << endl;
//	}
//	Student(int age, int weight)
//	{
//		m_age = age;
//		m_weight = new int(weight);
//		cout << "Student的有参构造函数调用" << endl;
//	}
//	Student(const Student& s)
//	{
//		cout << "Student的拷贝构造函数调用" << endl;
//		m_age = s.m_age;
//		m_weight = new int(*s.m_weight);
//	}
//	~Student()
//	{
//		if (m_weight != NULL)
//		{
//			delete m_weight;
//			m_weight = NULL;
//		}
//		cout << "Student的析构函数调用" << endl;
//	}
//	int m_age;
//	int* m_weight;
//};
//
//void test01()
//{
//	Student s1(18, 120);
//	cout << "s1的年龄是" << s1.m_age << ",体重是：" << *s1.m_weight << endl;
//	Student s2(s1);
//	cout << "s2的年龄是" << s2.m_age << ",体重是：" << *s2.m_weight << endl;
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
//	Student():m_age(18),m_height(180)
//	{
//	
//	}
//	Student(int age, int height) :m_age(age), m_height(height)
//	{
//
//	}
//	int m_age;
//	int m_height;
//};
//
//void test01()
//{
//	Student s1;
//	cout << "s1的年龄是" << s1.m_age << endl;
//	cout << "s1的身高是" << s1.m_height << endl;
//
//	Student s2(20,175);
//	cout << "s2的年龄是" << s2.m_age << endl;
//	cout << "s2的身高是" << s2.m_height << endl;
//}
//
//int main()
//{	
//	test01();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone的构造函数调用" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//
//	string m_PName;
//};
//
//class Student
//{
//public:
//	Student(string name, string pName):m_Name(name), m_Phone(pName)
//	{
//	/*	m_Name = name;
//		m_Phone = pName;*/
//		cout << "Student的构造函数调用" << endl;
//	}
//	
//	~Student()
//	{
//		cout << "Student的析构函数调用" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test01()
//{
//	Student s1("小明", "HW");
//	cout << s1.m_Name << "使用" << s1.m_Phone.m_PName << "手机" << endl;
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
//	static int m_A;
//
//private:
//	static int m_B;
//};
//
//int Student::m_A = 10;
//int Student::m_B = 20;
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//通过对象
//	Student s1;
//	s1.m_A = 100;
//	cout << "s1的m_A值为：" << s1.m_A << endl;
//	Student s2;
//	s2.m_A = 200;
//	cout << "s1的m_A值为：" << s1.m_A << endl; //共享同一份数据
//	cout << "s2的m_A值为：" << s2.m_A << endl;
//
//	//通过类名
//	cout << "s1的m_A值为：" << Student::m_A << endl;
//	cout << "s2的m_A值为：" << Student::m_A << endl;
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
//	static void func()
//	{
//		m_A = 10; //静态成员函数可访问静态成员变量
//		//m_B = 20; //报错，静态成员函数不可访问非静态成员变量
//		cout << "statc void func函数的调用" << endl;
//	}
//private:
//	static void func2()
//	{
//		m_A = 10;
//		//m_B = 20;
//		cout << "statc void func2函数的调用" << endl;
//	}
//public:
//	static int m_A;
//	int m_B;
//};
//
//int Student::m_A = 10;
////int Student::m_B = 20; //报错，非静态成员变量不可在类外定义
//
//void test01()
//{
//	//通过对象访问
//	Student s1;
//	s1.func();
//
//	//通过类名访问
//	Student::func();
//
//	//Student::func2(); //报错，类外访问不到私有静态成员函数
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
//	int m_A;        //非静态成员变量 属于类的对象上
//
//	static int m_B; //静态成员变量 不属于类的对象上
//
//	void func(){}   //非静态成员函数 属于类的对象上
//	 
//	void func2(){}  //静态成员变量 不属于类的对象上
//};
//
//void test01()
//{
//	Student s1;
//	cout << sizeof(s1) << endl;
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
//	Student(int age)
//	{
//		//当形参和成员变量同名时，可用this指针来进行区分
//		this->age = age;
//	}
//	Student& stuAddAge(Student &s)
//	{
//		this->age += s.age;
//		//在类的非静态成员函数中返回对象本身，可用return *this
//		return *this;
//	}
//	int age;
//};
//
//void test01()
//{
//	Student s1(18);
//	cout << "s1的年龄是" << s1.age << endl; //s1的年龄是18
//	Student s2(20); 
//	s2.stuAddAge(s1);
//	cout << "s2的年龄是" << s2.age << endl; //s2的年龄是38
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
//class Student
//{
//public:
//	void showClassName()
//	{
//		cout << "This is Student" << endl;
//	}
//	void showClassAge()
//	{
//		if (this == NULL)
//			return;
//		//如果没有if判断的话会报错，因为传入的指针为NULL
//		cout << "m_age = " << this->m_age << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Student* s = NULL;
//	s->showClassName();
//	s->showClassAge();
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
//	//this指针本质上是一个指针常量，指针的指向是不可修改的
//	//在成员函数后加上const，修饰的是this指向，让指针指向的值也不可被修改
//	//const Student * const this
//	void modifyStudent() const
//	{
//		//this->m_A = 100; //报错
//		this->m_B = 200;
//		//this = NULL; //this指针不能修改指针的指向
//	}
//	void func()
//	{
//		cout << "This is func" << endl;
//	}
//	int m_A;
//	mutable int m_B;   //特殊变量，即使在常函数中，也可修改
//};
//
//void test01()
//{
//	Student s;
//	s.modifyStudent();
//}
//
////常对象
//void test02()
//{
//	const Student s2; //常对象
//	//s2.m_A = 100;     //报错
//	s2.m_B = 200;
//	s2.modifyStudent();
//	//s2.func();        //报错，常对象只能调用常函数,不能调用普通成员函数，普通成员函数可以修改属性
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

class House
{
	friend void Visit(House* house);
public:
	House()
	{
		m_LivingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_LivingRoom;
private:
	string m_BedRoom;
};

void Visit(House* house)
{
	cout << "正在参观" << house->m_LivingRoom << endl;
	cout << "正在参观" << house->m_BedRoom << endl;
}

void test01()
{
	House h;
	Visit(&h);
}

int main()
{
	test01();
	system("pause");
	return 0;
}