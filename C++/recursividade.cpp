#include <stdio.h>
#include <stdlib.h>
int antes_num(int n, int fim)
{
   n = n - 1;
   printf("\n%5d",n);
   if(n <= fim)
       return 1;
   else
       n = antes_num(n,fim);
}
int main()
{
   int n, fim;
   n = fim = 0;
   do
   {
       printf("\n Informe um Número: ");
       fflush(stdin);
       scanf("%d", &n);
   }while(n < 0);
   fim = n - 7;
   printf("\n Os números recursívos são:");
   antes_num(n,fim);
   return 0;
}