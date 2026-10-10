#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double gr;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    double rad = gr * M_PI / 180.0;
    double result = sin(rad);

    printf("Результат: sin(%.0f градусов) = %.6f\n", gr, result);

    double x, y, F;
    double numerator, denominator;
 
    printf("Введите значение x:\n");
    scanf("%lf", &x);
    printf("Введите значение y:\n");
    scanf("%lf", &y);

    double num_exp = exp(x * x);
    double num_cos = cos(x - 4);
    numerator = num_exp + num_cos * num_cos;

    double denom_atan = atan(x);
    denominator = denom_atan + 5.2 * y;

    F = numerator / denominator;

    printf("x=%.6lf, F(x, y)=%.6lf\n", x, F);

    int C = (int)y;


    int cond_a = ((C % 2 == 0) == 1);
    int cond_b = (C % 3 == 0);

    printf("условие выполнено (1 - да, 0 - нет):\n");
    printf("а) С-чётное: %d\n", cond_a);
    printf("б) C кратно 3: %d\n", cond_b);

    double x, y, z, v;
	printf("Введите значения x, y, z");
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