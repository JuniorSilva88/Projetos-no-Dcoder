#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("CALCULO HOLERIT PROFFESSOR(A)\n");
        float horaula,qntaulas,inss,salario,desconto;
    printf("\nInforme o valor da hora aula: ");
    scanf("%f",&horaula);
    printf("\nQual a quantidade de aulas dadas: ");
    scanf("%f",&qntaulas);
    printf("\nQual o percentual de desconto do INSS = [8, 9 ou 11]%: ");
    scanf("%f",&inss);
    salario = horaula* qntaulas;
    desconto = salario* inss /100;
    printf("\nSalario liquido e: %3.2f\n",salario - desconto);
 return 0; }
