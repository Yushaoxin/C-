#include<iostream>
#include"swap.h"
using namespace std;

//函数的分文件编写
//1、创建.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

int max(int a, int b) {
	if (a <= b)
		return b;
	else
		return a;
};

/*int main() {
	int a = 10;
	int b = 20;
	cout << "a,b中较大的值为" << max(a, b) << endl;




	system("pause");


	return 0;




}*/