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
    int n,aux,nbit;
    Pilha * pilha = NULL;
    printf("Informe um numero: ");
    scanf("%d",&n);

    aux = n;

    while (aux>0)
    {
        nbit = aux%2;
        push(&pilha, nbit);
        aux = aux/2;
    }

    printf("\nNumeros invertidos: ");
    while (!empty(pilha))
        {
            printf("%d ",top(pilha));
            pop(&pilha);
        }
        printf("\n\n");
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


