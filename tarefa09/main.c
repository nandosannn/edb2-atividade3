#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    FILE *arquivo;
    char linha[256];

    arquivo = fopen("dados_1.txt", "r");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    printf("==== DADOS ====\n");
    while (fgets(linha, sizeof(linha), arquivo))
    {
        printf("%s", linha);
    }

    printf("\n");
    
    
    return 0;
}
