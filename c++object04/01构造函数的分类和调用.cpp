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
//	Person(const Person &p) {
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
//void test() {
//	//����
//
//	//���ŷ�
//	//Person p1;		//�޲ι���					//ע�⣺����Ĭ�Ϻ���ʱ����Ҫ�ӣ���
//	//Person p();							//������Ϊ�Ǻ�������
//	//Person p2(10);	//�޲ι���
//	//Person p3(p2);	//��������
//	/*cout << "age= " << p2.age << endl;
//	cout << "age= " << p3.age << endl;*/
//
//	//��ʾ��
//		Person p1;					//�޲ι���
//		Person p2 = Person(10);		//�޲ι���
//		Person p3 = Person(p3);		//��������
//
//		Person(10);			//��������  �ص㣺��ǰ��ִ�н�����ϵͳ������������������
//
//		//ע������
//		//��Ҫ���ÿ������캯�� ��ʼ����������   ����������Ϊ	Person(p3)=== Person p3   ��������
//		Person(p3);
//
//
//
//	//��ʽת����
//		Person p4 = 10;					//��ʽת��Ϊ�вι��캯��	
//		Person p5 = p3;					//��ʽת��Ϊ�������캯��
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