#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c, angulo;
    printf("\n Informe dois lados do triangulo \n");
    printf("\n Informe o lado b \n");
    scanf("%f",&b);
    printf("\n Informe o lado c \n");
    scanf("%f",&c);
    printf("\n Informe o angulo formado entre esses lados (b e c) em radianos \n");
    scanf("%f",&angulo);

    a = sqrt (pow(b,2)+pow(c,2)- (2*b*c*cos(angulo)));

    printf("\n Valor do outro lado do triangulo = %f \n",a);

    return 0;
}
