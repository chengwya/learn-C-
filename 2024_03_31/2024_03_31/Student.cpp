#include "Student.h"

template<class T1, class T2>
Student<T1, T2>::Student(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Student<T1, T2>::printStuInfo()
{
	cout << "ÐÕÃû£º " << this->m_Name << " ÄêÁä£º" << this->m_Age << endl;
}