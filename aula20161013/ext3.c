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
    float a1 = 0, a2 =0,area,somax=0,somay=0;

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
    for (i=0;i<n;i++)
    {
        somax+=pt.pontos[i].x;
    }

    for (i=0;i<n;i++)
    {
        somay+=pt.pontos[i].y;
    }
    printf("\n Centroide (%g,%g) \n", (somax/n),(somay/n));

    area = somax;
    printf("\n Area %g \n", area);
    free(pt.pontos);
    free(pt.pontos);
    return 0;
}

