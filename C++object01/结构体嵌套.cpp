#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
struct Student {
	string name;		//����
	int age;			//����
	int score;			//�÷�
}; 

struct Teacher {
	int id;				//��ʦ���
	string name;		//��ʦ����	
	int age;			//��ʦ����
	Student stu;		//��ʦ��ѧ��

};
//����const���ͣ���ֹ������������
	void printTeacher(const Teacher * p){
		//p->age = 80;
		cout << "��ʦ������" << p->name << "   ��ʦ��ѧ������: " << p->stu.name << endl;
	}

int main() {

	Teacher teacher1 = { 1,"����ʦ",30,{"����",18,90} };
	cout << "��ʦ������" << teacher1.name << "   ��ʦ��ѧ������: " << teacher1.stu.name << endl;

	printTeacher(&teacher1);
	system("pause");
	return 0;

}