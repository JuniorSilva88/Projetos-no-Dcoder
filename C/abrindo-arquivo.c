#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * file;
    char nomearquivo[25] = "StructConsulta.txt";
    char tipoacesso[25] = "w";
    char cursor[25];
    int i;
        if ((file = fopen (nomearquivo,tipoacesso))==NULL)
        {
            printf("Erro, NÃO É POSSÍVEL ABRIR O ARQUIVO.");
            return 1;
        }
        else{
            for(i = 0; i < 4; i ++){
              printf("NOME PACIENTE: ");
              fgets(cursor,25,stdin);
              fputs(cursor, file);
                
              printf("FORMA DE PAGAMENTO: ");
              fgets(cursor,25,stdin);
              fputs(cursor, file);
                
              printf("VALOR CONSULTA: ");
              fgets(cursor,25,stdin);
              fputs(cursor, file);
                
              printf("MÉDICO: ");
              fgets(cursor,25,stdin);
              fputs(cursor, file);
            }
        }
        fclose(file);
    
    printf("Dados salvos! ");
        return 0 ;
}