//#include<iostream>
//using namespace std;
//
////默认函数参数
//int func01(int a, int b, int c) {
//
//	return a + b + c;
//}
//
////正确的默认函数定义格式
//int func02(int a,int b=10,int c=20) {
//
//
//	return a + b + c;
//}
//
////错误的默认函数定义模式
///*int func02(int a, int b = 10, int c ) {				//如果b已经设定了默认值，这后面的变量必须都设定默认值
//								
//
//	return a + b + c;
//}*/
//
//
////2.如果函数声明有默认参数，函数实现就不能有默认参数！！！！！！
////注意：
//		//如果函数声明有了默认值，函数实现就不能有默认值
//		//如果函数实现有默认值，函数声明就不能有默认值，
//		//默认值初始化只能进行一次
//
////正确的格式
// //先函数声明
//int fun(int a = 10, int b = 10);
//
//int fun(int a, int b) {
//
//	return a + b;
//};
//
////错误实例
//int fun(int a = 10, int b = 10);
//
///*int fun(int a=20, int b=20) {				//显示fun函数重定义默认参数
//
//	return a + b;
//};*/
//
//
//
//int main() {
//
//	int sum1=func01(10,15,20);
//	cout << sum1 << endl;			//正常调用，打印10+15+20=45
//
//	int sum2 = func02(10);			//只输入a的值，b和c使用默认值
//	cout << sum2 << endl;			//结果为10+10+20=40
//
//	int sum3 = func02(20, 30, 40);		//传进去的值会覆盖默认值	
//	cout << sum3 << endl;				//结果为20+30+40=90
//
//
//
//
//	system("pause");
//	return 0;
//}