#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int count;
    char sym, sym1, sym2;

    
    printf("Введите количество символов: ");
    scanf("%d", &count);

    printf("Введите основной символ: ");
    scanf(" %c", &sym);

    printf("Введите первый символ для половины строки: ");
    scanf(" %c", &sym1);

    printf("Введите второй символ для половины строки: ");
    scanf(" %c", &sym2);

   
    printf("\n*) Плюсы в начале и в конце:\n");
    putchar('+');
    for (int i = 1; i <= count; i++)
        putchar(sym);
    putchar('+');
    putchar('\n');

   
    printf("\n**) Половина '%c', половина '%c':\n", sym1, sym2);
    int half = count / 2;
    for (int i = 0; i < half; i++)
        putchar(sym1);
    for (int i = 0; i < count - half; i++)   
        putchar(sym2);
    putchar('\n');

  
    printf("\n***) После каждого '%c' — '!':\n", sym);
    for (int i = 1; i <= count; i++) {
        putchar(sym);
        putchar('!');
    }
    putchar('\n');

    return 0;

}
