//#include<iostream>
//using namespace std;
//
////默认情况下，C++编译器至少给一个类添加三个函数
////1.默认构造函数（无参 ，函数体为空）
////2.默认拷贝构造函数，对属性进行值拷贝			不写拷贝构造函数，调用时也会发生值传递 such as		//Person p1;
////3.默认析构函数（无参，函数体为空）																//p1.age=10;
//																									//Person p2(p1);则p2.age=10;
//
//
//
///// <summary>
///// 构造函数调用规则：
/////		·如果用户定义了有参构造函数，则C++则不提供默认无参构造函数，但提供默认拷贝函数
/////		·如果用户定义了拷贝构造函数，则C++不提供默认无参构造函数和有参构造函数
///// 
///// </summary>
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
//int main()
//{
//
//
//	system("pause");
//	return 0;
//
//}