#include <cstdio>
int main()
{
    int num , i;
    printf (" informe o numero:");
    scanf ("%d", &num);
    for (i = 1; i <= 10; i ++)
      printf( "%d \n", num * i);
      
    return 0;
}