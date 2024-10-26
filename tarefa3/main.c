#include <stdio.h>

int leitura(int a[5]){
    
    int soma = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &a[i]);
        soma += a[i];
    }

    return soma;
}





int main(int argc, char const *argv[])
{
    int vetor[5];

    printf("O resultado da soma do vetor é: %d\n", leitura(vetor));




    
    


    return 0;
}
