
#include <stdio.h>
#include <stdlib.h>
int funcao(int V[],int g)
{
    if(g==0)
    {
        return 0;
    }
    return V[g-1] + funcao(V,g-1);
}

int main()
{
    int N,V[N],k,i;
    printf("digite um valor para N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("digite valores para o vetor:");
        scanf("%d",&V[i]);
    }
    k=funcao(V,N);
    printf("o valor do somatório dos elementos do vetor é:%d",k);
    return 0;
    
}