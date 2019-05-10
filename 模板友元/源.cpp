#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T1, class T2>class Person;
template<class T1, class T2> void show2(Person<T1, T2>& p);

//声明和实现放在一起，不用再声明一遍
template <class T1, class T2>
void show3(Person<T1,T2>& p)
{
	cout << p.name << "*************" << p.age << endl;
}



template<class T1 = string, class T2 = int>
class Person
{
	//全局函数，类内实现
	friend void show(Person<T1, T2>& p)
	{
		cout << p.name << "*************" << p.age << endl;
	}
	//全局函数，配合友元，类外实现
	friend void show2<>(Person<T1, T2>& p);
	//全局函数，类外实现2
	friend void show3<>(Person<T1, T2>& p);
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}
	void dowork();
};

template<class T1, class T2>
void show2(Person<T1, T2>& p)
{
	cout << p.name << "*************" << p.age << endl;
}


void test()
{
	Person<> p1("Ponyma", 50);
	show(p1);
	show2(p1);
	show3(p1);
}

int main()
{
	test();

	return 0;

}


