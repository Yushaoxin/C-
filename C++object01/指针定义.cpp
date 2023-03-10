#include<iostream>
using namespace std;





//int main() {
//
//
//	//指针的定义
//	//int a = 10;
//	//指针的定义语法： 数据类型 * 指针变量名
//	//int * p;
//	//p = &a;
//	//cout << "a的地址" << &a << endl;
//	//cout << "指针p的地址" << p << endl;
//
//	//2.使用指针
//	//可以通过解引用的方式来找到指针指向的内存
//	//指针前加 *代表解引用，找到指针指向的内存数据；
//	//*p = 1000;
//	//cout << "指针p的内存数据为a=" << *p << endl;
//
//
//
//	//批量注释 ： ctrl k,ctrl c
//	//取消注释: Ctrl+K,Ctrl+U			
//	
//	//指针所占用的内存空间
//	//cout << "*p " << sizeof(p) << endl;						//均为4字节，因为指针存的是地址，4字节32位2进制地址 such as 0x0084
//	//cout << "char * " << sizeof(char*) << endl;
//	//cout << "int  * " << sizeof(int*) << endl;
//	//cout << "float   * " << sizeof(float*) << endl;
//
//
//	//空指针
//
//	//1、空指针用于给指针变量初始化
//	//int* p = NULL;
//
//	//2、空指针是不可以进行访问的
//	//*p = 100;
//
//	//野指针
//	//int* q = (int*)0x1100;
//
//	//空指针和野指针都不可访问
//	 
//	system("pause");
//
//	return 0;
//}