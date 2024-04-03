//#include <iostream>
//using namespace std;
//#include <string>
//
//void test01()
//{
//	string s1; //默认构造
//	cout << "s1 = " << s1 << endl;
//
//	const char* str = "hello";
//	cout << "str = " << str << endl;
//
//	string s2(str);
//	cout << "s2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	string s4( 5, 'h');
//	cout << "s4 = " << s4 << endl;
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
//#include <string>
//
//void test01()
//{
//	string str1;
//	str1 = "hello";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'h';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello", 2);
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(5, 'h');
//	cout << "str7 = " << str7 << endl;
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
//#include <string>
//
//void test01()
//{
//	string str1 = "你好";
//	str1 += "我叫小明";
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "hello";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//	cout << "str2 = " << str2 << endl;
//
//	string str3 = "你";
//	str3.append("好");
//	cout << "str3 = " << str3 << endl;
//
//	str3.append("jack", 3);
//	cout << "str3 = " << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3 = " << str3 << endl;
//
//	str3.append(str2, 0, 3);
//	cout << "str3 = " << str3 << endl;
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
////查找
//void test01()
//{
//	string str1 = "asdfgh";
//	int pos = str1.find("dg");
//	cout << "pos = " << pos << endl;
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串,pos = " << pos << endl;
//	}
//
//	pos = str1.rfind("df");
//	cout << "pos = " << pos << endl;
//}
//
//
////替换
//void test02()
//{
//	string str2 = "qwertyu";
//	str2.replace(1, 3, "hhhh"); //1号位置起3个字符，替换“hhhh”
//	cout << "str2 = " << str2 << endl;
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
//void test01()
//{
//	string str1 = "hello";
//	string str2 = "hallo";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 = str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 > str2" << endl;
//	}
//	else
//	{
//		cout << "str1 < str2" << endl;
//	}
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
//void test01()
//{
//	string str1 = "hello";
//	string str2 = "hallo";
//	
//	获取字符
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < str2.size(); i++)
//	{
//		cout << str2.at(i) << " ";
//	}
//	cout << endl;
//
//	修改字符
//	str1[1] = 'a';
//	cout << "str1 = " << str1 << endl;
//
//	str2.at(0) = 'e';
//	cout << "str2 = " << str2 << endl;
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
//void test01()
//{
//	//插入
//	string str1 = "hello";
//	str1.insert(1, "yyy");
//	cout << "str1 = " << str1 << endl;
//
//	//删除
//	str1.erase(1, 3);
//	cout << "str1 = " << str1 << endl;
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

void test01()
{
	string str = "hello";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}