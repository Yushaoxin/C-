//#include<iostream>
//using namespace std;
//  
//
//class Myinteger {
//	friend ostream& operator<<(ostream& cout, Myinteger m);					//ȫ�ֺ�����Myintegerd����Ԫ����
//public:
//	Myinteger(int Num){
//		num = Num;
//	}
//
//	
//
//
//	//����ǰ��--�����
//	Myinteger& operator--() {				//����thisָ������ݵ�ַ   ��������:Myinteger
//		num--;
//		return *this;
//	}
//
//	//���غ���--�����		
//	Myinteger operator--(int) {				//����ǰ��--�����ÿ��βΣ��������غ���
//		Myinteger temp=this->num;			//������ʱ����temp������this������
//		num--;								
//		return temp;						//������ʱ����temp�����ܷ���&temp����Ϊtemp���ں���ִ�н������գ�&��ַ��Ч
//	}
//
//private:
//	int num;
//
//
//};
//
////����<<�����
//ostream& operator<<(ostream &cout,Myinteger m) {				//coutΪ��׼����� ostream ��������  ����ֵΪcout
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