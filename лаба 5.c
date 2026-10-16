#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <locale.h>

double calculate_sin(double grad)
{
    double rad = grad * M_PI / 180.0;
    return sin(rad);
}
double calculate_F(double x, double y)
{
    double numerator = exp(x * x) + pow(cos(x - 4), 2);
    double denominator = atan(x) + 5.2 * y;
    return numerator / denominator;
}
int check_conditions(double y)
{
    int C = (int)y;
    int cond_a = ((C % 2 == 0) == 1);
    int cond_b = (C % 3 == 0);
    printf("условие выполнено (1 - да, 0 - нет):\n");
    printf("а) С-чётное: %d\n", cond_a);
    printf("б) C кратно 3: %d\n", cond_b);
    return (cond_a && cond_b) ? 1 : 0;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("=== Задание 1 ===\n");
    double grad ;
    printf("Введите угол в градусах: ");
    scanf("%lf", &grad);
	double sin_result = calculate_sin(grad);
    printf("Результат: sin(%.6f градусов) = %.6f\n", grad, sin_result);

	printf("\n=== Задание 2 ===\n");
    double x, y;
    printf("Введите значение x: \n");
    scanf("%lf", &x);
    printf("Введите значение y: \n");
    scanf("%lf", &y);

	double F = calculate_F(x, y);
	printf("x = %.6lf, F(x, y) = %.6lf\n", x, F);

	printf("\n=== Задание 3 ===\n");

	int condition_result = check_conditions(y);
	printf("Результат проверки условий: %d\n", condition_result);
    return 0;
}
