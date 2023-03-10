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

class Son:public Father {					//子类继承父类。继承 了全部成员属性和成员函数，只是某些属性和方法被隐藏了
public:

	Son() {
		num = 200;
	}


public:
	int num;



};

void test01() {

	Son son;
	cout << "子类son.num= " << son.num << endl;
}


void test02() {

	Son son;
	cout << " 父类 son.num= " << son.Father::num << endl;				//通过son.Father::num的方式，实现子类调用父类的构造函数
}

int main() {

	test01();
	test02();
	system("pause");
	return 0;

}