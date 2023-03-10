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
//	Person(const Person &p) {
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
//void test() {
//	//调用
//
//	//括号法
//	//Person p1;		//无参构造					//注意：调用默认函数时，不要加（）
//	//Person p();							//程序认为是函数声明
//	//Person p2(10);	//无参构造
//	//Person p3(p2);	//拷贝构造
//	/*cout << "age= " << p2.age << endl;
//	cout << "age= " << p3.age << endl;*/
//
//	//显示法
//		Person p1;					//无参构造
//		Person p2 = Person(10);		//无参构造
//		Person p3 = Person(p3);		//拷贝构造
//
//		Person(10);			//匿名对象  特点：当前行执行结束后，系统会立即回收匿名对象
//
//		//注意事项
//		//不要利用拷贝构造函数 初始化匿名对象   编译器会认为	Person(p3)=== Person p3   创建对象
//		Person(p3);
//
//
//
//	//隐式转换法
//		Person p4 = 10;					//隐式转换为有参构造函数	
//		Person p5 = p3;					//隐式转换为拷贝构造函数
//}
//int main() {
//
//	test();
//	//Person p;
//
//	system("pause");
//	return 0;
//
//}