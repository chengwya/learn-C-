//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "Student��Ĭ�Ϲ��캯������" << endl;
//	}
//	Student(int age, int weight)
//	{
//		m_age = age;
//		m_weight = new int(weight);
//		cout << "Student���вι��캯������" << endl;
//	}
//	Student(const Student& s)
//	{
//		cout << "Student�Ŀ������캯������" << endl;
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
//		cout << "Student��������������" << endl;
//	}
//	int m_age;
//	int* m_weight;
//};
//
//void test01()
//{
//	Student s1(18, 120);
//	cout << "s1��������" << s1.m_age << ",�����ǣ�" << *s1.m_weight << endl;
//	Student s2(s1);
//	cout << "s2��������" << s2.m_age << ",�����ǣ�" << *s2.m_weight << endl;
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
//	cout << "s1��������" << s1.m_age << endl;
//	cout << "s1�������" << s1.m_height << endl;
//
//	Student s2(20,175);
//	cout << "s2��������" << s2.m_age << endl;
//	cout << "s2�������" << s2.m_height << endl;
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
//		cout << "Phone�Ĺ��캯������" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
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
//		cout << "Student�Ĺ��캯������" << endl;
//	}
//	
//	~Student()
//	{
//		cout << "Student��������������" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test01()
//{
//	Student s1("С��", "HW");
//	cout << s1.m_Name << "ʹ��" << s1.m_Phone.m_PName << "�ֻ�" << endl;
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
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//ͨ������
//	Student s1;
//	s1.m_A = 100;
//	cout << "s1��m_AֵΪ��" << s1.m_A << endl;
//	Student s2;
//	s2.m_A = 200;
//	cout << "s1��m_AֵΪ��" << s1.m_A << endl; //����ͬһ������
//	cout << "s2��m_AֵΪ��" << s2.m_A << endl;
//
//	//ͨ������
//	cout << "s1��m_AֵΪ��" << Student::m_A << endl;
//	cout << "s2��m_AֵΪ��" << Student::m_A << endl;
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
//		m_A = 10; //��̬��Ա�����ɷ��ʾ�̬��Ա����
//		//m_B = 20; //������̬��Ա�������ɷ��ʷǾ�̬��Ա����
//		cout << "statc void func�����ĵ���" << endl;
//	}
//private:
//	static void func2()
//	{
//		m_A = 10;
//		//m_B = 20;
//		cout << "statc void func2�����ĵ���" << endl;
//	}
//public:
//	static int m_A;
//	int m_B;
//};
//
//int Student::m_A = 10;
////int Student::m_B = 20; //�����Ǿ�̬��Ա�������������ⶨ��
//
//void test01()
//{
//	//ͨ���������
//	Student s1;
//	s1.func();
//
//	//ͨ����������
//	Student::func();
//
//	//Student::func2(); //����������ʲ���˽�о�̬��Ա����
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
//	int m_A;        //�Ǿ�̬��Ա���� ������Ķ�����
//
//	static int m_B; //��̬��Ա���� ��������Ķ�����
//
//	void func(){}   //�Ǿ�̬��Ա���� ������Ķ�����
//	 
//	void func2(){}  //��̬��Ա���� ��������Ķ�����
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
//		//���βκͳ�Ա����ͬ��ʱ������thisָ������������
//		this->age = age;
//	}
//	Student& stuAddAge(Student &s)
//	{
//		this->age += s.age;
//		//����ķǾ�̬��Ա�����з��ض���������return *this
//		return *this;
//	}
//	int age;
//};
//
//void test01()
//{
//	Student s1(18);
//	cout << "s1��������" << s1.age << endl; //s1��������18
//	Student s2(20); 
//	s2.stuAddAge(s1);
//	cout << "s2��������" << s2.age << endl; //s2��������38
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
//		//���û��if�жϵĻ��ᱨ����Ϊ�����ָ��ΪNULL
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
//	//thisָ�뱾������һ��ָ�볣����ָ���ָ���ǲ����޸ĵ�
//	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ���ɱ��޸�
//	//const Student * const this
//	void modifyStudent() const
//	{
//		//this->m_A = 100; //����
//		this->m_B = 200;
//		//this = NULL; //thisָ�벻���޸�ָ���ָ��
//	}
//	void func()
//	{
//		cout << "This is func" << endl;
//	}
//	int m_A;
//	mutable int m_B;   //�����������ʹ�ڳ������У�Ҳ���޸�
//};
//
//void test01()
//{
//	Student s;
//	s.modifyStudent();
//}
//
////������
//void test02()
//{
//	const Student s2; //������
//	//s2.m_A = 100;     //����
//	s2.m_B = 200;
//	s2.modifyStudent();
//	//s2.func();        //����������ֻ�ܵ��ó�����,���ܵ�����ͨ��Ա��������ͨ��Ա���������޸�����
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
		m_LivingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_LivingRoom;
private:
	string m_BedRoom;
};

void Visit(House* house)
{
	cout << "���ڲι�" << house->m_LivingRoom << endl;
	cout << "���ڲι�" << house->m_BedRoom << endl;
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