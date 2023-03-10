//#include<iostream>
//using namespace std;
//
////交换函数
//
//
////1、值传递
//void myswap01(int a ,int b) {
//
//	int  temp = a;
//	a = b;
//	b = temp;
//	//cout << " swap a= " << a << endl;			//函数调用的形参不能改变实参
//	//cout << " swap b= " << b << endl;
//
//}
//
////2、地址传递
//
//void myswap02(int *a,int *b) {				//指针 *a 接收实参地址 &a
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////3、引用传递
//void myswap03(int &a,int &b) {
//	int  temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//myswap01(a,b);					//函数调用的形参不能改变实参
//	
//	//myswap02(&a, &b);					//地址传参，可以改变实参
//	
//	myswap03(a, b);						//引用传参，可以改变实参
//	cout << "a= " << a << endl;			
//	cout << "b= " << b << endl;
//
//
//
//
//
//	system("pause");
//	return 0;
//
//
//}