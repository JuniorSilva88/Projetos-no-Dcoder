#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct consulta
{
    char nome[25] ;
    char pagamento [25] ;
    int valor ;
    char medico[25] ;
    
};
int main()
{
    consulta end_1 ;
    printf("Digite seu nome: ") ;
    fgets(end_1.nome,25,stdin) ;
    printf("Qual forma de pagamento? ") ;
    fgets(end_1.pagamento,25,stdin) ;
    printf("Qual valor da cosulta? ") ;
    scanf("%d", &end_1.valor) ;
    printf("Qual nome do medico? ") ;
    fgets(end_1.medico,25,stdin) ;
        return 0 ;
}