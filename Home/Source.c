#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "Russian");

    double product = 1.0; 
    for (int i = 1; i <= 100; i++) {
        double x = i * 0.1;              
        double term = 1.0 + sin(x);     

        product *= term;               
    }


    printf("Значение произведения: %g\n", product);

    return 0;
}