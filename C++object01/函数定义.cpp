#include<iostream>
using namespace std;

	//声明可以多次，定义只有一次
	//声明写在main函数前，提前编译告诉编译器，有max函数
	//在后面再定义函数也不会报错
	//如果不提前声明，这函数定义需要在main函数之前，保证编译后，main函数运行时，max函数已经编译，可以调用

	//声明
	//int max(int a, int b);
	//int max(int a, int b);
	//定义
	/*int max(int a, int b) {
		if (a <= b)
			return b;
		else
			return a;
	};*/



//int main() {
//		
//	
//
//
//	system("pause");
//
//
//	return 0;
//
//
//
//
//}