#include <iostream>
#include<ctime>
#include <iomanip>
using namespace std;
float** CreateArray(int);//Створення двовимірного масиву
void FindPoint(float**, int);//Пошук сідлової точки
void CoutArray(float**, int);//Виведення масиву

int main() {
	int n;
	srand(time(NULL));
	//Отримання розмірності масиву
	cout << "Enter the size of two dimensional array: ";
	cin >> n;
	cout << "\n";
	//Покажчик на перший елемент масиву
	float** ptrA;
	
	ptrA = CreateArray(n);//Створення масиву розміру n x n та передача покажчику адресу на перший його елемент
	CoutArray(ptrA, n);//Виведення масиву
	FindPoint(ptrA, n);//пошук сідлвої точки
	
	delete[] ptrA;//Звільнення пам'яті шляхом видалення динамічного масиву
	return 0;
}

float** CreateArray(int n) {
	float** A= new float* [n];//Одновимірний масив покажчиків

	for (int i=0; i < n; i++) {
		A[i] = new float[n];//Одновимірні масиви елементів, у відповідність до яких ставимо елементи покажчики попередньо створенного масиву А
	}

	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			A[i][j] =float( rand()%2000-1000)/10;//наповнення двовимірного масиву псевдовипадковоими елементами
		}
	}
	return A;
}



void CoutArray(float** A, int n) {//виведення масиву користувачу
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
		//пошук мінімального елемента рядка масиву
		for (int j = 1; j < n; j++) {
			if (min > A[i][j]) {
				min = A[i][j];
				id = j;
			}
		}
		
		//перевірка, чи є цей мінімальний елемент рядка максимальним елементом стовпчика відповідно
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