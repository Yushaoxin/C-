//#include<iostream>
//using namespace std;
//
//
//
///// <summary>
///// ǳ���������
/////		��ǳ�������ǣ����Ǹ�ֵ����
/////		���ڶ�����������ռ䣬���п������� 
/////
///// </summary>
//
//class Person {
//	
//	public:
//		int age;
//		int * height;
//		//�޲ι��캯��
//		Person() {
//			cout << "Person �Ĺ��캯���ĵ���" << endl;
//		}
//	
//		//Ĭ�Ϲ��캯��
//		Person(int Age,int Height) {
//			age = Age;
//			height = new int(Height);
//			cout << "Person ���вι��캯���ĵ���" << endl;
//			cout << "age= " << age << "   height=  " << *height << endl;
//			
//	
//		}
//		//�������캯��
//		Person(const Person& p) {
//			//������������ϵ����ԣ��������Լ�����
//			cout << "Person �Ŀ������캯���ĵ���" << endl;
//			age = p.age;
//			//height=p.height;					//Ĭ�Ͽ�����������heightָ��p.height,p1��p2ָ��һ���ַ��������������ʱ������
//			height = new int(*p.height);				//�����´�����������������
//			cout << "age= " << age << "   height=  " << *height << endl;
//		}
//	
//	
//		//��������
//		~Person() {
//			//�������룬���������ڴ��ͷ�
//			if (height != NULL) {
//				delete height;
//				height = NULL;
//
//			}
//			cout << "Person �����������ĵ���" << endl;
//		}
//	
//	
//	};
//	
// void  test01() {
//	 Person p1(10,10);
//
//	 Person p2(p1);
//}
//
//
// int main()
// {
//
//	 test01();
//	 system("pause");
//	 return 0;
// }