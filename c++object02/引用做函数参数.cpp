//#include<iostream>
//using namespace std;
//
////��������
//
//
////1��ֵ����
//void myswap01(int a ,int b) {
//
//	int  temp = a;
//	a = b;
//	b = temp;
//	//cout << " swap a= " << a << endl;			//�������õ��ββ��ܸı�ʵ��
//	//cout << " swap b= " << b << endl;
//
//}
//
////2����ַ����
//
//void myswap02(int *a,int *b) {				//ָ�� *a ����ʵ�ε�ַ &a
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////3�����ô���
//void myswap03(int &a,int &b) {
//	int  temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//myswap01(a,b);					//�������õ��ββ��ܸı�ʵ��
//	
//	//myswap02(&a, &b);					//��ַ���Σ����Ըı�ʵ��
//	
//	myswap03(a, b);						//���ô��Σ����Ըı�ʵ��
//	cout << "a= " << a << endl;			
//	cout << "b= " << b << endl;
//
//
//
//
//
//	system("pause");
//	return 0;
//
//
//}