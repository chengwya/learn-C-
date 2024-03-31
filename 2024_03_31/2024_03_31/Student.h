#pragma once
#include <iostream>
using namespace std;

template<class T1, class T2>
class Student
{
public:
	Student(T1 name, T2 age);

	void printStuInfo();

	T1 m_Name;
	T2 m_Age;
};