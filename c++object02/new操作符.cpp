//#include<iostream>
//using namespace std;
//
//
////1��new�Ļ����﷨
//
//int* func() {
//
//	//�ڶ���������������
//	//new���ص��� ���������͵�ָ��
//
//	int* p = new int(10);
//	return p;
//}
//
//
//void test01(){
//	
//
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//���������� �ɳ���Ա�����٣� ����Ա�����ͷ�
//	//������ͷŶ��������ݣ����ùؼ��� delete
//
//	delete p;				//ɾ��p
//
//
//	//cout << *p << endl;			//��ӡʧ��
//}
//
//
//void   test02() {
//
//	int* arr = new int[10];			//����ʮ��intԪ�ص�����arr[]
//
//	for (int  i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;			//��10��Ԫ�ظ�ֵ
//
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//
//
//	}
//	//�ͷŶ�������
//	//�ͷ������ʱ�� ��Ҫ��
//		delete[] arr;
//
//
//
//}
//
//
//
//int main() {
//
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//
//}