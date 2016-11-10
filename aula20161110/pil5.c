#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Pilha
{
	float n;
	struct _Pilha *anc;
}Pilha;
// funcao mudara o dado-> passagem por referencia
void push(Pilha **ppilha, float elemento);
void pop (Pilha **ppilha);
float top (Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
	Pilha *pilha=NULL;
	FILE * arquivo = fopen("dados.txt", "r");
	float n;

	while(!feof(arquivo))
	{
		fscanf(arquivo, "%f\n", &n);
		push(&pilha, n);
	}

	printf("\t\tDADOS ARMAZENADOS NO ARQUIVO:\n");
	while(!empty(pilha))
	{
		printf(" %g \n", top(pilha));
		pop(&pilha);
		printf("\n\n");
	}

	free(pilha);
	return 0;
}

void push(Pilha **ppilha, float elemento)
{
	Pilha *novo=malloc(sizeof(Pilha));
	novo->n=elemento;
	novo->anc=*ppilha;
	*ppilha=novo;

}

void pop (Pilha **ppilha)
{
	if(*ppilha != NULL)
	{
		Pilha * aux = (*ppilha)->anc;
		free(*ppilha);
		*ppilha = aux;
  	}
}

float top (Pilha *pilha)
{
	if(pilha!=NULL)
		return pilha->n;

	printf("Pilha vazia.\n");

}

int empty(Pilha *pilha)
{
	return pilha==NULL;
}
