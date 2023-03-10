//#include<iostream>
//using namespace std;
//
//
//
///// <summary>
///// 浅拷贝和深拷贝
/////		·浅拷贝就是：简单是赋值拷贝
/////		·在堆区重新申请空间，进行拷贝操作 
/////
///// </summary>
//
//class Person {
//	
//	public:
//		int age;
//		int * height;
//		//无参构造函数
//		Person() {
//			cout << "Person 的构造函数的调用" << endl;
//		}
//	
//		//默认构造函数
//		Person(int Age,int Height) {
//			age = Age;
//			height = new int(Height);
//			cout << "Person 的有参构造函数的调用" << endl;
//			cout << "age= " << age << "   height=  " << *height << endl;
//			
//	
//		}
//		//拷贝构造函数
//		Person(const Person& p) {
//			//将传入的人身上的属性，拷贝到自己身上
//			cout << "Person 的拷贝构造函数的调用" << endl;
//			age = p.age;
//			//height=p.height;					//默认拷贝函数，让height指向p.height,p1和p2指向一块地址；调用析构函数时，报错
//			height = new int(*p.height);				//再重新创建堆区，拷贝数据
//			cout << "age= " << age << "   height=  " << *height << endl;
//		}
//	
//	
//		//析构函数
//		~Person() {
//			//析构代码，将堆区的内存释放
//			if (height != NULL) {
//				delete height;
//				height = NULL;
//
//			}
//			cout << "Person 的析构函数的调用" << endl;
//		}
//	
//	
//	};
//	
// void  test01() {
//	 Person p1(10,10);
//
//	 Person p2(p1);
//}
//
//
// int main()
// {
//
//	 test01();
//	 system("pause");
//	 return 0;
// }