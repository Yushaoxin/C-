//#include<iostream>
//using namespace std;
///// <summary>
///// 
///// //ģ��ʹ�õ�ע���������
///// 1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ�� such as :void MySwap(int a,char b)  �������ݵ����Ͳ�ͬ���޷�ʶ��T������
///// 2.ģ�����Ҫȷ��T���������ͣ�����ʹ��
///// </summary>
///// <typeparam name="T"></typeparam>
///// <param name="a"></param>
///// <param name="b"></param>
//
//template<typename T>				//����һ��ģ��  //T��ͨ����������  �������
//void MySwap(T &a,T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func() {									//func�����޷�ȷ��T������
//	cout << "func��������" << endl;
//}
//
//int main() {
//	int a = 10;
//	int b = 15;
//	MySwap(a, b);				//�Զ������Ƶ�
//	MySwap<int>(a, b);			//��ʾָ������
//	cout << "a= " << a << "  b= " << b << endl;
//
//	func<int>();					//������ʾָ������Ϊint����������
//	double c = 10;
//	double d = 15;
//	MySwap(c, d);
//	cout << "c= " << c << "  d= " << d << endl;
//	system("pause");
//	return 0;
//
//
//}