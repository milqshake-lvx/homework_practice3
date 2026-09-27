#include <stdio.h>
#include <locale.h>

int main() {
	float I, U, R;
	setlocale(LC_CTYPE, ".UTF-8");

	printf("Подсчёт силы тока\nВведите значение напряжения U (В): ");
	scanf_s("%f", &U);

	printf("Введите значение сопротивления R (Ом): ");
	scanf_s("%f", &R);

	I = U / R;
	printf("Сила тока равна: %.3fА", I);

	return 0;
}