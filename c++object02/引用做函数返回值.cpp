//#include<iostream>
//using namespace std;
//
////�����������ķ���ֵ
//
////1�����ò��������ֲ������ķ���ֵ
//int& test01() {
//	 int a = 10;
//	return a;
//
//}
//
//int& test02() {
//	static int a = 10;			//��̬�����������ȫ�����������ͷ�
//	return a;
//
//}
//
//
//int main() {
//
//	int& ref1 = test01();					//��ref����test01���ص���������
//	int& ref2 = test02();
//	cout << " ref1 = " << ref1 << endl;		//��һ�η��ʳɹ�
//	cout << " ref1 = " << ref1<< endl;		//�ڶ��ط���ʧ��
//
//	cout << " ref2 = " << ref2 << endl;		//��һ�η��ʳɹ�
//	cout << " ref2 = " << ref2 << endl;
//	system("pause");
//	return 0;
//}