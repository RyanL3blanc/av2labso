
#include <stdio.h>
#include <stdlib.h>
#define N 100

struct fila
{
    int n; /* número de elementos na fila.*/
    int ini; /*posição do próximo elemento que será retirado da fila.*/
    float vet[N];
};
typedef struct fila Fila;

Fila* fila_cria(void)
{
    Fila* f=(Fila*)malloc(sizeof(Fila));
    if(f==NULL)
    {
        printf("não foi possível alocar espaço.\n");
        exit(1);
    }
    f->n=0; /* fila inicializada com 0 elementos.*/
    f->ini=0; /* escolhe a posição inicial da fila. */
    return f;
}

int fila_vazia(Fila *f)
{
    return f->n==0;
}

int fila_cheia(Fila *f)
{
    return f->n==N; //verdadeiro ou falso, se verdadeiro retorna 1.
}

void fila_insere(Fila* f, float v)
{
    int fim;
    if(f->n==N)
    {
        printf("fila cheia\n");
        exit(1);
    }
    /*insere elemento na próxima posição livre.*/
    fim=(f->ini + f->n)%N;
    f->vet[fim]=v; /*posição onde o valor do parâmetro entrará*/
    f->n++;
}

float fila_retira(Fila *f)
{
    float v;
    if(fila_vazia(f))
    {
        printf("Fila vazia.\n");
        exit(1);
    }
    /*retira elemento do início da fila*/
    v=f->vet[f->ini];
    f->ini=(f->ini + 1)%N;
    f->n--;
    return v;
}

void fila_imprime(Fila *f)
{
    int i;
    for(i=0;i<f->n;i++)
    {
        printf("\n%f:",f->vet[(f->ini+i)%N]);
    }
}

void combina_filas(Fila* f_res, Fila* f1, Fila* f2)
{
    float v;
    while(!(fila_vazia(f1)) || !(fila_vazia(f2))) //enquanto uma for diferente de vazia OU a outra.
    {
        if(!fila_vazia(f1)) //verificação da fila f1, se ela está vazia.
        {
            v=fila_retira(f1);
            if(!fila_cheia(f_res)) //verifica se a f_res está cheia.
            {
                fila_insere(f_res,v);
            }
        }
        if(!(fila_vazia(f2))) //verificação da fila f2, se ela está vazia.
        {
            v=fila_retira(f2);
            if(!(fila_cheia(f_res))) //verifica se a f_res está cheia.
            {
                fila_insere(f_res,v);
            }
        }
    }
}

int main()
{
    Fila *f1,*f2,*f_res;
    f1=fila_cria();
    f2=fila_cria();
    f_res=fila_cria();
    fila_insere(f1,10.0);
    fila_insere(f1,20.0);
    fila_insere(f1,30.0);
    fila_insere(f1,40.0);
    float v=fila_retira(f1);
    printf("\n%f:",v);
    printf("\n");
    fila_imprime(f1);
    printf("\n");
    fila_insere(f2,5.0);
    fila_insere(f1,15.0);
    fila_insere(f2,25.0);
    fila_insere(f2,35.0);
    fila_imprime(f2);
    printf("\n");
    combina_filas(f_res,f1,f2);
    fila_imprime(f_res);
    printf("\n");
    /*fila_libera(f1);
    fila_libera(f2);
    fila_libera(f_res);*/
    return 0;
}