#include<stdio.h>
#include<stdlib.h>
int main()
{
    float h,b;
    printf("Informe a base e a altura do triangulo,respectivamente: \n");
    scanf("%f",&b);
    scanf("%f",&h);
    printf("\n\n Area do triangulo: %.2f \n\n",(b*h)/2);
    return 0;
}
