#include "CreateMainTXT2.h"


void CreateMainTXT2() {
	//³������� �����
	ofstream outmain;
	string answer;
	cout << "�������� ���� Main.txt?(���/�) ";
	cin >> answer;
	(answer == "���") ? outmain.open("Main.txt", ios::trunc) : outmain.open("Main.txt", ios::app);
	cin.ignore();
	//�������� �������� �����
	if (!outmain.is_open()) {
		cout << "������� �������� �����" << endl;
	}
	else {
		cout << "__________���� �������__________" << endl;
		//��������� ������ �� ������� ����� ��������� ����� �trl+S
		string line;
		getline(cin, line, char(19));
		//��������� ������� \n
		while (line[line.length()-1] == '\n') {
			line.pop_back();
		}
			
		outmain << line;

		cout << "���������� ����, Ctrl+Enter ��������\n __________���� �������__________" << endl;
	}
	//�������� �����
	outmain.close();
}