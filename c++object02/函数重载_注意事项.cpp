//#include<iostream>
//using namespace std;
//
////�������ص�ע������
////1��������Ϊ���ص�����
//void func(int& a) {
//	cout << "func(int &a)����" << endl;
//
//}
//void func( const int& a) {
//	cout << "const func(int &a)����" << endl;
//
//}
//
////2�����غ�������Ĭ�ϲ���
////void func02(int a, int b = 10) {							//�������غ�����Ȼ�����ĸ�����ͬ����ʵ�ʵ����Ƕ�ƥ�䣬��ɶ����ԣ�Ҫ���ⷢ��
////	cout << " func02(int a, int b = 10)" << endl;
////}
////
////void func02(int a) {
////	cout << " func02(int a)" << endl;
////}
//
//int main() {
//	int a = 10;				//int a��a��һ������ ��"func(int &a)����"
//	func(a);
//
//	func(15);				//ֱ�Ӵ�15,15���ڴ��еĳ�����"const func(int &a)����" 
//
//	//func02(10);			//�����ж�� ���غ��� "func02" ʵ��������б�ƥ��
//
//	system("pause");
//	return 0;
//}