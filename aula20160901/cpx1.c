#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

int main ()
{
    double complex z1, z2, Soma, Produto;
    double preal, pimag;
    printf("\n Informe a parte real de Z1 \n");
    scanf("%lf",&preal);
    printf("\n Informe a parte imaginaria de Z1 \n");
    scanf("%lf",&pimag);
    z1 = preal + pimag * I;
    printf("\n Informe a parte real de Z2 \n");
    scanf("%lf",&preal);
    printf("\n Informe a parte imaginaria de Z2 \n");
    scanf("%lf",&pimag);
    z2 = preal + pimag * I;

    Soma = z1+z2;
    Produto = z1*z2;

    printf("\n Soma: %lf + %lfi\n",creal(Soma),cimag(Soma));
    printf("\n Soma: %lf /_ %lfrad\n",cabs(Soma),carg(Soma));

    printf("\n Produto: %lf * %lfi\n",creal(Produto),cimag(Produto));
    printf("\n Produto: %lf /_ %lfrad\n",cabs(Produto),carg(Produto));

    return 0;
}

