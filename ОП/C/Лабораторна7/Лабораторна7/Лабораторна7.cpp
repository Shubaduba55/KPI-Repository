#include <iostream>
#include <ctime>
using namespace std;
//Прототипи функційй
void CreateArray(int, double*);
int FindMin(double*, int);

void SortBubble(double*, int);
void CoutArr(double*, int);

int main()
{
	//ініціалізуємо змінні для зебреження мінімального елемента та розміру масиву
	int num;
	double minelem;
	
	srand(time(NULL));
	//Запит розміру масиву у користувача
	cout << "Enter the quantity of numbers: ";
	cin >> num;

	double* arrB = new double[num];//Створення динамічного масиву
	
	CreateArray(num, arrB);//Наповнення масиву випадковими елементами
	CoutArr(arrB, num);//Виведення масиву користувачу
	int minid=FindMin(arrB, num);//Пошук мінімального елемента за модулем у масиві
	
	SortBubble(arrB, minid+1);//Сортування масиву від початку до певного елемента масиву методом бульбашки
	CoutArr(arrB, num);//Виведення масиву користувачу
	
	delete[] arrB;//видалення динамічного масиву для звільнення пам'яті
	return 0;
}

int FindMin(double* arrB, int num)
{
	//Ініціалізуємо та записуємо в мінімальний елемент перший елемент масиву
	int minid=0;
	double minelem=arrB[0];
	
	for (int i = 0; i < num; i++) 
	{
			

		if (minelem >= arrB[i] && arrB[i]<0)//Порівнємо значення елементів масиву за модулем
		{
			//Запам'ятовуємо номер та значення мінімального елементу
			
			minid = i;
			minelem = arrB[i];
		}
				
		
	}

	if (minelem>=0) {
		cout << "\n\t\tNegative element doesn't exist";
		
		minid = 0;
	}
	else {
		cout << "\n\t\tMinimal element is " << minelem << " and it's id is: " << minid;//Виводмо ці значення
	}
	return minid;//Повертаємо номер мінімального елементу
}

void CreateArray(int num, double* arrB)
{
	for (int i=0; i < num; i++) 
	{
		arrB[i]= (double(rand()%2000) - 1000)/10.0;//Заповнюємо масив значеннями від -100 до 100
	}
	return;
}

void SortBubble(double* ptrArr, int n) {
	double tmp;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n-1; i++) {

			if (*(ptrArr + i) < *(ptrArr + (i + 1))) {
				//Якщо поточний елемент менший наступного, то ми міняємо їх місцями через третю змінну tmp
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
		cout << *(ptrArr + i) << (i==n-1 ? "" : ", ");//Виведення усіх елементів масиву
	}
	
	cout << "]" << endl;
	return;
}