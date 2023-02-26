#include <stdio.h>
#include <stdlib.h>

int calculo_idade_atual(int ano)
{
    int idade = 0;
    idade = 2023 - ano;
    return idade;
}
int main(){
    int ano, idade;
    ano = idade = 0;
    printf("Qual ano do seu nascimento? ");
    fflush(stdin);
    scanf("%d", &ano);
    idade= calculo_idade_atual(ano);
    printf("Você tem :%d anos ",idade);
    return 0;
}