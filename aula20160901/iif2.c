#include<stdio.h>
#include<stdlib.h>

int main()
{
    double n,i, fatorial;
    printf("Informe um numero: \n");
    scanf("%lf",&n);
    fatorial = 1;
    for(i=2;i<=n;i++)
    {
        fatorial = fatorial *i;
    }
    printf("\n O Fatorial de %.2lf e igual a %.2lf \n", n,fatorial);
    return 0;
}
