#include <cstdio>
int main()
{
  int x, y, restdiv, potencia, subt, div1, div2;
  printf("Informe um numero: ");
    scanf("%d", & x);
  printf("Informe outro numero: ");
    scanf("%d", & y);
  restdiv = x % y;potencia = x * x ;subt = potencia - y; div1 = y / 2; div2 = x / 3; 
    printf("O restdiv é: %d\nO Quadrado de X é: %d,\nO Quadrado de X é: %d\nA subtracao entre Y e o quadrado de X é: %d"
    "\nY Dividido por 2 = %d\nE x Dividido por 3 = %d",restdiv, potencia, subt, div1, div2);
    
    return 0;
}