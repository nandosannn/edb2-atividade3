#include <stdio.h>
#include <string.h>

typedef struct {
    int altura;
    int largura;
} Retangulo;

int areaRetangulo(Retangulo *x){
    int area = x->altura*x->largura;
    return area;
}
int main(int argc, char const *argv[])
{   
    Retangulo *retangulo;

    retangulo->altura = 10;
    retangulo->largura = 20;

    printf("Altura do retangulo: %d. A largura do retangulo: %d\n", retangulo->altura, retangulo->largura);
    printf("A area do retangulo é: %d\n", areaRetangulo(retangulo));



    return 0;
}
