#include<stdio.h>
#include<stdlib.h>

void preencher (int vet[],int n)
{
    int i =0;
	for(i=0;i<n;i++)
	{

		scanf("%d",&vet[i]);
}
}

void inverte (int vet[],int n)
{
	int aux,i=0,j=n-1;

	{
		while(i<j)
		{
		aux=vet[i];
		vet[i]=vet[j];
		vet[j]=aux;
		i++;
		j--;
		}
	}
}

int main()
{
	const int n = 10;
	int vet[n],i;
	printf("\n Digite um numero inteiro: \n");
	preencher(vet,n);

	printf("\n Vetor invertido \n\n");
	inverte(vet,n);
	for(i=0;i<n;i++)
	{
	    printf(" %d ",vet[i]);
	}
	printf("\n\n");
	return 0;
}
