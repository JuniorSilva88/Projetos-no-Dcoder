#include <stdio.h>

int main()
{
    int soma =0, valor = 0;
    do {
        
        printf("\n Digite um valor diferente de 0: ");
        scanf ("%i", valor);
        if (valor % 2 == 0){
            soma += valor;               
        }
    }while(valor !=0 );
    printf("\n A soma dos valores e: %d", soma);
    return 0;
}