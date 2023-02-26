#include <stdio.h>

//Compiler version g++ 6.3.0

int main()
{
  int Numero ;
  printf(" Informe um Numero:");
  scanf("%d", &Numero );
  if (Numero == 3)
    printf("Numero tres");
  else if (Numero == 8)
    printf(" Numero  oito");
  else
    printf(" Numero  desconhecido ");
 
  return 0;
   
}