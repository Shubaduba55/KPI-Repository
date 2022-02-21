#include "SearchIdent.h"

void Search(string main, string name) {
	
	ifstream Main;
	ofstream ID;
	Main.open(main);
	ID.open(name);

	if (!Main.is_open() && !ID.is_open()) {
		cout << "�����: "<< main <<" �� "<< name <<" �� ������� �������" << endl;
	}
	else {
		cout <<"�����: "<< main<<" �� "<< name <<" ������� " << endl;
		/*��������� ������:
		text:����� ����� �����
		id:����� ��������������
		start:�����, � ��� �������� ����� ������� '='
		i:�������� ��� ����������� ����
		*/
		vector<string> library; 
		bool check;
		string text, id = "";
		int start =	0, i;
		
		//��������� ����� � �����, ���� �� �� �� ����������
		getline(Main, text, '\26');
		start = text.find('=', start);
		
		/*
		����� ������� '=' �� �������� ��������������
		���� ������ �� ��������, �� .find() ������� �������� -1
		*/
		while (start!=-1) {
			//��������, �� �� ��������� �� ��������� '=='
			if (text[start + 1] == '=') {
				start = text.find('=', start + 2);
			} 
			else {
				i = start;
				//���������� �� ����� ��������������
				while (text[--i] == ' ') {} 
				//���������� ��������������
				while (isalpha(text[i]) || isdigit(text[i] ) ) {
					id += text[i];
					i--;
				}
				//��������� �������������� ����� �������, ���� �� ���� ��������� ���� ���
				reverse(id.begin(), id.end());
				if (id!="") {
					check = true;
					for (int j = 0; j < library.size() ; j++) {
						if (library[j] == id) { check = false; };
					}
					if (check) {
						ID << id << '\n';
						library.push_back(id);
					}
					
				}
								
				id = "";
				start = text.find('=', start + 1);
			}
			
		}
		cout << " �����: " << main << " �� " << name << " ������� " << endl;
	}
	
	Main.close();
	ID.close();
}