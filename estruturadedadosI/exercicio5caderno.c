
#include <stdio.h>
#include <stdlib.h>
int main()
int funcao(int vet[],int n,int k)
{
    
}

{
    int n,m,i;
    float vet[i],k;
    printf("digite um valor para n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("digite valores para o vetor:");
        scanf("%d",&vet[i]);
    }
    printf("digite um número a ser procurado no vetor:");
    scanf("%f",&k);
    m=funcao(vet,n,k);
    printf("posição do número no vetor:%d",m);
    return 0;
}