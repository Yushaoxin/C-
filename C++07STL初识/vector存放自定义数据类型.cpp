//#include<iostream>
//#include <vector>
//#include<string>
//using namespace std;
//
////vector�д���Զ������������
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
//	//����Persn����
//	Person p1("����",15);
//	Person p2("����", 16);
//	Person p3("����", 17);
//	Person p4("����", 18);
//
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	for (vector <Person>::iterator it=v.begin(); it!=v.end(); it++)
//	{
//		cout << "����" << (*it).age << "���� " << (*it).age << endl;
//	//	cout << "����" << (*it).age << "���� " << (*it).age << endl;
//	}
//	
//}
//
////����Զ�����������ָ��
//void test02() {
//
//	vector<Person*> v;
//	//����Persn����
//	Person p1("����", 15);
//	Person p2("����", 16);
//	Person p3("����", 17);
//	Person p4("����", 18);
//
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//
//	for (vector <Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����   " << (*it)->name << "���� " << (*it)->age << endl;
//		//	cout << "����" << (*it).age << "���� " << (*it).age << endl;
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