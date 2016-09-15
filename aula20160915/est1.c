#include<stdio.h>

#define RECEBEPONTO(c,ponto) \
    ({printf("\nInforme a abscissa (x) de %c: ",c);\
      scanf("%f",&ponto.x);\
      printf("\nInforme a ordenada (y) de %c: ",c);\
      scanf("%f",&ponto.y);})

#define SOMA(A,B,S) ({S.x=A.x+B.x;\
    S.y=A.y+B.y;})// Resultado da soma em x //S.x//
                  // Resultado da soma em y //S.y//

#define MOSTRA(ponto) ({printf("\nPONTO (%g,%g) \n\n",ponto.x,ponto.y);});
#define DIST(pontoA,pontoB,d) ({d=sqrt(pow(pontoA.x-pontoB.x,2.f)+pow(pontoA.y-pontoB.y,2.f));\
                            printf("DISTANCIA %g",d);})
struct ponto
{
float x;
float y;

};
int main()
{
    float d;
    struct ponto A,B,S;
    RECEBEPONTO('A',A);
    RECEBEPONTO('B',B);
    SOMA(A,B,S);
    MOSTRA(S);
    DIST(A,B,d);
    printf("\n\n\n");
    return 0;
}
