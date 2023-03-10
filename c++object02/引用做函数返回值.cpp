//#include<iostream>
//using namespace std;
//
////引用做函数的返回值
//
////1、引用不可以做局部变量的返回值
//int& test01() {
//	 int a = 10;
//	return a;
//
//}
//
//int& test02() {
//	static int a = 10;			//静态变量，存放在全局区，不会释放
//	return a;
//
//}
//
//
//int main() {
//
//	int& ref1 = test01();					//用ref接收test01返回的引用类型
//	int& ref2 = test02();
//	cout << " ref1 = " << ref1 << endl;		//第一次访问成功
//	cout << " ref1 = " << ref1<< endl;		//第二池访问失败
//
//	cout << " ref2 = " << ref2 << endl;		//第一次访问成功
//	cout << " ref2 = " << ref2 << endl;
//	system("pause");
//	return 0;
//}