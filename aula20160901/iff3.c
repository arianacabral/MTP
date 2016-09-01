#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int numero,i;
    float n1,soma1;
    double n2,soma2;
    printf("\n Informe um numero \n");
    scanf("%d",&numero);

    n1 = (1/numero)+ numero;
    n2 = (1/numero)+ numero;

    for (i=0;i<730;i++)
    {
        soma1= soma1 + n1;
    }

    printf("\n Soma1 %.15g \n",soma1);
    return 0;
}
