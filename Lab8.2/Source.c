#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "Russian");

    double x_start = 0.1;   
    double x_end = 2.5;     
    double h;               

    
    printf("Табулирование функции: y = x^2 + 2*pi*cos(pi*x)\n");
    printf("Диапазон изменения x: [%.1f; %.1f]\n\n", x_start, x_end);

   
    printf("Введите шаг табуляции (h): ");
    if (scanf("%lf", &h) != 1 || h <= 0) {
        printf("Ошибка: шаг должен быть положительным числом.\n");
        return 1;
    }

    printf("\n-----------------------\n");
    printf("|    x    |   f(x)    |\n");
    printf("-----------------------\n");


    for (double x = x_start; x <= x_end + 1e-9; x += h) {
      
        double y = x * x + 2.0 * M_PI * cos(M_PI * x);

    
        printf("| %7.3lf | %9.4lf |\n", x, y);
    }

  
    printf("-----------------------\n");

    return 0;
}