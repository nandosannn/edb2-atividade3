#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(int argc, char const *argv[])
{
    int a, b;

    a = 10;
    b = 20;

    printf("Variavel a = %d e variavel b = %d\n", a, b);

    troca(&a, &b);

    printf("Variavel a = %d e variavel b = %d\n", a, b);


    return 0;
}
