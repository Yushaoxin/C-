//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//传统方法
//	//Person(int A, int B, int C) {
//	//	a = A;
//	//	b = B;
//	//	c = C;
//	//}
//
//	//初始化列表法初始化
//	Person(int A, int B, int C) :a(A), b(B), c(C) {};				//初始化列表
//	
//	void Print() {
//		cout << "p.a=  " << a << endl;
//		cout << "p.b=  " << b << endl;
//		cout << "p.c=  " << c << endl;
//	}
//private:
//	int a, b, c;
//
//
//};
//
//void test01() {
//	Person p(10,20,30);
//	p.Print();
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//
//};