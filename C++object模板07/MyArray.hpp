#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι���
	MyArray(int Capacity) {
		cout << "MyArray���вι���" << endl;
		this->m_Capacity = Capacity;
		this->m_size =0 ;
		this->paddress = new T[this->m_Capacity];

	}

	//��������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ�������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//this->paddress = arr.paddress;
		//���
		this->paddress=new T[arr.m_Capacity];
		//������������
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];


		}
	}


	//opertor=��ֹǳ����    a=b=c
	MyArray& operator= (const MyArray& arr)
	{ cout << "MyArray��operator" << endl;
		 if (this->paddress != NULL)
		 {
			 delete[] this->paddress;
			 this->paddress = NULL;	
			 this->m_Capacity = 0;
			 this->m_size = 0;
		 }
		//���
	this->m_Capacity = arr.m_Capacity;
	this->m_size = arr.m_size;
	this->paddress = new T[arr.m_Capacity];
	//������������
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];


		}
		return *this; 
	}

	//��������
	~MyArray() {

		if (this->paddress != NULL)
		{
			cout << "MyArray����������" << endl;
			delete[] this->paddress;
			this->paddress = NULL;
		}

	}

private:
	 T * paddress;    //ָ��ָ��������ٵ���ʵ����

	 int m_Capacity;				//��������

	 int m_size;			//�����С

};