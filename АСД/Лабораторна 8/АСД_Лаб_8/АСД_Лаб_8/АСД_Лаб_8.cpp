#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void CreateArrayOneDimensional(double[5][7], double*);
void CreateArrayTwoDimensional(double[5][7]);
void CoutArrayTwoDimensional(double[5][7]);
void CoutArrayOneDimensional(double*);
void SortBubble(double *);

int main() {

	srand(time(NULL));
	double C[7];
	double A[5][7];
	CreateArrayTwoDimensional(A);
	CoutArrayTwoDimensional(A);

	CreateArrayOneDimensional(A, C);
	cout << "\tOne-Dimensional Array before sorting:\n\n ";
	CoutArrayOneDimensional(C);
	SortBubble(C);
	cout << "\tOne-Dimensional Array after sorting:\n\n ";
	CoutArrayOneDimensional(C);
	return 0;
}


void SortBubble(double* C) {
	double tmp;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++)
			if(C[j]<C[j+1]){
				tmp = C[j+1];
				C[j+1] = C[j];
				C[j] = tmp;
			}
		
	}
	return;
}

void CoutArrayOneDimensional(double* A) {
	cout << "[";
	for (int i = 0; i < 7; i++) {
		cout << setw(4) << A[i] << ((i == 6) ? "]\n\n" : "\t");
	}
	return;
}

void CreateArrayOneDimensional(double A[5][7], double* C) {
	double sum;
	int count;
	
	for (int i = 0; i < 7; i++) {
		count = 0;
		sum = 0;
		for (int j = 0; j < 5; j++) 
		{
			
			if (A[j][i] > 0) {
				sum += A[j][i];
				count++;
			}
		}
		(count!=0) ? (C[i] = sum / float(count)) : (C[i]=0);
		
	}
	return;
}

void CoutArrayTwoDimensional(double A[5][7]) {
	cout << "\t\tTwo-dimensional Array 5x7:\n" << endl;

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 7; i++) {
			
			cout << setw(4) << A[j][i] << ((i == 6) ? "\n\n" : "\t");
		}
	}
	
	return;
}


void CreateArrayTwoDimensional(double A[5][7]) {
	
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 7; i++) {
			A[j][i] = (double(rand() % 2000) - 1000) / 10.0;
			
		}
	}
	return;
}