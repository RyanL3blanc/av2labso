
#include <stdio.h>
#include <stdlib.h>

void reajusta(int n, float **setor, float cod)
{
    int i, achou=0;
    for(i=0;i<n;i++)
    {
        if(setor[i][0]==cod)
        {
            setor[i][1]=setor[i][1]*1.2;
            achou=1;
            break;
        }
    }
    if(!achou)//if(achou==0);
    {
        printf("\nsetor não encontrado");
    }
}

float maior(int n, float **setor) //n=numero de setores da tabela
{
    int i;
    float max=0;
    for(i=0;i<n;i++)
    {
        if(setor[i][1]>max)
        {
            max=setor[i][1];
        }
        return max;
    }
}
  
void ordena2(int n, float **v)
{
    int j,i;
    float valor1, valor2;
    for(i=1;i<n;i++)
    {
        valor1=v[i][0];
        valor2=v[i][1];
        j=i-1;
        while(j>=0 && valor1<v[j][0])
        {
            v[j+1][0]=v[j][0];
            v[j+1][1]=v[j][1];
            j=j-1;
        }
        v[j+1][0]=valor1;
        v[j+1][1]=valor2;
    }
}

int main()
{
    float **setor, cod;
    int i, mat, achou, p;
    
    printf("entre com a quantidade maxima de setores:");
    scanf("%d",&p);
    setor=(float**)malloc(sizeof(float*));
    if(setor==NULL)
    {
        printf("não foi possível alocar a memória");
    }
    printf("entrada da tabela de salários\n");
    for(i=0;i<p;i++)
    {
        setor[i]=(float*)malloc(2*sizeof(float));
        printf("\nentre com o codigo do setor %d:",i+1);
        scanf("%f",&setor[i][0]);
        printf("\nentre com o salario do setor %5.1f:",setor[i][0]);
        scanf("%f",&setor[i][1]);
    }
    
    printf("\nentre com o codigo do setor que deseja reajustar salario(vinte por cento):");
    scanf("%f",&cod);
    reajusta(p,setor,cod);
    printf("\n o maior salário da empresa é: %6.2f:",maior(p,setor));
    ordena2(p,setor); //metodo de inserção
    printf("esta é a tabela ordenada pelo codigo do setor\n");
    for(i=0;i<p;i++)
    {
        printf("%5.2f",setor[i][0]);
        printf("%10.2f",setor[i][1]);
        printf("\n");
    }
    return 0;
}