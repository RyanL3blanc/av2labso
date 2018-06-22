
#include <stdio.h>
#include <stdlib.h>

struct lista 
{
  int info;
  struct lista* ant;
  struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria(void)
{
    
    printf("------------------lst_cria---------------------\n");
    printf("lista pronta\n");
    return NULL;
}

Lista* lst_insere(Lista* l, int v)
{
    printf("------------------lst_insere--------------------\n");
    Lista* novo;
    novo=(Lista*)malloc(sizeof(Lista));
    if(novo==NULL)
    {
      printf("não foi possível alocar memória para o nó.");
      exit(1);
    }
    novo->info=v;
    if(l==NULL)
    {
        printf("Lista vazia, inserindo elemento....\n");
        novo->prox=NULL;
        novo->ant=NULL;;
        printf("elemento inserido(%d)\n",v);
        return novo;
    }
    novo->prox=l;
    novo->ant=NULL;
    l->ant=novo;
    printf("elemento inserido(%d)\n",v);
    return novo;
}

Lista* ins_ultimo(Lista* l, int v)
{
    printf("-------------------ins_ultimo--------------------\n");
    Lista* novo;
    Lista* aux;
    Lista* p;
    p=l;
    novo=(Lista*)malloc(sizeof(Lista));
    novo->info=v;
    novo->prox=NULL;
    if(l==NULL)
    {
       printf("lista vazia, inserindo elemento....\n");
       novo->ant=l;
       novo->prox=NULL;
       return l;
    }
    while(p!=NULL)
    {
        aux=p;
        p=p->prox;
    }
    novo->prox=NULL;
    novo->ant=aux;
    aux->prox=novo;
    printf("elemento inserido no final da lista\n");
    return l;
}

void lst_imprime(Lista* l)
{
    printf("----------------------lst_imprime-----------------\n");
    Lista* m;
    for(m=l;m!=NULL;m=m->prox)
    {
        printf("--%d--",m->info);
    }
}

Lista* ins_ordenado(Lista* l, int v)
{
    printf("----------------------ins_ordenado----------------\n");
    Lista* novo;
    Lista* p;
    Lista* aux;
    p=l;
    novo=(Lista*)malloc(sizeof(Lista));
    novo->info=v;
    if(p==NULL)
    {
        printf("Lista vazia, inserindo elemento....\n");
        novo->prox=NULL;
        novo->ant=NULL;
        return l;
    }
    if(novo->info<p->info)
    {
        novo->prox=p;
        novo->ant=NULL;
        p->ant=novo;
        return novo;
    }
    while((p!=NULL) && (p->info<v))
    {
        aux=p;
        p=p->prox;
    }
    novo->ant=aux;
    novo->prox=p;
    p->ant=novo;
    aux->prox=novo;
    printf("inserção ordenada está concluída\n");
    return l;
}

Lista* lst_retira(Lista* l, int v)
{
  printf("-------------------------lst_retira----------------\n");
  Lista* p;
  Lista* q;
  Lista* aux;
  p=l;
  if(p==NULL)
  {
    printf("Não foi possível encontrar o elemento, pois a lista está vazia\n");
    exit(1);
  }
  while((p!=NULL) && (p->info!=v))
  {
    q=p;
    p=p->prox;
    aux=p;
  }
  p=p->prox;
  free(aux);
  q->prox=p;
  p->ant=q;
  printf("retirada do elemento concluída\n");
  return l;
}

void lst_libera(Lista* l)
{
  printf("--------------------------lst_libera---------------\n");
  Lista* p;
  Lista* aux;
  p=l;
  if(p==NULL)
  {
    printf("nao é possível encontrar um elemento, lista vazia");
    exit(1);
  }
  while(p!=NULL)
  {
    aux=p;
    p=p->prox;
    free(aux);
  }
  printf("liberação da lista concluída\n");
}

int main()
{
Lista* l; /* declara uma lista não iniciada */
l = lst_cria(); /* implementar a função "Lista* lst_cria (void);" que inicia uma lista vazia */

/* implementar a função "Lista* lst_insere (Lista* l, int v);" que insere um novo elemento no início da lista */ 
l = lst_insere(l, 78); 
l = lst_insere(l, 56); 
l = lst_insere(l, 45); 
l = lst_insere(l, 23);

/* implementar a função "Lista* ins_ultimo (Lista* L, int v);" que insere um novo elemento no final da lista */ 
l = ins_ultimo(l, 88);

/* implementar a função "void lst_imprime (Lista* l);" que imprime os elementos da lista */ 
lst_imprime(l); 
printf("\n");

/* implementar a função "Lista* ins_ordenado(Lista* L, int v);" que insere um novo elemento de forma ordenada */
l = ins_ordenado(l, 12);
lst_imprime(l);
printf("\n");
l = ins_ordenado(l, 58);
lst_imprime(l);
printf("\n");

/* implementar a função "Lista* lst_retira (Lista* l, int v);" que procura e retira um elemento da lista */
l = lst_retira(l, 78);
lst_imprime(l); 
printf("\n");
l = lst_retira(l, 45);
lst_imprime(l);

/* implementar a função "void lst_libera (Lista* l);" que libera a área alocada para a Lista */ 
lst_libera(l);
return 0;   
}