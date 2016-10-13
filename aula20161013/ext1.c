#include<stdio.h>
#include<stdlib.h>

int recebenumeros(int *numeros,int n);// ponteiro do vetor e tamanho do vetor
void maioremenor(int *numeros,int n); // ponteiro do vetor e tamanho do vetor
void media(int *numeros,int n);//ponteiro do vetor e tamanho do vetor

int main()
{
    int *numeros = malloc(sizeof(int));
    int n,op,a;
     printf("\nQuantos numeros deseja? ");
     scanf("%d",&n);
     numeros= recebenumeros(numeros,n);//chamando a funcao para guardar os numeros desejados
   do
   {
       printf("\n\t\t\tOPCOES\n");
       printf("Escolha:\n(1)Media\n(2)Maior numero\n(3)Menor numero\n(4)Mais numeros?\n(5)Sair\n");
       scanf("%d",&op);
       switch(op)
        {
            case 1:
                media(numeros,n);
            break;
            case 2:
                maior(numeros,n);
            break;
            case 3:
                menor(numeros,n);
                break;
            case 4:
                printf("Quantos a mais? ");
                scanf("%d",&a);
                n=n+a;
                numeros=recebenumeros(numeros,n);
            break;
        }

    }while(op!=5);
    free(numeros);//liberando da memoria
    return 0;
}
int recebenumeros(int *numeros,int n) // funcao recebe o ponteiro do vetor e o tamanho do vetor dos numeros
{
    int i=0;
    while(i<n)
    {
        printf("\nNumero %d: ", i+1);
        scanf("%d",&numeros[i]);

        numeros=(int *)realloc(numeros,(n+1)*sizeof(int));
        i++;
    }

    return numeros;//retorna o ponteiro
}

void media(int *numeros,int n)//funcao recebe o ponteiro dos vetores e o tamanho do vetor dos numeros
{
   int i,soma=0;
   for(i=0;i<n;i++)
   {
       soma+=numeros[i];

   }
   float media, soma1,n1;
   soma1 = soma;
   n1= n;
   media = soma1/n1;
   printf("Media: %g\n\n",media);
}

void menor(int *numeros,int n)//funcao recebe o ponteiro do vetor e o tamanho do vetor
{
    int i,MENOR=numeros[0];
    for(i=0;i<n;i++)
    {
        if(numeros[i]<MENOR)
            MENOR=numeros[i];
    }
    printf("Menor: %d\n",MENOR);

}

void maior(int *numeros,int n)//funcao recebe o ponteiro do vetor e o tamanho do vetor
{
    int i,MAIOR=numeros[0];
    for(i=0;i<n;i++)
    {
        if(numeros[i]>MAIOR)
            MAIOR=numeros[i];
    }
    printf("Maior: %d\n",MAIOR);
}
