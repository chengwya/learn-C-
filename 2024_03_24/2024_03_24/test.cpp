//静态多态的函数地址早绑定 - 编译阶段确定函数地址
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
//	doWork(p1); //结果：Water
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//动态多态的函数地址晚绑定 - 运行阶段确定函数地址
//#include <iostream>
//using namespace std;
//
//class Afternoon
//{
//public:
//	virtual void Drink() //虚函数
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
////如果想要喝咖啡，需要让函数地址不提前绑定，在运行时绑定，地址晚绑定
//void doWork(Afternoon& af)
//{
//	af.Drink();
//}
//
//void test01()
//{
//	Person1 p1;
//	doWork(p1); //结果：Coffee
//
//	Person2 p2;
//	doWork(p2); //结果：Tea
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
//class AbstractCalculator //定义一个计算器抽象类
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
//class AddCalculator :public AbstractCalculator  //加法
//{
//	int operation()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator :public AbstractCalculator  //减法
//{
//	int operation()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class MulCalculator :public AbstractCalculator   //乘法
//{
//	int operation()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//class divCalculator :public AbstractCalculator   //除法
//{ 
//	int operation()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//
//void test01()
//{
//	//加法
//	AbstractCalculator* calc = new AddCalculator;
//	calc->m_Num1 = 10;
//	calc ->m_Num2 = 20;
//	cout << calc->m_Num1 << " + " << calc->m_Num2 << " = " << calc->operation() << endl; //30
//	delete calc; //用完销毁
//
//	//减法
//	calc = new SubCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " - " << calc->m_Num2 << " = " << calc->operation() << endl; //-10
//	delete calc; //用完销毁
//
//	//乘法
//	calc = new MulCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " * " << calc->m_Num2 << " = " << calc->operation() << endl; //200
//	delete calc; //用完销毁
//
//	//除法
//	calc = new divCalculator;
//	calc->m_Num1 = 10;
//	calc->m_Num2 = 20;
//	cout << calc->m_Num1 << " / " << calc->m_Num2 << " = " << calc->operation() << endl; //0
//	delete calc; //用完销毁
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
//	virtual void func() = 0; //纯虚函数
//};
//
//
//class Son : public Base      //抽象类的子类必须重写父类中的纯虚函数，不然也属于抽象类
//{
//public:
//	virtual void func()
//	{
//		cout << "Son - func调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b1;   //报错,抽象类无法实例化对象
//	//new Base;  //报错,抽象类无法实例化对象
//	//Son s1;    //类必须重写父类中的纯虚函数，否则无法实例化对象
//	Base* bs = new Son;
//	bs->func();  //结果：Son - func调用
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
//	virtual void Boil() = 0;      //煮水
//
//	virtual void Brew() = 0;	  //冲泡
//
//	virtual void PoutGlass() = 0; //倒杯
//
//	virtual void Feeding() = 0;   //加料
//
//	virtual void AddIce() = 0;    //加冰
//
//	void MakeDrink()              //制作冷饮
//	{
//		Boil();
//		Brew();
//		PoutGlass();
//		Feeding();
//		AddIce();
//	}
//};
//
//class Latte :public AbstractDrinking //拿铁
//{
//public:
//	virtual void Boil() //煮水
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	virtual void Brew() //冲泡
//	{
//		cout << "冲泡咖啡粉" << endl;
//	}
//
//	virtual void PoutGlass() //倒杯
//	{
//		cout << "倒入玻璃杯中" << endl;
//	}
//
//	virtual void Feeding() //加料
//	{
//		cout << "加入牛奶" << endl;
//	}
//
//	virtual void AddIce()  //加冰
//	{
//		cout << "加入冰块" << endl;
//	}
//};
//
//class LemonBlackTea :public AbstractDrinking //柠檬红茶
//{
//public:
//	virtual void Boil() //煮水
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	virtual void Brew() //冲泡
//	{
//		cout << "冲泡红茶" << endl;
//	}
//
//	virtual void PoutGlass() //倒杯
//	{
//		cout << "倒入玻璃杯中" << endl;
//	}
//
//	virtual void Feeding() //加料
//	{
//		cout << "加入柠檬片" << endl;
//	}
//	virtual void AddIce()  //加冰
//	{
//		cout << "加入冰块" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abd) //制作函数
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
		cout << "Eat 构造函数调用" << endl;
	}
	virtual void Drinking() = 0;

	//virtual ~Eat() //加上virtual，变成虚析构函数
	//{
	//	cout << "Drinking 虚析构函数调用" << endl;
	//}

	virtual ~Eat() = 0;
};

Eat::~Eat() //纯虚析构，该类属于抽象类，无法实例化对象
{
	cout << "Eat 纯虚析构函数调用" << endl;
}

class Coffee :public Eat
{
public:
	Coffee(string feeding)
	{
		cout << "Coffee 构造函数调用" << endl;
		m_Feeding = new string(feeding);
	}

	virtual void Drinking()
	{
		cout << *m_Feeding << "加入咖啡" << endl;
	}

	~Coffee()
	{
		cout << "Coffee 析构函数调用" << endl;
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
	Eat* eat = new Coffee("牛奶");
	eat->Drinking();

	//通过父类指针释放，导致子类对象清理不干净，容易造成内存泄漏
	//给基类加一个虚析构函数即可解决父类指针释放子类对象问题
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
//	void doWork() //工作函数
//	{
//		//调用接口
//		m_cpu->calculate();
//		m_mem->storage();
//		m_dp->display();
//	}
//
//	~Computer()
//	{
//		if (m_cpu != NULL) //释放CPU部件
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_dp != NULL)  //释放显示器部件
//		{
//			delete m_cpu;
//			m_dp = NULL;
//		}
//
//		if (m_mem != NULL)  //释放内存条部件
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
//		cout << "Intel - CPU 开始运行工作" << endl;
//	}
//};
//
//class NvidiaCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Nvidia - CPU 开始运行工作" << endl;
//	}
//};
//
//class IntelDisplay :public Display
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel - 显示器 开始显示工作" << endl;
//	}
//};
//
//class NvidiaDisplay :public Display
//{
//public:
//	virtual void display()
//	{
//		cout << "Nvidia - 显示器 开始显示工作" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel - 内存条 开始存储工作" << endl;
//	}
//};
//
//class NvidiaMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Nvidia - 内存条 开始存储工作" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台电脑零部件
//	/*CPU* intelCpu = new IntelCPU;
//	Display* intelDisplay = new IntelDisplay;
//	Memory* intelMem = new IntelMemory;*/
//	//创建第一台电脑
//	cout << "第一台电脑开始工作" << endl;
//	Computer* computer1 = new Computer(new IntelCPU, new IntelMemory, new IntelDisplay);  //第一台电脑
//	computer1->doWork();
//	delete computer1;
//	cout << "----------------------" << endl;
//	cout << "第二台电脑开始工作" << endl;
//	Computer* computer2 = new Computer(new NvidiaCPU,new NvidiaMemory, new NvidiaDisplay);//第二胎电脑
//	computer2->doWork();
//	delete computer2;
//	cout << "----------------------" << endl;
//	cout << "第三台电脑开始工作" << endl;
//	Computer* computer3 = new Computer(new IntelCPU, new NvidiaMemory, new IntelDisplay); //第三台电脑
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