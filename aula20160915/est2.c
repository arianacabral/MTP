#include<stdio.h>

#define RECEBEPONTO(c,ponto) \
    ({printf("Entre coord x de %c: ",c);\
      scanf("%f",&ponto.x);\
      printf("Entre coord y de %c: ",c);\
      scanf("%f",&ponto.y);\
      printf("Entre coord z de %c: ",c);\
      scanf("%f",&ponto.z);})
#define SOMA(A,B,S) ({S.x=A.x+B.x;\
    S.y=A.y+B.y; S.z=A.z+B.z;})

#define MOSTRA(ponto) ({printf("\n(%g,%g,%g) \n\n",ponto.x,ponto.y,ponto.z);});
#define DIST(ptA,ptB,d) ({d=sqrt(pow(ptA.x-ptB.x,2.f)+pow(ptA.y-ptB.y,2.f)+pow(ptA.z-ptB.z,2.f));\
                            printf("Distancia %g",d);})
struct ponto
{
float x;
float y;
float z;

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
    printf("\n\n");
    return 0;
}
