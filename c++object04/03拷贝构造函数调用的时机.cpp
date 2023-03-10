//#include<iostream>
//using namespace std;
//
//class Person {
//
//public:
//	int age;
//	//无参构造函数
//	Person() {
//		cout << "Person 的构造函数的调用" << endl;
//	}
//
//	//默认构造函数
//	Person(int a) {
//		age = a;
//		cout << "Person 的有参构造函数的调用" << endl;
//
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		//将传入的人身上的属性，拷贝到自己身上
//		cout << "Person 的拷贝构造函数的调用" << endl;
//		age = p.age;
//
//	}
//
//
//	//析构函数
//	~Person() {
//		cout << "Person 的析构函数的调用" << endl;
//	}
//
//
//};
//
//
//
////C++中三种拷贝构造函数调用情况
//
////1.使用一个已经创建完毕的对象来初始化另一个对象
//
//void test01() {
//
//	Person p1;
//	Person p2(p1);
//
//}
//
////2.以值的方式返回局部变量
//Person test02() {
//
//	Person p1;
//	return p1;
//
//}
//
////3.值传递的方式给函数参数传值
//void doWork(Person p) {
//
//}
//void test03() {
//	Person p;
//	doWork(p);
//
//}
//
//
//int main() {
//
//	//test01();					//方法1：使用一个已经创建完毕的对象来初始化另一个对象
//	
//	//Person p2 = test02();		//方法2：以值的方式返回局部变量
//
//	test03();					//方法3：值传递的方式给函数参数传值
//
//	system("pause");
//	return 0;
//
//}
//
