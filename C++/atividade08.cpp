#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Digite a primeira palavra: ");
	char pala[15];
	scanf("%15s", &pala);
	printf("Digite a segunda palavra: ");
	char vra[15];
	scanf("%15s", &vra);
	
	strcat(pala, vra);
	
	
	char *s = pala;
	while (*s) {
		*s = toupper((unsigned char) *s);
		s++;
	}
	
	printf("%s", pala);
	
 	return 0;
}
