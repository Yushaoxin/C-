#include<iostream>
using namespace std;


//int main() {
//
//	const修饰的指针：常量指针
//
//	特点：指针的指向可以修改，但指针指向的值不可以被修改
//	int arr[3] = { 1,2,3 };
//
//	/*
//	
//	cout << "arr[0]=" << arr[0] << endl;
//	const int * p = &arr[0];
//	arr[0] = 100;						//常量指针指向的值，不能通过指针进行修改，只能用原数组地址进行赋值修改
//	*p = 100;
//	p = &arr[2];
//	cout << "arr[0]=" << arr[0] << endl;
//
//
//
//	const修饰常量；指针常量
//	特点：指针指向的地址不能改，指针指向的值可以修改
//	int * const q = &arr[1];
//	q = &arr[2];			//错误用法
//	* q = 20;
//
//
//	const修饰常量，又修饰指针
//	const int* const t = &arr[2];			//地址和数据都不可以修改
//	*t = 100;								//错误用法
//	t = &arr[0];							//错误用法
//
//	*/										//const用法总结：/*...*/
//
//
//	
//	
//	用指针遍历数组
//	
//	int* c = &arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "arr["<<i<<"]=" << *c << endl;
//		c++;
//	}
//	system("pause");
//
//	return 0;
//		
//
//}