//#include<iostream>
//using namespace std;
//
////函数重载的注意事项
////1、引用作为重载的条件
//void func(int& a) {
//	cout << "func(int &a)调用" << endl;
//
//}
//void func( const int& a) {
//	cout << "const func(int &a)调用" << endl;
//
//}
//
////2、重载函数碰到默认参数
////void func02(int a, int b = 10) {							//两个重载函数虽然参数的个数不同，但实际调用是都匹配，造成二义性，要避免发生
////	cout << " func02(int a, int b = 10)" << endl;
////}
////
////void func02(int a) {
////	cout << " func02(int a)" << endl;
////}
//
//int main() {
//	int a = 10;				//int a，a是一个变量 ，"func(int &a)调用"
//	func(a);
//
//	func(15);				//直接传15,15是内存中的常量，"const func(int &a)调用" 
//
//	//func02(10);			//报错：有多个 重载函数 "func02" 实例与参数列表匹配
//
//	system("pause");
//	return 0;
//}