
#include <stdio.h>
#include <stdlib.h>

//Função para o cálculo da sequência de fibonacci, usando o método da recursividade.
int fib(int n) //ordem.
{
    if(n<=2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}



int main()
{
    int n,k;
    printf("digite um valor para calculara sequência de fibonacci:");
    scanf("%d",&n);
    k=fib(int n);
    printf("a sequência de fibonacci do número %d vale %d",n,k);
    return 0;
}