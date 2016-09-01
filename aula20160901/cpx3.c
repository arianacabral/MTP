#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
int main ()
{
    double complex z,raiz, Prodconjugado;
    double preal, pimag;
    printf("\n Informe a parte real de Z \n");
    scanf("%lf",&preal);
    printf("\n Informe a parte imaginaria de Z \n");
    scanf("%lf",&pimag);
    z = preal + pimag * I;

    raiz = csqrt(z);

    printf ("\n Valor complexo da raiz = %lf \n", raiz);

    return 0;
}
