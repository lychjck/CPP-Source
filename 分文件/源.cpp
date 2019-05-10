#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"Person.hpp"

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

