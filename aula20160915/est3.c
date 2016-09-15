#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int N = 50;
int n;

struct Dados
{
	char nome[64];
	int idade;
	int telefone;

}vetor[N];

void cadastrar()
{
    int i;
	printf("\n\nInforme o numero de pessoas que serão cadastradas: ");
	scanf("%d",n);
	for(i = 0 ; i < n ; i++)
	{
		printf("\nCadastrando usuario %d :", i+1);
		printf("\n\nNome:");
		fflush(stdin);
		gets(vetor[i].nome);
		printf("\nIdade:");
		scanf("%d",vetor[i].idade);
		printf("\nTelefone:");
		scanf("%d",vetor[i].telefone);
	}
}
void listar1()
{
    int i;
	printf("Lista dos nomes dos usuarios cadastrados:");
	for( i = 0 ; i < n ; i++)
	{
		printf("\n\nNome: %s ", vetor[i].nome);
	}

}

void listar2()
{
	int i;
	printf("Lista das idades dos usuarios cadastrados:");
	for( i = 0 ; i < n ; i++)
	{
		printf("\n\nIdade: %d ", vetor[i].idade);
	}

}

void listar3()
{
	int i;
	printf("Lista dos telefones dos usuarios cadastrados:");
	for( i = 0 ; i < n ; i++)
	{
		printf("\n\nTelefone: %d ", vetor[i].telefone);
	}

}

void main()
	int op;
	do
	{
		system("cls");
		printf("\nEcolha uma opcao\n");
		printf("(1)Cadastrar\n");
		printf("(2)Listar Nome\n");
		printf("(3)Listar Idade\n");
		printf("(4)Listar Telefone\n");
		printf("(5)Sair\n");
		scanf("%d",&op);
		switch (op)
		{
		case 1:
			cadastrar();
			break;
		case 2:
			listar1();
			break;
		case 3:
			listar2();
			break;
		case 4:
			listar3();
			break;
		}
	}while(op != 5);
}
