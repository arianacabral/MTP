#include<stdio.h>
#include<stdlib.h>
int main ()
{
    double n1,n2,soma;
    printf("\n Digite dois numeros: \n");
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    soma = n1+n2;
    printf("\n %p : %lf \n", &n1, n1);
    printf("\n %p : %lf \n", &n2, n2);
    printf("\n %p : %lf \n", &soma, soma);
    return 0;
}
