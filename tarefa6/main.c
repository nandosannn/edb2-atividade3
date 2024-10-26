#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma = 0;
    int *a;

    for (int i = 0; i < 5; i++)
    {
        a = (int*) malloc(sizeof(int));
        scanf("%d", &a[i]);
        soma += a[i];
    }

    printf("O resultado da soma é %d\n", soma);

    free(a);
    
    return 0;
}
