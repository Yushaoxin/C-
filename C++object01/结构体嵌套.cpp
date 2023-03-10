#include<iostream>
#include<string>
using namespace std;

//结构体指针
struct Student {
	string name;		//姓名
	int age;			//年龄
	int score;			//得分
}; 

struct Teacher {
	int id;				//教师编号
	string name;		//老师姓名	
	int age;			//教师年龄
	Student stu;		//教师的学生

};
//运用const类型，防止函数体的误操作
	void printTeacher(const Teacher * p){
		//p->age = 80;
		cout << "教师姓名：" << p->name << "   教师的学生姓名: " << p->stu.name << endl;
	}

int main() {

	Teacher teacher1 = { 1,"王老师",30,{"王五",18,90} };
	cout << "教师姓名：" << teacher1.name << "   教师的学生姓名: " << teacher1.stu.name << endl;

	printTeacher(&teacher1);
	system("pause");
	return 0;

}