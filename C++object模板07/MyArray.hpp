#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//有参构造
	MyArray(int Capacity) {
		cout << "MyArray的有参构造" << endl;
		this->m_Capacity = Capacity;
		this->m_size =0 ;
		this->paddress = new T[this->m_Capacity];

	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		cout << "MyArray的拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//this->paddress = arr.paddress;
		//深拷贝
		this->paddress=new T[arr.m_Capacity];
		//拷贝数组数据
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];


		}
	}


	//opertor=防止浅拷贝    a=b=c
	MyArray& operator= (const MyArray& arr)
	{ cout << "MyArray的operator" << endl;
		 if (this->paddress != NULL)
		 {
			 delete[] this->paddress;
			 this->paddress = NULL;	
			 this->m_Capacity = 0;
			 this->m_size = 0;
		 }
		//深拷贝
	this->m_Capacity = arr.m_Capacity;
	this->m_size = arr.m_size;
	this->paddress = new T[arr.m_Capacity];
	//拷贝数组数据
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];


		}
		return *this; 
	}

	//析构函数
	~MyArray() {

		if (this->paddress != NULL)
		{
			cout << "MyArray的析构构造" << endl;
			delete[] this->paddress;
			this->paddress = NULL;
		}

	}

private:
	 T * paddress;    //指针指向堆区开辟的真实数组

	 int m_Capacity;				//数组容量

	 int m_size;			//数组大小

};