
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i;
    int v; //esse ponteiro é para armazenar dinamicamente o vetor.
    v=(int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    {
        printf("insira um valor para o vetor:");
        scanf("%d",&v[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("assim ficou o vetor:\n");
        printf("%d",v[i]);
    }
    return 0;

    
}