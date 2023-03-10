//#include<iostream>
//using namespace std;
//
//
////函数重载
////可以让函数名相同，提高可用性
////参数类型不同，或者参数个数不同，或者参数个数和类型都不同
//
//int funv(int a ,int b) {
//	return a + b;
//}
//
//float funv(float a, float b) {
//	return a + b;
//}
//
//int funv(int a,int b,int c) {
//	return a + b + c;
//}
//int main() {
//
//	int a = 10;
//	int b = 15;
//	int c = 20;
//
//	float m = 15.5;
//	float n = 14.2;
//
//	cout << "int funv(int a ,int b)的结果" << funv(a, b)<<"\n";
//	cout << "float funv(float a, float b)的结果" << funv(m, n) << "\n";
//	cout << "int funv(int a,int b,int c)的结果" << funv(a, b ,c) << "\n";
//	system("pause");
//	return 0;
//}