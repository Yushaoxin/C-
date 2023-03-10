//#include<iostream>
//using namespace std;
//
//
//
//int* func() {
//	
//	
//	//利用new关键字   可以将数据开辟到堆区
//	/*int a = 40;
//	return &a;*/
//
//
//	//利用new关键字   可以将数据开辟到堆区
//	int* p = new int(10);       //局部指针指向new出来的内存地址			
//	return p;					//返回指针的地址
//}
//
//
//
//
//int main() {
//
//	//在堆区开辟数据
//
//	int* p = func();			//接收func函数返回的内存数据地址，因为new的堆区不会释放，可以一直访问该内存地址
//
//	cout << *p << endl;			//打印内存地址的内容
//	cout << *p << endl;
//
//
//
//
//	system("pause");
//	return 0;
//
//}