#include <stdio.h>
int somar(int b[3][3]){
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                soma += b[i][j];
            }
            
        }
        
    }

    return soma;
    
}

int leitura(int a[3][3]){
    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor %d x %d da matriz: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }


    return somar(a);
}




int main(int argc, char const *argv[])
{
    int vetor[3][3];

    printf("O resultado da soma do diagonal principal é: %d\n", leitura(vetor));

    return 0;
}
