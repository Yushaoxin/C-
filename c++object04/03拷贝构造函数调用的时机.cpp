//#include<iostream>
//using namespace std;
//
//class Person {
//
//public:
//	int age;
//	//�޲ι��캯��
//	Person() {
//		cout << "Person �Ĺ��캯���ĵ���" << endl;
//	}
//
//	//Ĭ�Ϲ��캯��
//	Person(int a) {
//		age = a;
//		cout << "Person ���вι��캯���ĵ���" << endl;
//
//	}
//	//�������캯��
//	Person(const Person& p) {
//		//������������ϵ����ԣ��������Լ�����
//		cout << "Person �Ŀ������캯���ĵ���" << endl;
//		age = p.age;
//
//	}
//
//
//	//��������
//	~Person() {
//		cout << "Person �����������ĵ���" << endl;
//	}
//
//
//};
//
//
//
////C++�����ֿ������캯���������
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
//
//void test01() {
//
//	Person p1;
//	Person p2(p1);
//
//}
//
////2.��ֵ�ķ�ʽ���ؾֲ�����
//Person test02() {
//
//	Person p1;
//	return p1;
//
//}
//
////3.ֵ���ݵķ�ʽ������������ֵ
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
//	//test01();					//����1��ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
//	
//	//Person p2 = test02();		//����2����ֵ�ķ�ʽ���ؾֲ�����
//
//	test03();					//����3��ֵ���ݵķ�ʽ������������ֵ
//
//	system("pause");
//	return 0;
//
//}
//
