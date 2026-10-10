#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x, y, z, v;
	printf("Введите значения x, y, z\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	double num1 = 1.0 + pow(sin(x + y), 2);      
	double den1 = fabs(x - (2.0 * y) / (1.0 + pow(x, 2) * pow(y, 2)));
	double fraction = num1 / den1;

	double power = pow(x, fabs(y));

	double cos_ = pow(cos(atan(1.0 / z)), 2);

	v = fraction * power + cos_;

	printf("\nРезультат :\n");
	printf("x = %.4lf, y = %.4lf, z = %.4lf\n", x, y, z);
	printf("Результат: v = %.6lf\n", v);

	return 0;
}

