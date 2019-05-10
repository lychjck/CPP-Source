#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Cat
{
public:
	void say()
	{
		cout << "è�ڽ�" << endl;
	}
};

class Dog
{
public:
	void say()
	{
		cout << "���ڽ�" << endl;
	}
};

template <class T>
class Animal
{
public:
	T obj;
	void dowork()
	{
		obj.say();
	}
};

void test()
{
	Animal<Cat> animal;
	animal.dowork();
	Animal<Dog> animal2;
	animal2.dowork();
}

int main()
{
	test();

	return 0;

}

