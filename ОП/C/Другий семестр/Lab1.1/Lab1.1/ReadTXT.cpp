#include "ReadTXT.h"

void ReadTXT(string name) {
	//³������� ����� ��� �������
	ifstream fromfile;
	fromfile.open(name);
	string line;
	//�������� �������� �����
	if (!fromfile.is_open()) {
		cout << "\n\n����: " << name << " �� ������� �������" << endl;
	}
	else {
		cout << "\n\n__________������� ����� "<< name <<"__________\n" << endl;
		//���� ����� ����� � �������
		while (!fromfile.eof()) {
			line = "";
			getline(fromfile, line);
			cout << line <<endl;
		}
		cout << "\n__________���������� ������� �����__________\n\n" << endl;
	}
	//�������� �����
	fromfile.close();
}