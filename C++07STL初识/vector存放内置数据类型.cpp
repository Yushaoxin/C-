//#include<iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//
//void myprint(int val) {
//	cout << val << endl;
//}
//
////vector���������������
//void tesr01() {
//	//����һ��vector����������
//
//	vector<int> v;
//
//	//�������в���   β�巨
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();				//��ʼ������  ָ���һ��Ԫ��λ��
//	//vector<int>::iterator itEnd = v.end();					//������������ָ�����һ��Ԫ�ص���һ��λ��
//
//
//	////��һ�ֱ�������
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//
//	//}
//
//
//
//	//������	������ʽ
//	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
//
//		cout << *it << endl;
//
//	}
//
//	//������   For_each
//	for_each(v.begin(), v.end(), myprint);
//	
//
//
//}
//
//
//
//
//int main() {
//	tesr01();
//
//	system("pause");
//	return 0;
//
//}