#include<iostream>
using namespace std;
#include<fstream>;
#include<string>;


//���ı��ļ�

int main() {
	//����ͷ�ļ�


	//����������
	ifstream ifs;

	//���ļ����жϴ��ļ��Ƿ�ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return 1;
		
	}


	//4.������

	//��һ��										//����
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/

	//�ڶ���
	 /*char buf[1024] = { 0 };						//����
	 while (ifs.getline(buf,sizeof(buf))) {
		 cout << buf << endl;
	 }
*/
	//������
	//string buf;
	//while (getline(ifs,buf)) {

	//	cout << buf << endl; 
	//}

	//������
	//char c;
	//while ((c=ifs.get())!=EOF ){				//EOF :End Of file
	//	cout << c;

	//}

	//5.�ر��ļ�
	ifs.close();


	system("pause");
	return 0;
}