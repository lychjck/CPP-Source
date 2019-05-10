#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
private:
	T* pAddr;
	int capacity;
	int size;
public:
	//有参构造
	explicit MyArray(int capacity)
	{
		this->capacity = capacity;
		this->size = 0;
		this->pAddr = new T[this->capacity];
	}
	//拷贝构造函数
	MyArray(const MyArray& myarray)
	{
		this->capacity = myarray.capacity;
		this->size = myarray.size;
		this->pAddr = new T[this->capacity];
		for (int i = 0; i < size; i++)
		{
			this->pAddr[i] = myarray[i];
		}
	}
	//赋值重载
	MyArray& operator=(const MyArray& myarray)
	{
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
		}
		this->capacity = myarray.capacity;
		this->size = myarray.size;
		this->pAddr = new T[this->capacity];
		for (int i = 0; i < size; i++)
		{
			this->pAddr[i] = myarray[i];
		}
		return *this;
	}
	//[]重载
	T& operator[](int index)
	{
		return this->pAddr[index];
	}
	//尾插法
	MyArray& pushback(const T& val)
	{
		//if (this->size == this->capacity)return 0;
		this->pAddr[this->size] = val;
		this->size++;
		return *this;
	}
	//尾删法
	MyArray& pop()
	{
		//if (this->size == 0)return 0;
		this->pAddr[this->size - 1] = NULL;
		this->size--;
		return *this;
	}
	//返回数组大小
	int getsize()
	{
		return this->size;
	}
	//析构函数
	~MyArray()
	{
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
		}
		cout << "ByebyeLou" << endl;
	}
};