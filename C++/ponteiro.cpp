#include <stdio.h>
int main()
{
   int *ponteiro_1,*ponteiro_2,
    *ponteiro_3,*ponteiro_4,
    valor1,valor2,valor3,valor4,sm;
   float rs; 

   printf("Digite o 1º número: ");
   scanf("%d", &valor1);
   printf("Digite o 2º número: ");
   scanf("%d", &valor2);
   printf("Digite o 3º número: ");
   scanf("%d", &valor3);
   printf("Digite o 4º número: ");
   scanf("%d", &valor4);
       
   ponteiro_1=&valor1;
   ponteiro_2=&valor2;
   ponteiro_3=&valor3;
   ponteiro_4=&valor4;
  
sm = (*ponteiro_1+*ponteiro_2+*ponteiro_3+*ponteiro_4);
rs = (sm/4);
     printf("Media dos 4 números %.2f",rs);
      return 0;
}