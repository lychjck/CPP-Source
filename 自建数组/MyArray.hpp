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
	//�вι���
	explicit MyArray(int capacity)
	{
		this->capacity = capacity;
		this->size = 0;
		this->pAddr = new T[this->capacity];
	}
	//�������캯��
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
	//��ֵ����
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
	//[]����
	T& operator[](int index)
	{
		return this->pAddr[index];
	}
	//β�巨
	MyArray& pushback(const T& val)
	{
		//if (this->size == this->capacity)return 0;
		this->pAddr[this->size] = val;
		this->size++;
		return *this;
	}
	//βɾ��
	MyArray& pop()
	{
		//if (this->size == 0)return 0;
		this->pAddr[this->size - 1] = NULL;
		this->size--;
		return *this;
	}
	//���������С
	int getsize()
	{
		return this->size;
	}
	//��������
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