#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, "Russian");
    
    int N;

    printf("¬ведите n (верхнюю степень): ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("ќшибка: нужно целое N >= 0\n");
        return 1;
    }

    unsigned long long p = 1;   
    for (int i = 0; i <= N; i++) {
        printf("2^%d = %llu\n", i, p);
        p *= 2;                 
    }

    return 0;
}