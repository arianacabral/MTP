#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b,p,r,i;
    printf("Informe a base e a potencia, respectivamente: \n");
    scanf("%d",&b);
    scanf("%d",&p);
    r=b;

    for(i=1;i<p;i++)
    {
        r = r * b;
    }
    printf ("\n Resultado %d ",r);
    return 0;
}

