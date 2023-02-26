#include <stdio.h>
#include <ctype.h>
int main ()
{
   FILE *p;
   char letra;
   p = fopen("teste.txt","r");
   do
   {
       letra = getc(p);
       if (letra != 'EOF')
           printf("%c", toupper(letra));
   }while (letra != EOF);
   return 0;
}