//#include<iostream>
//using namespace std;
///// <summary>
///// 
///// //模板使用的注意事项！！！
///// 1.自动类型推导，必须推导出一致的数据类型T才可以使用 such as :void MySwap(int a,char b)  两个数据的类型不同，无法识别T的类型
///// 2.模板必须要确定T的数据类型，才能使用
///// </summary>
///// <typeparam name="T"></typeparam>
///// <param name="a"></param>
///// <param name="b"></param>
//
//template<typename T>				//声明一个模板  //T是通用数据类型  抽象出来
//void MySwap(T &a,T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func() {									//func函数无法确定T的类型
//	cout << "func函数运行" << endl;
//}
//
//int main() {
//	int a = 10;
//	int b = 15;
//	MySwap(a, b);				//自动类型推导
//	MySwap<int>(a, b);			//显示指定类型
//	cout << "a= " << a << "  b= " << b << endl;
//
//	func<int>();					//必须显示指定类型为int或其他类型
//	double c = 10;
//	double d = 15;
//	MySwap(c, d);
//	cout << "c= " << c << "  d= " << d << endl;
//	system("pause");
//	return 0;
//
//
//}