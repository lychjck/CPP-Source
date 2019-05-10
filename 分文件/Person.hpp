#pragma once
#include<iostream>
#include<string>
template<class T1 = string, class T2 = int>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age);
	void dowork();
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->age = age;
	this->name = name;
}

template<class T1, class T2>
void Person<T1, T2>::dowork()
{
	cout << this->age << "***********" << this->name << endl;
}