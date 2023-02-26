#include <stdio.h>
#include <string.h>
#define NOME "Carlos"
#define CODIGO "2341"
int main(){
    char nome[20], codigo[20];
  int validado = 0;
  do{
    printf("- Digite o nome :\n");
    scanf("%s", nome);
    printf("- Digite o codigo:\n");
    scanf("%s", codigo);
  if (strcmp(nome, NOME) || strcmp(codigo, CODIGO)){
    printf("Dados Incorretos!!! \n\nTente Novamente\n\n");
  }
  else{
    printf("\nDados Corretos!\n");
    validado = 1;    
  }
} while(!validado);
    printf("FIM DO PROGRAMA!\n");
   return 0;
}