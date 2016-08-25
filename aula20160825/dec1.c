#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Informe um numero: \n");
    scanf("%d",&n);

    if (n%2 ==0 )
    {
       printf("\n O numero e par \n");
    }
    else
    {
        printf("\n O numero e impar \n");
    }

    if (n%3 == 0 )
    {
        printf("\n O numero e multiplo de 3 \n");
    }
    if (n%5 == 0 )
    {
        printf("\n O numero e multiplo de 5 \n");
    }
    if (n%7 == 0 )
    {
        printf("\n O numero e multiplo de 7 \n");
    }
    return 0;
}

