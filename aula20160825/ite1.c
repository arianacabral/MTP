#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i, fatorial;
    printf("Informe um numero: \n");
    scanf("%d",&n);
    fatorial = 1;
    for(i=2;i<=n;i++)
    {
        fatorial = fatorial *i;
    }
    printf("\n O Fatorial de %d e igual a %d \n", n,fatorial);
    return 0;
}
