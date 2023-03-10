//#include<iostream>
//using namespace std;
//
//
////1、new的基本语法
//
//int* func() {
//
//	//在堆区创建整形数据
//	//new返回的是 该数据类型的指针
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
//	//堆区的数据 由程序员管理开辟， 程序员管理释放
//	//如果想释放堆区的数据，利用关键字 delete
//
//	delete p;				//删除p
//
//
//	//cout << *p << endl;			//打印失败
//}
//
//
//void   test02() {
//
//	int* arr = new int[10];			//创建十个int元素的数组arr[]
//
//	for (int  i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;			//给10个元素赋值
//
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//
//
//	}
//	//释放堆区数组
//	//释放数组的时候 ，要加
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