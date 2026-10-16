#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
double calculate_homework(double x, double y, double z)
{
	double num1 = 1.0 + pow(sin(x + y), 2);      
	double den1 = fabs(x - (2.0 * y) / (1.0 + pow(x, 2) * pow(y, 2)));
	double fraction = num1 / den1;

	double power = pow(x, fabs(y));

	double cos_ = pow(cos(atan(1.0 / z)), 2);

	return fraction * power + cos_;

}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("=== Домашнее задание ===\n");
	double x, y, z;
	printf("Введите значение x: ");
	scanf("%lf", &x);
	printf("Введите значение y: ");
	scanf("%lf", &y);
	printf("Введите значение z: ");
	scanf("%lf", &z);
	double result = calculate_homework(x, y, z);
	printf("\nВведенные значения: x = %.4lf, y = %.4lf, z = %.4lf\n", x, y, z);
	printf("Результат вычисления: %.6lf\n", result);
	return 0;
}
