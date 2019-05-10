#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <class T>
class Base
{
public:
	T age;
};

template <class T1,class T2>
class Son :Base<T2>
{

};

void test()
{
	Son<int, double> son;
}

int main()
{
	test();

	return 0;

}

