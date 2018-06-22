
#include <stdio.h>
#include <stdlib.h>
struct lista{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;
Lista* lst_cria(void)
{
    return NULL;
}
Lista* lst_insere(Lista* l, int i)
{
    Lista* novo;
    novo=(Lista*)malloc(sizeof(Lista));
    if(novo==NULL) //teste de alocação de memória.
    {
        printf("não foi possível alocar memória para o nó.");
        exit(1);
    }
    novo->info=i; //insere a informação no campo info.
    novo->prox=l; //recebe o ponteiro anterior e joga pra frente; ex.: l----> NULL.
    return novo; //retorna o novo valor como cabeça de lista.
}
void lst_imprime(Lista* l)
{
    Lista* p; //ponteiro auxiliar para andar pela lista.
    for(p=l;p!=NULL;p=p->prox)
    {
        printf("%d",p->info);
    }
    printf("\n");
}
Lista* busca(Lista* l, int i)
{
    Lista* n;
    for(n=l;n!=NULL;n=n->prox)
    {
        if(n->info==i)
        {
            return n; //retorna um ponteiro para a posição do elememto na lista.
        }
    }
    return NULL; //número não encontrado.
}
Lista* ins_ultimo(Lista* l, int v)
{
    Lista* p=l;
    Lista* novo=(Lista*)malloc(sizeof(Lista));
    if(novo==NULL)
    {
        printf("não foi possível alocar memória para o nó.");
        exit(1);
    }
    novo->info=v;
    novo->prox=NULL;
    if(p==NULL) //lista vazia.
    {
        return novo;
    }
    while(p->prox!=NULL) //ponteiro do tipo lista* p recebe ponteiro para o próximo elemento da lista.
    {
        p=p->prox;
    }
    p->prox=novo;
    return l;
}
void lst_libera(Lista* l)
{
    Lista* p=l;
    Lista* t;
    while(p!=NULL)
    {
        Lista *t=p->prox; //guarda referência para o próximo elemento.
        free(p); //libera memória que é apontada por p.
        p=t; //aponta para o elemento apontado por t.
    }
    
    printf("SUJOU SERJÃO!!!!!!!");
}
int main()
{
    
    Lista *l; //declaração de lista não iniciada. 
    Lista* k; 
    l=lst_cria(); //inicia lista vazia.
    //várias inserções no início da lista.
    l=lst_insere(l, 23);
    l=lst_insere(l, 45);
    l=lst_insere(l, 56);
    l=lst_insere(l, 78);
    lst_imprime(l);
    k=busca(l, 45);
    l=ins_ultimo(l,80);
    lst_imprime(l);
    lst_libera(l);
    return 0;
}

