#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	float f;
	printf("������� ������������ �����\n");
	scanf_s("%f", &f);
	printf("����� ����� ����� ����� = %.0f\n", f);
	printf("������� ����� ����� ����� = %f\n", f - (int)f);
}