#include<iostream>
using namespace std;

class Father {

public:
	Father() {
		num = 100;
	}

public:
	int num;

};

class Son:public Father {					//����̳и��ࡣ�̳� ��ȫ����Ա���Ժͳ�Ա������ֻ��ĳЩ���Ժͷ�����������
public:

	Son() {
		num = 200;
	}


public:
	int num;



};

void test01() {

	Son son;
	cout << "����son.num= " << son.num << endl;
}


void test02() {

	Son son;
	cout << " ���� son.num= " << son.Father::num << endl;				//ͨ��son.Father::num�ķ�ʽ��ʵ��������ø���Ĺ��캯��
}

int main() {

	test01();
	test02();
	system("pause");
	return 0;

}