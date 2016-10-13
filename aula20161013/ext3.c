#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 typedef struct Ponto
    {
        float x;
        float y;
    }P;

    struct poligono
    {
        float vertice;
        struct Ponto *pontos;
    };

    int n,i;
    struct poligono pt;

    printf("\nInforme a quantidade de pontos desejados: ");
    scanf("%d",&n);
    pt.pontos=malloc(n*sizeof(P));

    for(i=0;i<n;i++)
    {
        printf("\nPonto %d ", i+1);
        printf("\nX: ");
        scanf("%g",&pt.pontos[i].x);
        printf("\nY: ");
        scanf("%g",&pt.pontos[i].y);

    }


    return 0;
}

