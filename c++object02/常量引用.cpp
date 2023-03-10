//#include<iostream>
//using namespace std;
//
////打印数据函数
//void showValue(const int& val) {
//
//	//val=1000;
//	cout << " val = " << val << endl;
//}
//
//int main() {
//
//
//	/*int a = 10;
//	int& ref= a;*/			//引用必须引用一块合法的内存空间
//
//	//int& ref = 10;			//错误的
//	//如何做到 int& ref=10；？
//	const int& ref = 10;		//等价于  int temp=10; const int& ref = temp;  //加入const后，不可修改
//
//	int b = 100;
//	showValue(b);					//因为是引用函数，val的地址和b的地址相同，调用函数可能会改变实参，为了保护实参数据
//									//将打印函数的val引用设置为常量引用，无法改变val地址的值，保护实参，数据安全
//
//	system("pause");
//	return 0;
//
//}