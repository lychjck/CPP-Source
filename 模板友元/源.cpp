#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T1, class T2>class Person;
template<class T1, class T2> void show2(Person<T1, T2>& p);

//������ʵ�ַ���һ�𣬲���������һ��
template <class T1, class T2>
void show3(Person<T1,T2>& p)
{
	cout << p.name << "*************" << p.age << endl;
}



template<class T1 = string, class T2 = int>
class Person
{
	//ȫ�ֺ���������ʵ��
	friend void show(Person<T1, T2>& p)
	{
		cout << p.name << "*************" << p.age << endl;
	}
	//ȫ�ֺ����������Ԫ������ʵ��
	friend void show2<>(Person<T1, T2>& p);
	//ȫ�ֺ���������ʵ��2
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


