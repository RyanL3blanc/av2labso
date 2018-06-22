
/* Faça um programa que leia um valor para a variável N(entre 0 e 10),
   calcule e mostre o resultado da seguinte expressão:
   
   (somatório) (n+1)^4/i!
   
   OBS.: Não é necessário verificar se o usuário entrou corretamente com
         o valor de n.
         Crie uma função para calcular o fatorial. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float fat(float n)
{
    int j;
    float f=1.0;
    for(j=1;j<=n;j++)
    {
        f=f*(float)j;
    }
    return f;
}

int main()
{
    float N, ifat, i=0, soma=0;
    printf("entre com o valor de N(entre 0 e 10):");
    scanf("%f",&N);
    while(i<=N)
    {
        ifat=fat(i);
        soma=soma + (pow(N+1,4)/ifat);
        i=i+1;
    }
    printf("valor do somatório:%f",soma);
    return 0;
}