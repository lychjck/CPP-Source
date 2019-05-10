#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MyArray.hpp"
using namespace std;

template<class T>
void Printdata( MyArray<T>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;
	}
}

class Person
{
public:
	string name;
	int age;
	Person() {};
	Person(string name,int age):name(name),age(age){}
};

void test()
{
	MyArray<int> arr(100);
	for (int i = 0; i < 10; i++)
	{
		arr.pushback(i + 50);
	}
	Printdata(arr);
	MyArray<double> arr2(100);
	for (int i = 0; i < 10; i++)
	{
		arr2.pushback(i + 3.14);
	}
	cout << "---------------------------------------------------" << endl;
	Printdata(arr2);
}

void test2()
{
	MyArray<Person> p(10);
	Person p1("jj", 20);
	Person p2("aa", 20);
	Person p3("bb", 20);
	Person p4("cc", 20);
	Person p5("dd", 20);
	Person p6("ee", 19);
	Person p7 = p2;
	p.pushback(p1);
	p.pushback(p2);
	p.pushback(p3);
	p.pushback(p4);
	p.pushback(p5).pushback(p6).pushback(p7);
	cout << "--------------------------------------------------" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << p[i].name << "---------" << p[i].age << endl;
	}

}

int main()
{
	test();
	test2();
	return 0;

}

