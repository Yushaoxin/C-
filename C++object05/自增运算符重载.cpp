//#include<iostream>
//using namespace std;
//  
//
//class Myinteger {
//	friend ostream& operator<<(ostream& cout, Myinteger m);					//全局函数是Myintegerd的友元函数
//public:
//	Myinteger(int Num){
//		num = Num;
//	}
//
//	
//
//
//	//重载前置--运算符
//	Myinteger& operator--() {				//返回this指针的数据地址   数据类型:Myinteger
//		num--;
//		return *this;
//	}
//
//	//重载后置--运算符		
//	Myinteger operator--(int) {				//区分前置--，采用空形参，区分重载函数
//		Myinteger temp=this->num;			//创建临时对象temp，接受this的数据
//		num--;								
//		return temp;						//返回临时对象temp，不能返回&temp，因为temp会在函数执行结束回收，&地址无效
//	}
//
//private:
//	int num;
//
//
//};
//
////重载<<运算符
//ostream& operator<<(ostream &cout,Myinteger m) {				//cout为标准输出流 ostream 数据类型  返回值为cout
//	cout << m.num;
//	return cout;
//}
//
//
//void test01() {
//	Myinteger m(10);
//	cout << --(--m) << endl;
//
//
//}
//
//void test02() {
//	Myinteger m(10);
//	cout << m-- << endl;
//	cout << m << endl;
//}
//
//int main() {
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//
//}