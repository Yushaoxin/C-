//#include<iostream>
//#include <vector>
//#include<string>
//using namespace std;
//
////vector中存放自定义的数据类型
//
//class Person {
//
//
//public:
//	Person(string Name,int Age) {
//		this->name = Name;
//		this->age = Age;
//
//	}
//
//public:
//	string name;
//	int age;
//
//
//};
//
//
//void test01() {
//
//	vector<Person> v;
//	//创建Persn对象
//	Person p1("王五",15);
//	Person p2("李四", 16);
//	Person p3("马六", 17);
//	Person p4("三七", 18);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	for (vector <Person>::iterator it=v.begin(); it!=v.end(); it++)
//	{
//		cout << "姓名" << (*it).age << "年龄 " << (*it).age << endl;
//	//	cout << "姓名" << (*it).age << "年龄 " << (*it).age << endl;
//	}
//	
//}
//
////存放自定义数据类型指针
//void test02() {
//
//	vector<Person*> v;
//	//创建Persn对象
//	Person p1("王五", 15);
//	Person p2("李四", 16);
//	Person p3("马六", 17);
//	Person p4("三七", 18);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//
//	for (vector <Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名   " << (*it)->name << "年龄 " << (*it)->age << endl;
//		//	cout << "姓名" << (*it).age << "年龄 " << (*it).age << endl;
//	}
//
//}
//
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//
//}