#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T1 = string, class T2 = int>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age);
	void dowork();
};



void test()
{
	Person<>p1("PonyMa", 50);
	p1.dowork();
}

int main()
{
	test();

	return 0;

}

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
