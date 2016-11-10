#include<stdio.h>
#include<stdlib.h>
#define MAXPILHA 10 // tamanho maximo da pilha

typedef char DADO;//tipo da pilha CHAR
typedef struct Pilha_{
    int idtopo;
    DADO dados[MAXPILHA];
}Pilha;
// funcao mudara o dado-> passagem por referencia

void push (Pilha * ppilha, DADO elemento);
void pop (Pilha * ppilha);
DADO top (Pilha ppilha);
int empty(Pilha pilha);

int main()
{
    int i;
    Pilha pilha;
    pilha.idtopo = -1; // pilha vazia
    printf("Push:");
    for (i=0;i<5;i++)
    {
        push(&pilha,'A'+i);
        printf("%c",top(pilha));
    }
    printf("\nPop:");
    while (!empty(pilha))
    {
        printf("%c",top(pilha));
        pop(&pilha);
    }
    printf("\n\n");
    for (i=0;i<MAXPILHA+1;i++)
    {
        push(&pilha,'A'+i);
        printf("%c",top(pilha));
    }
    return 0;
}
void push (Pilha * ppilha, DADO elemento){
    if (ppilha->idtopo+1<MAXPILHA)
    {
        ppilha->idtopo++;
        ppilha->dados[ppilha->idtopo] =elemento;

    }
    else {
        fprintf(stderr,"\n ERRO!!!\nEstouro de pilha\n");
    }
}
void pop (Pilha * ppilha){
    if(ppilha->idtopo >=0)
    {
        ppilha->dados[ppilha->idtopo] = 0x0; //limpar elementos
        ppilha->idtopo--;
    }
    else {
        fprintf(stdout,"\n ATENCAO!!!Pilha vazia\n");
    }
}
DADO top (Pilha pilha)
{
     return pilha.dados[pilha.idtopo];
}
int empty(Pilha pilha){
    return (pilha.idtopo == -1);
}
