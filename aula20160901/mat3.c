#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double numero, base,log,i=0;
    printf("\n Informe um numero \n");
    scanf("%lf",&numero);
    printf("\n Informe uma base \n");
    scanf("%lf",&base);

    log = log10(numero)/log10(base);

    printf ("\n Log = %.2lf", log);

    return 0;
}

