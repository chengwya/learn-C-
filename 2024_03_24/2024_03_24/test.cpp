//��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
//#include <iostream>
//using namespace std;
//
//class Afternoon 
//{
//public:
//	void Drink()
//	{
//		cout << "Water" << endl;
//	}
//};
//
//class Person1 :public Afternoon
//{
//public:
//	void Drink()
//	{
//		cout << "Coffee" << endl;
//	}
//};
//
//class Person2 : public Afternoon
//{
//public:
//	void Drink()
//	{
//		cout << "Tea" << endl;
//	}
//};
//
//void doWork(Afternoon &af) 
//{
//	af.Drink();
//}
//
//void test01()
//{
//	Person1 p1;
//	doWork(p1); //�����Water
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
//#include <iostream>
//using namespace std;
//
//class Afternoon
//{
//public:
//	virtual void Drink() //�麯��
//	{
//		cout << "Water" << endl;
//	}
//};
//
//class Person1 :public Afternoon
//{
//public:
//	void Drink()
//	{
//		cout << "Coffee" << endl;
//	}
//};
//
//class Person2 : public Afternoon
//{
//public:
//	void Drink()
//	{
//		cout << "Tea" << endl;
//	}
//};
//
////�����Ҫ�ȿ��ȣ���Ҫ�ú�����ַ����ǰ�󶨣�������ʱ�󶨣���ַ���
//void doWork(Afternoon& af)
//{
//	af.Drink();
//}
//
//void test01()
//{
//	Person1 p1;
//	doWork(p1); //�����Coffee
//
//	Person2 p2;
//	doWork(p2); //�����Tea
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
//class calculator
//{
//public:
//	int operation(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		else if (oper == "/")
//		{
//			return m_Num1 / m_Num2;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	calculator calc;
//	calc.m_Num1 = 10;
//	calc.m_Num2 = 20;
//	cout << calc.m_Num1 << " + " << calc.m_Num2 << " = " << calc.operation("+") << endl;
//	cout << calc.m_Num1 << " - " << calc.m_Num2 << " = " << calc.operation("-") << endl;
//	cout << calc.m_Num1 << " * " << calc.m_Num2 << " = " << calc.operation("*") << endl;
//	cout << calc.m_Num1 << " / " << calc.m_Num2 << " = " << calc.operation("/") << endl;
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
//class AbstractCalculator //����һ��������������
//{
//public:
//	virtual int operation()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator :public AbstractCalculator  //�ӷ�
//{
//	int operation()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator :public AbstractCalculator  //����
//{
//	int operation()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class MulCalculator :public AbstractCalculator   //�˷�
//{
//	int operation()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//class divCalculator :public AbstractCalculator   //����
//{ 
//	int operation()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//
//void test01()
//{
//	//�ӷ�
//	AbstractCalculator* calc = new AddCalculator;
//	calc->m_Num1 = 10;
//	calc ->m_Num2 = 20;
//	cout << calc->m_Num1 << " + " << calc->m_Num2 << " = " << calc->operation() << endl; //30
//	delete calc; //��������
//
//	//����
//	calc = new SubCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " - " << calc->m_Num2 << " = " << calc->operation() << endl; //-10
//	delete calc; //��������
//
//	//�˷�
//	calc = new MulCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " * " << calc->m_Num2 << " = " << calc->operation() << endl; //200
//	delete calc; //��������
//
//	//����
//	calc = new divCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " / " << calc->m_Num2 << " = " << calc->operation() << endl; //0
//	delete calc; //��������
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
//class Base
//{
//public:
//	virtual void func() = 0; //���麯��
//};
//
//
//class Son : public Base      //����������������д�����еĴ��麯������ȻҲ���ڳ�����
//{
//public:
//	virtual void func()
//	{
//		cout << "Son - func����" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b1;   //����,�������޷�ʵ��������
//	//new Base;  //����,�������޷�ʵ��������
//	//Son s1;    //�������д�����еĴ��麯���������޷�ʵ��������
//	Base* bs = new Son;
//	bs->func();  //�����Son - func����
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
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;      //��ˮ
//
//	virtual void Brew() = 0;	  //����
//
//	virtual void PoutGlass() = 0; //����
//
//	virtual void Feeding() = 0;   //����
//
//	virtual void AddIce() = 0;    //�ӱ�
//
//	void MakeDrink()              //��������
//	{
//		Boil();
//		Brew();
//		PoutGlass();
//		Feeding();
//		AddIce();
//	}
//};
//
//class Latte :public AbstractDrinking //����
//{
//public:
//	virtual void Boil() //��ˮ
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	virtual void Brew() //����
//	{
//		cout << "���ݿ��ȷ�" << endl;
//	}
//
//	virtual void PoutGlass() //����
//	{
//		cout << "���벣������" << endl;
//	}
//
//	virtual void Feeding() //����
//	{
//		cout << "����ţ��" << endl;
//	}
//
//	virtual void AddIce()  //�ӱ�
//	{
//		cout << "�������" << endl;
//	}
//};
//
//class LemonBlackTea :public AbstractDrinking //���ʺ��
//{
//public:
//	virtual void Boil() //��ˮ
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	virtual void Brew() //����
//	{
//		cout << "���ݺ��" << endl;
//	}
//
//	virtual void PoutGlass() //����
//	{
//		cout << "���벣������" << endl;
//	}
//
//	virtual void Feeding() //����
//	{
//		cout << "��������Ƭ" << endl;
//	}
//	virtual void AddIce()  //�ӱ�
//	{
//		cout << "�������" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abd) //��������
//{
//	abd->MakeDrink();
//	delete abd;
//}
//
//void test01()
//{
//	doWork(new LemonBlackTea);
//	cout << "-----------" << endl;
//	doWork(new Latte);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

class Eat
{
public:
	Eat()
	{
		cout << "Eat ���캯������" << endl;
	}
	virtual void Drinking() = 0;

	//virtual ~Eat() //����virtual���������������
	//{
	//	cout << "Drinking ��������������" << endl;
	//}

	virtual ~Eat() = 0;
};

Eat::~Eat() //�����������������ڳ����࣬�޷�ʵ��������
{
	cout << "Eat ����������������" << endl;
}

class Coffee :public Eat
{
public:
	Coffee(string feeding)
	{
		cout << "Coffee ���캯������" << endl;
		m_Feeding = new string(feeding);
	}

	virtual void Drinking()
	{
		cout << *m_Feeding << "���뿧��" << endl;
	}

	~Coffee()
	{
		cout << "Coffee ������������" << endl;
		if (this->m_Feeding != NULL)
		{
			delete m_Feeding;
			m_Feeding = NULL;
		}
	}
public:
	string *m_Feeding;
};

void test01()
{
	Eat* eat = new Coffee("ţ��");
	eat->Drinking();

	//ͨ������ָ���ͷţ�����������������ɾ�����������ڴ�й©
	//�������һ���������������ɽ������ָ���ͷ������������
	delete eat;
}

int main()
{
	test01();
	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class Display
//{
//public:
//	virtual void display() = 0;
//};
//
//class Computer
//{
//public:
//	Computer(CPU* cpu, Memory* mem, Display* dp)
//	{
//		m_cpu = cpu;
//		m_mem = mem;
//		m_dp = dp;
//	}
//
//	void doWork() //��������
//	{
//		//���ýӿ�
//		m_cpu->calculate();
//		m_mem->storage();
//		m_dp->display();
//	}
//
//	~Computer()
//	{
//		if (m_cpu != NULL) //�ͷ�CPU����
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_dp != NULL)  //�ͷ���ʾ������
//		{
//			delete m_cpu;
//			m_dp = NULL;
//		}
//
//		if (m_mem != NULL)  //�ͷ��ڴ�������
//		{
//			delete m_cpu;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu;    
//	Memory* m_mem;
//	Display* m_dp;
//
//};
//
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel - CPU ��ʼ���й���" << endl;
//	}
//};
//
//class NvidiaCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Nvidia - CPU ��ʼ���й���" << endl;
//	}
//};
//
//class IntelDisplay :public Display
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel - ��ʾ�� ��ʼ��ʾ����" << endl;
//	}
//};
//
//class NvidiaDisplay :public Display
//{
//public:
//	virtual void display()
//	{
//		cout << "Nvidia - ��ʾ�� ��ʼ��ʾ����" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel - �ڴ��� ��ʼ�洢����" << endl;
//	}
//};
//
//class NvidiaMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Nvidia - �ڴ��� ��ʼ�洢����" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨�����㲿��
//	/*CPU* intelCpu = new IntelCPU;
//	Display* intelDisplay = new IntelDisplay;
//	Memory* intelMem = new IntelMemory;*/
//	//������һ̨����
//	cout << "��һ̨���Կ�ʼ����" << endl;
//	Computer* computer1 = new Computer(new IntelCPU, new IntelMemory, new IntelDisplay);  //��һ̨����
//	computer1->doWork();
//	delete computer1;
//	cout << "----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ����" << endl;
//	Computer* computer2 = new Computer(new NvidiaCPU,new NvidiaMemory, new NvidiaDisplay);//�ڶ�̥����
//	computer2->doWork();
//	delete computer2;
//	cout << "----------------------" << endl;
//	cout << "����̨���Կ�ʼ����" << endl;
//	Computer* computer3 = new Computer(new IntelCPU, new NvidiaMemory, new IntelDisplay); //����̨����
//	computer3->doWork();
//	delete computer3;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}