
#include<stdio.h>
#include<stdlib.h>

void ordena(int v[], int tam)
{
    int i, aux, flag;
    aux=0;
    flag=1;
    while(flag==1)
    {
        tam=tam-1;
        flag=0;
        for(i=0;i<=tam;i++)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                flag=1;
            }
        }
    }
    printf("assim ficou o vetor ordenado:");
    for(i=0;i<=tam;i++)
    {
        printf("%d",v[i]);
    }
}

int main()
{
    int i,v[i],tam;
    printf("digite o tamanho do vetor:");
    scanf("%d",&tam);
    for(i=0;i<tam;i++)
    {
        printf("digite um valor para o elemento:");
        scanf("%d",&v[i]);
    }
    ordena(v,tam);
    return 0;
}