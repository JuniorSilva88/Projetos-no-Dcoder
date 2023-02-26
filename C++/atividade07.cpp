#include <iostream>
using namespace std;

int main()
{
    int vetor[10] = {3,6,9,12,15,18,21,24,27,30};
    int contador = 0, soma = 0;
    for(int a = 0; a < 10; a++)
    
    {
      if(vetor[a]%2 == 0)
      {
        soma = soma + vetor[a];
        contador++;
        }
  }
  cout<<" A media dos numeros pares,"
 " contidos dentro do vetor\n"
  " (3,6,9,12,15,18,21,24,27,30):\n MEDIA》》》 "
  <<soma/contador;
return 0;
}