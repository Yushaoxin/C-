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
////vector存放内置数据类型
//void tesr01() {
//	//创建一个vector容器，数组
//
//	vector<int> v;
//
//	//向容器中插入   尾插法
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();				//起始迭代器  指向第一个元素位置
//	//vector<int>::iterator itEnd = v.end();					//结束迭代器，指向最后一个元素的下一个位置
//
//
//	////第一种遍历方法
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//
//	//}
//
//
//
//	//方法二	遍历格式
//	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
//
//		cout << *it << endl;
//
//	}
//
//	//方法三   For_each
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