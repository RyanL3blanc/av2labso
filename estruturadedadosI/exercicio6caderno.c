
/*Faça um programa que leia 5 números reais e aloque-os em um vetor. A seguir, o programa
 deverá ler o número real. Caso o número pertença ao vetor inicial, imprima a posição. Caso não, 
 imprima uma mensagem.
 OBS.: Considere que o usuário digitou números diferentes.
       Crie uma função para buscar o elemento.     */


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define N 5

// Legenda=  '//**', é onde modifiquei

int ordena(int v[])
{//ordena os valores de forma crescente.
	int F,troca,i,aux;
	F=N;
	troca=1;

	while(troca==1){
		F=F-1; //**
		troca=0;
		for(i=0;i<=F;i++){
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				troca=1;
			}
		}
	}
	for(i=0;i<N;i++){
	   printf(" [%d] |", v[i]);
	}
}


int procura_b(int k, int v[]){
  int j,pos=0,A=0,B=N-1;
  
	while(A<=B && pos==0)	{
		j=(A+B)/2;
if(k==v[j])	{
			pos=j+1;
		}
		else{
			if(k>v[j]){
				A=j+1;
			}
			else{
				B=j-1;
			}
		}
	}
	return pos; //**
}

int main(){
	int i, achou;
int v[N];
	int proc;
    //leitura valores
	printf("\nentre com alguns valores diferentes:\n");
for(i=0;i<N;i++){
	  printf("[%dth] valor: ",i+1); //**
		scanf("%d",&v[i]);
	}
	printf("\nestes são os números que foram ordenados:");
	ordena(v); //**
	printf("\n entre com o valor a procurar:");
	scanf("%d",&proc); //**
	achou=procura_b(proc,v);
	if(achou==0){
		printf("\nO número que foi digitado não existe no vetor");
	}
	else{
		printf("\nO número está na posição %d", achou);
	}
}