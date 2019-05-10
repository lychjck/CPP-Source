#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

template<class NameType = string,class AgeType = int>
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType name,AgeType age)
	{
		this->age = age;
		this->name = name;
	}
};

void test()
{
	string name = "Tom";
	Person<string,int> p1("Tom", 18);
	cout << p1.age << "                 " << p1.name << endl;

	Person<> p2("Jack", 20);
	cout << p2.age << "                 " << p2.name << endl;

}

int main()
{
	test();

	return 0;

}

