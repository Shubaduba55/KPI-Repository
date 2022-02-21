#include <iostream>
#include <string>
#include <Windows.h>
#include <locale>

using namespace std;

string CreateLine();//����� � ����������� �������
int SplitWords(string*, char*);//��������� ������� �� ����� �� ���������� ������������ ������
void Sort(string*, int);//���������� ������ ��� � ���������� �������
void CoutArray(string*, int);//��������� ������

int main() {
	//ϳ�������� ��������� ������������ ��������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string line;
	string A[100];
	line = CreateLine();

	cout << "\n\nYour sentence is: " << line << endl;

	int sizeA = SplitWords(A, &line[0]);
	Sort(A, sizeA);

	cout << "\n\nSorted sentence is: ";
	CoutArray(A, sizeA);
}

string CreateLine() {
	string line;
	cout << "Enter some words: ";
	getline(cin, line);

	return line;
}



int SplitWords(string* A, char* ptr) {
	string word = "";
	int counter = 0;
	for (int i = 0; (ptr[i] != '\0'); ++i) {
		if (ptr[i] != ' ') word += ptr[i];

		if (ptr[i] == ' ' || (ptr[i + 1] == '\0')) {
			A[counter] = word;
			counter++;
			word = "";
		}
	}

	return counter;
}

void Sort(string* A, int sizeA) {
	//������������ ���������� ������
	bool Bool;
	for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeA - 1; j++) {
			Bool = true;
			for (int k = 0; A[j][k] != '\0' && A[j + 1][k] != '\0' && Bool; k++) {//����� ���� ��� ������� �� �������� �����

				if (A[j][k] > A[j + 1][k]) {//�������� �����, �� ����������� ������ ��������� ����� � ������, �� ��������� �����
					string tmp = A[j + 1];
					A[j + 1] = A[j];
					A[j] = tmp;
					Bool = false;
				}

				if (A[j][k] < A[j + 1][k]) {
					Bool = false;
				}

				if (A[j][k] == A[j + 1][k] && (A[j + 1][k + 1] == '\0')) {//��������� ����� ��� ���������� ���������� ����� �� ���� ���������
					string tmp = A[j + 1];
					A[j + 1] = A[j];
					A[j] = tmp;
					Bool = false;
				}


			}
		}
	}
}
void CoutArray(string* A, int sizeA) {
	for (int k = 0; k < sizeA; k++) {
		cout << A[k] << " ";
	}
	cout << "\n\n";
}
