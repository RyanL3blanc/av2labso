
/* Crie uma função em linguagem C que receba como parâmetro as dimensões
inteiras n(linhas) e m(colunas) de uma matriz, a própria matriz(que foi
definida dinamicamente no programa principal como um vetor unidimensional
de inteiros) e um número inteiro num. A função deverá verificar se num
pertence à matriz, caso positivo, a função retornará 1, caso contrário,
retorna 0.

int pertence(int n, int m, int *mat, int num); */

#include <stdio.h>
#include <stdlib.h>
int pertence(int n, int m, int *mat, int num)
{
    int i, j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]==num)
            {
                flag=1;
            }
        }
    }
    
    return flag;
}

int main()
{
    int m, n, i, j, *mat, num, k;
    mat=(int*)malloc(m*n*sizeof(int));
    if(mat==NULL)
    {
        printf("não foi possível alocar memória para a matriz.");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("insira valor para a posiçao %d,%d",i,j);
                scanf("%d",&mat[i][j]);
            }
        }
        printf("digite um número a ser buscado na matriz:");
        scanf("%d",&num);
        k=pertence(n,m,mat,num);
        printf("resultado:%d",k);
        return 0;
    }
}