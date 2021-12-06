#include <iostream>
#include <ctime>
using namespace std;

void CreateArray(int, double*);
int FindMin(double*, int);

void SortBubble(double*, int);
void CoutArr(double*, int);

int main()
{
	int num;
	double minelem;
	
	srand(time(NULL));
	
	cout << "Enter the quantity of numbers: ";
	cin >> num;

	double* arrB = new double[num];
	
	CreateArray(num, arrB);
	CoutArr(arrB, num);
	int minid=FindMin(arrB, num);
	
	SortBubble(arrB, minid+1);
	CoutArr(arrB, num);
	
	delete[] arrB;
	return 0;
}

int FindMin(double* arrB, int num)
{
	int minid=0;
	double minelem=arrB[0];
	for (int i = 0; i < num; i++) 
	{
		if (fabs(minelem) >= fabs(arrB[i]))
		{
			minid = i;
			minelem = arrB[i];
		}
	}
	
	cout << "\n\t\tMinimum element is " << minelem << " and it's id is: " << minid;
	return minid;
}

void CreateArray(int num, double* arrB)
{
	for (int i=0; i < num; i++) 
	{
		arrB[i]= (double(rand()%2000) - 1000)/10.0;
	}
	return;
}

void SortBubble(double* ptrArr, int n) {
	double tmp;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n-1; i++) {

			if (*(ptrArr + i) < *(ptrArr + (i + 1))) {
				tmp = *(ptrArr + (i + 1));
				*(ptrArr + (i + 1)) = *(ptrArr + i);
				*(ptrArr + i) = tmp;
			}
		}
	}
	return;
}

void CoutArr(double* ptrArr, int n) {
	
	cout << "\n\n"<<"Array: "<< "[";
	
	for (int i = 0; i < n; i++) {
		cout << *(ptrArr + i) << (i==n-1 ? "" : ", ");
	}
	
	cout << "]" << endl;
	return;
}