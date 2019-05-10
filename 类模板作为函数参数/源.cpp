#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class NameType = string, class AgeType = int>
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType name, AgeType age)
	{
		this->age = age;
		this->name = name;
	}
};

//指定传入类型
void dowork1(Person<string,int>&p)
{
	cout << p.age << "*********" << p.name << endl;
}

//参数模板化
template<class T1,class T2>
void dowork2(Person<T1,T2>&p)
{
	cout << p.age << "*********" << p.name << endl;
}

//整个类模板化
template<class T>
void dowork3(T &p)
{
	cout << p.age << "*********" << p.name << endl;
}

void test()
{
	Person<>p1("JJ", 25);
	Person<string, int>p2("GG", 30);
	dowork1(p2);
	dowork2(p1);
	dowork3(p1);
}

int main()
{
	test();

	return 0;

}

