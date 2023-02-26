#include <cstdio> 
int main()
{
    int num;
    printf(" Informe um Numero ");
    scanf("%d", &num);
    switch(num);
    {
      case 3:
        printf(" Numero tres");
        break;
      case 8:
        printf(" Numero oito");
        break;
     default:
     printf(" Numero desconhecido ");
    }
    return 0;
}
