#include <iostream>
#include<ctime>
#include <iomanip>
using namespace std;
float** CreateArray(int);//��������� ����������� ������
void FindPoint(float**, int);//����� ������ �����
void CoutArray(float**, int);//��������� ������

int main() {
	int n;
	srand(time(NULL));
	//��������� ��������� ������
	cout << "Enter the size of two dimensional array: ";
	cin >> n;
	cout << "\n";
	//�������� �� ������ ������� ������
	float** ptrA;
	
	ptrA = CreateArray(n);//��������� ������ ������ n x n �� �������� ��������� ������ �� ������ ���� �������
	CoutArray(ptrA, n);//��������� ������
	FindPoint(ptrA, n);//����� ����� �����
	
	delete[] ptrA;//��������� ���'�� ������ ��������� ���������� ������
	return 0;
}

float** CreateArray(int n) {
	float** A= new float* [n];//����������� ����� ���������

	for (int i=0; i < n; i++) {
		A[i] = new float[n];//��������� ������ ��������, � ���������� �� ���� ������� �������� ��������� ���������� ����������� ������ �
	}

	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			A[i][j] =float( rand()%2000-1000)/10;//���������� ����������� ������ ������������������ ����������
		}
	}
	return A;
}



void CoutArray(float** A, int n) {//��������� ������ �����������
	cout << "\tTwo dimensional Array:\n\n";
	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			cout << setw(7) << A[i][j];
		}
		cout << "\n\n\n";
	}
	cout << "\n\n";
}

void FindPoint(float** A, int n) {
	bool Bool;
	float min;
	int id;
	for (int i = 0; i < n; i++) {
		min = A[i][0];
		id = 0;
		Bool = true;
		//����� ���������� �������� ����� ������
		for (int j = 1; j < n; j++) {
			if (min > A[i][j]) {
				min = A[i][j];
				id = j;
			}
		}
		
		//��������, �� � ��� ��������� ������� ����� ������������ ��������� ��������� ��������
		for ( int k=0; k < n && Bool; k++) {
			if (min <= A[k][id] && k!=i) {
				Bool = false;
			}
			
		}
		if (Bool)
			cout << "The point is number " << setw(4) << min << " and it's id: [" << i << "] [" << id << "]" << endl;
		else cout << "No such points in a row " << i << endl;
	
	}
}