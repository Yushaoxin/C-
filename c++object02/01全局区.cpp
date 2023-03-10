//#include<iostream>
//using namespace std;
//
//全局区
//int g_a = 1;
//int g_b = 2;
//
//
//const修饰的全局变量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	局部区
//
//
//	创建普通局部变量
//	int a = 10;
//	int b= 10;
//
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//
//	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;
//
//
//	静态变量
//
//	static int s_a = 12;
//	static int s_b = 12;
//
//	cout << "静态变量s_b的地址为：" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;
//
//
//	常量
//	字符串常量
//	cout << "字符串常量的地址为：" << (int)&"nihao " << endl;
//
//
//
//	const修饰的全局变量
//
//	const修饰的全局变量
//	cout << "const修饰的全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
//	cout << "const修饰的全局常量c_g_b的地址为：" << (int)&c_g_b << endl;
//
//	const修饰的局部变量
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//
//	cout << "const修饰的局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
//	cout << "const修饰的局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
//
//
//	//总结：
//	//	·C++中在程序运行前分为全局区和代码区
//	//	·代码区特点是共享和只读
//	//	·全局区中存放全局变量，静态变量，常量
//	//	·常量去中存放const修饰的全局常量和字符串常量
//
//
//
//
//	system("pause");
//	return 0;
//
//}