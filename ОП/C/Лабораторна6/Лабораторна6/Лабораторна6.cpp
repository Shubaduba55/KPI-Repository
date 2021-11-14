#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double deg_to_rad(double angle);
void max_triangle(int n, int number, double max_square = 0, int index = 0);

int main() {
	int n;
	cout << "Enter number of triangles" << endl;
	cin >> n;
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
	cout << "Enter side_a" << endl;
	cin >> side_a;
	cout << "Enter side_b" << endl;
	cin >> side_b;
	cout << "Enter angle" << endl;
	cin >> angle;
	double square = 0.5 * side_a * side_b * sin(deg_to_rad(angle));

	if (square > max_square)
	{
		max_square = square;
		index = n;
	}
	max_triangle(n - 1, number, max_square, index);
}