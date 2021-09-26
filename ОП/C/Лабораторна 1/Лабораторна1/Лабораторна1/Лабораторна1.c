#include <stdio.h> 
#include <math.h>



int main(int argc, char* argv[])
{
	float a; //ініціюємо змінну а(довжина ребра)
	printf("Enter cube's rib\n");//Пишемо текст для користувача
	scanf_s("%f", &a);//Просимо користувача ввести значення а
	float V = (pow(a, 3));//Обчислюємо значення об'єму для куба
	float S_side = 4 * (pow(a, 2));//обчислюємо значення площі бічної поверхні куба
	printf("The V of cube is%f%s", V, "\n");//Виводимо значення об'єму куба
	printf("The S_side of cube is%f ", S_side);//Виводимо значення площі бічної поверхні куба
	return 0;
}