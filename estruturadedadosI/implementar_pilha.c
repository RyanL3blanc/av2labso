
#include <stdio.h>
#include <stdlib.h>

struct lista
{
       float info;
       struct lista* prox;
};
typedef struct lista Lista;

struct pilha
{
       Lista* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria()
{
     Pilha* p = (Pilha*)malloc(sizeof(Pilha)); //aloca memória para a pilha.
     p->prim = NULL; //pilha vazia.
     return p;
}

int vazia(Pilha* p)
{
    return p->prim==NULL; //se verdadeiro, retorna 1.
}

void pilha_push(Pilha* p, float v)
{
      Lista* n=(Lista*)malloc(sizeof(Lista)); //aloca espaço para nó.
      n->info=v;
      if(p==NULL)
      {
          printf("Lista vazia, inserindo elemento....");
          n->prox=NULL;
          p->prim=n;
      }
      n->prox=p->prim; //aponta para o elemento inserido anteriormente na pilha.
      p->prim=n; //aponta para o novo elemento inserido.
}

float pilha_pop(Pilha* p)
{
     Lista* t;
     float v;
     if(vazia(p)) //testa se a lista está vazia.
     {
                 printf("Pilha vazia");
                 exit(1);
     }
     t=p->prim; //aponta para o primeiro elemento da pilha.
     v=t->info; //variável "v" recebe o campo "info" do primeiro nó.
     p->prim=t->prox; //aponta para o proximo elemento da pilha.
     free(t); //libera o elemento que antes era o topo da lista.
     return v;
}

void pilha_imprime(Pilha *p)
{
     Lista* q;
     for(q=p->prim; q!=NULL; q=q->prox)
     {
                    printf("%f\n",q->info);
     }
}

void pilha_libera(Pilha*p)
{
  Lista * q=p->prim;
  while(q!=NULL)
  {
    Lista *t=q->prox;
    free(q);
    q=t;
  }
  free(q);
}

void imprime(Pilha* p)
{
     /* transfere elementos para a pilha auxiliar */
     Pilha* aux = pilha_cria();
     while(!vazia(p))
     {
                     pilha_push(aux,pilha_pop(p));
     }
     /* transfere de volta imprimindo os valores */
     while(!vazia(aux))
     {
                       float v = pilha_pop(aux);
                       printf("%f\n",v);
                       pilha_push(p,v);
     }
     pilha_libera(aux);
}

int main()
{
    /* implementação de pilha com a lista encadeada */
    Pilha *p;
    int n;
    n=vazia(p);
    p=pilha_cria();
    pilha_push(p,10);
    pilha_push(p,15);
    pilha_push(p,20);
    pilha_push(p,25);
    float v = pilha_pop(p);
    printf("%f\n",v);
    printf("\n");
    
    /* vai imprimir do topo para a base, percorrendo lista encadeada */
    pilha_imprime(p);
    printf("\n");
    
    /* vai imprimir da base para o topo, usando as funções ja definidas e uma pilha */
    imprime(p);
    pilha_libera(p);
    system("PAUSE");
    return 0;
}
