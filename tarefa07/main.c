#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main(int argc, char const *argv[])
{   
    Pessoa pessoa;

    printf("Qual o nome da pessoa? ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Qual a idade da pessoa? ");
    scanf("%d", &pessoa.idade);

    printf("Qual a altura da pessoa? ");
    scanf("%f", &pessoa.altura);

    printf("==== DADOS DA PESSOA ====\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);
    
    return 0;
}
