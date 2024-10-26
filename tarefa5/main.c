#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    int *num1 = &a;
    int *num2 = &b;

    printf("Valores antes da modificação: a = %d e b = %d\n", a, b);

    *num1 = 30;
    *num2 = 40;

    printf("Valores depois da modificação: a = %d e b = %d\n", a, b);

    return 0;
}
