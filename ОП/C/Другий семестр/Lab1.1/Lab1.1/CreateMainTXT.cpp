#include "CreateMainTXT.h"

void CreateMainTXT() {
	
	ofstream outmain;
	outmain.open("Main.txt");
	if (!outmain.is_open()) {
		cout << "������� �������� �����"<< endl;
	}
	else {
		cout << "__________���� �������__________" << endl;
		RegisterHotKey(NULL, 1, MOD_CONTROL, 0x0D);
		MSG msg = {};
		string line;
		while (!PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
			cout << "������ ����� � �����: ";
			getline(cin, line);
			outmain << line << "\n";
		}
		
		
		cout << "���������� ����, Ctrl+Enter ��������\n __________���� �������__________" << endl;
		
		UnregisterHotKey(NULL, 1);
		
	}
	outmain.close();
}