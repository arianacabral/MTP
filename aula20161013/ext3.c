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

    for (i=0;i<n;i++)
    {
        a1 = a1 + (pt.pontos[i].x*pt.pontos[i+1].y);
        a2 = a2 - (pt.pontos[i].y*pt.pontos[i+1].x);
    }
    printf("\n A1 %g \n", a1);
    printf("\n A1 %g \n", a2);
    area = ((a1+ pt.pontos[i+2].x*pt.pontos[i].y)-(a2+ pt.pontos[i+2].y*pt.pontos[i].x))/2;
    printf("\n Area %g \n", area);
    return 0;
}

