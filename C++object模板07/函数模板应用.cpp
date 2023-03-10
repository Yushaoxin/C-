//#include<iostream>
//using namespace std;
//
//template <typename T>
//void sort(T arr[], int len) {
//	for (int i = 0;i < len;i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j])
//				max = j;
//		}
//		if (max != i)
//			swap(arr[max], arr[i]);
//	}
//
//}
//
//template <typename T>
//void swap(T &a,T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//void Print(T arr[],int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	char arr[] = "bdefac";
//	int num = sizeof(arr) / sizeof(char);
//	sort(arr, num);
//	Print(arr, num);
//}
//void test02() {
//	int arr[] = { 9,6,3,8,5,2,7,4,1 };
//	int num = sizeof(arr) / sizeof(int);
//	sort(arr, num);
//	Print(arr, num);
//
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//
//}