#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	float f;
	printf("Введите вещественное число\n");
	scanf_s("%f", &f);
	printf("Целая часть числа равна = %.0f\n", f);
	printf("Дробная часть числа равна = %f\n", f - (int)f);
}