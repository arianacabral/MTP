#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x,y,a,b, d;
    printf("\n Informe as coordenadas do PONTO P (X,Y) \n");
    printf("\n Informe a abscissa do PONTO P (X) \n");
    scanf("%f",&x);
    printf("\n Informe a ordenda do PONTO P (Y) \n");
    scanf("%f",&y);
    printf("\n Informe as coordenadas do PONTO Q (A,B) \n");
    printf("\n Informe a abscissa do PONTO P (A) \n");
    scanf("%f",&a);
    printf("\n Informe a ordenada do PONTO P (B) \n");
    scanf("%f",&b);

    d = sqrt( pow((x-a),2)+ pow((y-b),2));

    printf("\n Distancia entre os pontos:%f \n", d);

    return 0;

}
