#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int DADO;//tipo da pilha int
typedef struct Pilha_{
   DADO topo;
   struct Pilha_ * proximo;
}Pilha;
// funcao mudara o dado-> passagem por referencia

void push (Pilha ** ppilha, DADO elemento);
void pop (Pilha ** ppilha);
DADO top (Pilha * ppilha);
int empty(Pilha * pilha);

int main()
{
    int n,op;
    char * texto;
    Pilha * pilha = NULL;
    do {
        printf("Informe um numero inteiro positivo:");
        scanf("%d",&n);
        if (n>=0)
        {
             push(&pilha,n);
        }
    }while(n>=0);
    printf("\n\n");
    printf("(1) SALVAR EM ARQUIVO.\n(2)VISUALIZAR NA TELA.\n");
    scanf("%d",&op);
    if (op == 1)
    {
        FILE *arquivo;
        arquivo = fopen("sequencia.txt","w");
        if(arquivo == NULL)
            fprintf(stderr, "Erro na criacao do arquivo!\n");
        else {
                while(!empty(pilha))
                {
                    fprintf(arquivo," %d ",top(pilha));
                    pop(&pilha);
                }
            fclose(arquivo);
        }
    }
    else
    {
        printf("Numeros invertidos ");
        while (!empty(pilha))
            {
                printf("%d ",top(pilha));
                pop(&pilha);
                }
        printf("\n\n");
    }

    return 0;
}
void push (Pilha ** ppilha, DADO elemento){
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = elemento;
    novo->proximo = *ppilha;
    *ppilha = novo;
}
void pop (Pilha ** ppilha){
    Pilha * aux = NULL;
    if(!empty(*ppilha))
    {
        aux = (*ppilha)->proximo;
        free(*ppilha);
        *ppilha = aux;
    }
    else {
        fprintf(stdout,"\n ATENCAO!!!Pilha vazia\n");
    }
}
DADO top (Pilha * pilha)
{
     return pilha -> topo;
}
int empty(Pilha * pilha){
    return (pilha == NULL);
    }

