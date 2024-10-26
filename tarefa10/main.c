#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char idade[50];
    char altura[50];
} Pessoa;

int main(int argc, char const *argv[])
{
    Pessoa pessoa;

    printf("=== DADOS ===\n");

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Digite o idade: ");
    fgets(pessoa.idade, sizeof(pessoa.idade), stdin);
    pessoa.idade[strcspn(pessoa.idade, "\n")] = '\0';

    printf("Digite a altura: ");
    fgets(pessoa.altura, sizeof(pessoa.altura), stdin);
    pessoa.altura[strcspn(pessoa.altura, "\n")] = '\0';

    FILE *arquivo;

    arquivo = fopen("dados_2.txt", "w");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "%s\n", pessoa.nome);
    fprintf(arquivo, "%s\n", pessoa.idade);
    fprintf(arquivo, "%s\n", pessoa.altura);

    fclose(arquivo);

    char linhas[256];

    arquivo = fopen("dados_2.txt", "r");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("=== DADOS ===\n");
    while (fgets(linhas, sizeof(linhas), arquivo)){
        printf("%s", linhas);
    }

    fclose(arquivo);
    
    return 0;
}
