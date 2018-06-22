
#include <stdio.h>
#include <stdlib.h>

struct lista{
	int info;
	struct lista *prox;
}; typedef struct lista Lista;

Lista *cria_lst(){
	return NULL;
}

Lista inserir(Lista* l, int i){
   Lista* novo=(Lista*)malloc(sizeof(Lista));
   novo->info=i;
   novo->prox=l;
   return novo;	
}

void imprime_lst(Lista* l){
	Lista *p;
	for(p=l;p!=NULL;p=p->prox)
	{		
	  printf(" [%d] |", p->info);
    }
}

Lista insere_ultimo(Lista *l, int v)
{
	Lista *novo=(Lista*)malloc(sizeof(Lista));
	
	novo->info=v;
   novo->prox=NULL;
	return novo;	
}

void impar_par(Lista *l)
{
   Lista *p;
   int i,j; 
   i,j=0;
   
   for(p=l;p!=NULL;p=p->prox){
      if(p->info % 2 == 0)
	  {   
	    i++;  
	  }
	  else
	  {
	  	j++;
	  }
	}
	
   printf(" Qtd par: [%d] \n", i);
   printf("Qtd impar: [%d] \n", j);
		
}

int main()
{
   Lista *l;
      
   l=cria_lst();
   l=inserir(l,40);
   l=inserir(l,2);
   l=inserir(l,35);
   imprime_lst(l);   
   impar_par(l);
   	
   system ("pause");
   return 0;	
}