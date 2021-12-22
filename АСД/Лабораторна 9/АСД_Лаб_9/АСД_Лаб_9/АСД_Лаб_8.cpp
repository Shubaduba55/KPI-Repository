#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

float** CreateArray(int&, int&);
void CoutArray(float** ,int, int);
float SnakeChase(float**, int, int);
void DeleteArray(float**, int, int);
float AvgDiagonal(float**, int, int);
void Check(float, float);

int main(){
	
	int n, m;
	srand(time(NULL));
	float** A;
	A=CreateArray(n, m);
	CoutArray(A, n, m);
	float min=SnakeChase(A, n, m);
	float avg = AvgDiagonal(A, n, m);
	Check(min, avg);

	DeleteArray(A, n, m);
}

float** CreateArray(int &n, int &m) {

	cout << "Enter number of rows: ";
	cin >> n;
	float** A = new float* [n];

	cout << "\nEnter number of columns: ";
	cin >> m;
	
	for (int i=0; i < n; i++) {
		*(A+i) = new float [m];
		for (int j=0; j < m; j++) {
			A[i][j] = double(rand()%1000)/10.;
		}
	}
	return A;
}

void DeleteArray(float** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		delete A[i];
	}
	delete[] A;
}

void CoutArray(float** A, int n, int m) {
	cout << "\t\tTwo dimensional array [" << n << "x" << m << "]\n\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(8) << A[i][j];
		}
		cout << "\n\n";
	}
}

float SnakeChase(float** A, int n, int m) {
	float min=A[0][0], row=0, col=0;
	for (int i = 0, j=0; i < n; i++) {
		
		while (j < m && i%2==0) {
			
			if (min >= A[i][j]) {
				
				min = A[i][j];
				row = i;
				col = j;
			}
			++j;
		}
		while (j!=0 && i%2!=0) {
			--j;
			if (min >= A[i][j]) {

				min = A[i][j];
				row = i;
				col = j;
			}
				
		}
		
	}
	cout << "Last minimal element of the matrix is " << min << " and it's id is [" << row << "][" << col << "]" << endl;
	return min;
}

float AvgDiagonal(float** A, int n, int m) {
	if (n != m || n==1) {
		cout << "The matrix is not square or it's size is [1x1]" << endl;
		return 0;
	}
	else {
		float avg=0;
		for (int i = 1; i < n; i++) {
			avg += A[i][m-i];
		}
		cout << "Average Diagonal number: " << avg / (m - 1) << endl;
		return avg/(m-1);
	}
}

void Check(float min, float avg) {
	cout << "\n\n";
	if (min > avg) {
		cout << "Minimal element is bigger than average" << endl;
	}
	else if (avg > min) {
		cout << "Average element is bigger than minimal" << endl;
	}
	
	else {
		cout << "Average and minimal element are equal" << endl;
	}
}
