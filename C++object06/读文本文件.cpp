#include<iostream>
using namespace std;
#include<fstream>;
#include<string>;


//读文本文件

int main() {
	//包含头文件


	//创建流对象
	ifstream ifs;

	//打开文件，判断打开文件是否成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return 1;
		
	}


	//4.读数据

	//第一种										//常用
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/

	//第二种
	 /*char buf[1024] = { 0 };						//常用
	 while (ifs.getline(buf,sizeof(buf))) {
		 cout << buf << endl;
	 }
*/
	//第三种
	//string buf;
	//while (getline(ifs,buf)) {

	//	cout << buf << endl; 
	//}

	//第四种
	//char c;
	//while ((c=ifs.get())!=EOF ){				//EOF :End Of file
	//	cout << c;

	//}

	//5.关闭文件
	ifs.close();


	system("pause");
	return 0;
}