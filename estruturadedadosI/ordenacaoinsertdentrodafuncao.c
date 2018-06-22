
#include <stdio.h>
#include <stdlib.h>

void ordena_insert(int v[],int tam)
{
    int i,j,aux;
    j=0;
    printf("digite valores para o vetor:");
    for(i=0;i<tam;i++)
    {
        scanf("%d",&v[i]);
        aux=v[i];
        j=i-1;
        while(j>=0 && aux<v[j])
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=aux;
    }
    printf("assim ficou o vetor:\n");
    for(i=0;i<tam;i++)
    {
        printf("%d",v[i]);
    }
}

int main()
{
    int tam, v[tam];
    printf("digite o tamanho do vetor:");
    scanf("%d",&tam);
    ordena_insert(v,tam);
    return 0;
}