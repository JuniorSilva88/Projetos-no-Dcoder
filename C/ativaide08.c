#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	printf("Digite seu 1º Nome: ");
    char nome[15];
    scanf("%15s", &nome);
    printf("Digite seu sobrenome: ");
	char sobrenome[15];
	scanf("%15s", &sobrenome);
    strcat(nome, sobrenome);
    char *s = nome;
	while (*s) 
    {
		*s = toupper((unsigned char) *s);
		s++;
	}
    printf("%s", nome);
return 0;
}
