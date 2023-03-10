//#include<iostream>
//using namespace std;
//
////访问权限
////public;		成员 类内可以访问   类外可以访问
////protected;		成员 类内可以访问   类外不可以访问     子类可以访问父类的保护内容
////private;		成员 类内可以访问   类外不可以访问     子类不可以访问父类的保护内容
//
//
//class Person
//{
//public:
//
//	string name;
//
//protected:
//	string car;
//
//private:
//	int password;
//
//
//public:
//	void func() {
//		name = "zhangsan ";
//		car = "AE86";
//		password = 2580;
//
//	}
//
//};
//
//class People {
//
//public:
//	void setName(string Name) {
//		name = Name;
//	}
//		
//	string getName() {
//		return  name;
//
//	}
//
//	void setAge(int Age) {         //可以设置条件，限制用户输出格式判断
//		age = Age;
//
//	}
//
//	string getsex() {
//		sex = "男";
//		return sex;
//	}
//
//private:					//均为私有成员
//	string name;
//	int age;
//	string sex;
//
//
//
//};
//
//
//int main() {
//
//	Person p1;
//	p1.func();
//	p1.name;
//	cout << p1.name;
//	//p1.car;		//不可访问
//	//p1.password;	//不可访问
//
//	People p2;
//
//	p2.setName("wangwu");
//	cout<<p2.getName()<<endl;
//
//	p2.setAge(18);
//
//	cout << p2.getsex()<<endl;
//
//
//	system("pause");
//	return 0;
//}
//
//
////总结
////			成员属性设为私有，
//				//优点：1，可以自己控制读写；
//				//      2、对于写权限，	我们可以检测数据的有效性
////			用public的成员方法控制成员属性的读写
