#include <iostream>
using namespace std;
int main()
{
    cout<<"Informe 10 numeros menores que 11:\n";
    int num, soma = 0;
    do{
        cout<<"Informe um numero: ";
        cin>>num;
        if (num % 2 == 1 && num <= 10)
            soma += num;
    }while (num <= 10);
    cout<<"\nA soma dos numeros impares informados e: "<<soma;
return 0;
}