
#include <stdio.h>
#include <stdlib.h>

void procura_matriz(float matriz[][3],float num)
{
    int i,j,achou=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matriz[i][j]==num)
            {
                printf("posição: %d,%d",i,j);
                achou=1;
            }
        }
    }
    if(achou==0)
    {
        printf("número não encontrado");
    }
}

int main()
{
    int i,j;
    float matriz[i][j],num;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("digite um valor para a matriz:");
            scanf("%f",&matriz[i][j]);
        }
    }
    
    printf("insira o número a ser procurado na matriz:");
    scanf("%f",&num);
    procura_matriz(m,num);
    return 0;
    
}