#include <iostream>
#define _USE_MATH_DEFINES //Для константи M_PI
#include <math.h>
using namespace std;

double deg_to_rad(double angle); //Функція, що переводить градуси в радіани

void max_triangle(int n, int number, double max_square = 0, int index = 0);//Функція для обрахунку площі заданих трикутників та пошуку найбільшої серед них

int main() {
	int n;
	//Запитуємо в користувача кількість трикутників
	cout << "Enter number of triangles" << endl;
	cin >> n;
	//Викликаємо функцію для пошуку найбільшої площі трикутника
	max_triangle(n, n);
	return 0;
}

double deg_to_rad(double angle)
{
	return angle = angle * (M_PI / 180);
}

void max_triangle(int n, int number, double max_square, int index )
{
	double side_a, side_b, angle;
	if (n == 0)
	{
		cout << "triangle with the number " << number + 1 - index << " has the biggest square and it is equal to: " << max_square;
		return;
	}
	//Запитуємо довжини сторін трикутника та значення кута між ними
	cout << "Enter side_a" << endl;
	cin >> side_a;
	cout << "Enter side_b" << endl;
	cin >> side_b;
	cout << "Enter angle" << endl;
	cin >> angle;
	//обчислюємо площу трикутника
	double square = 0.5 * side_a * side_b * sin(deg_to_rad(angle));
	//Перевіряємо, чи поточна максимальна площа менша за площу тільки-но знайденого трикунтика
	if (square > max_square)
	{
		max_square = square;
		index = n;
	}
	//Викликаємо цю ж функцію, в яку записуємо нові дані
	max_triangle(n - 1, number, max_square, index);
}