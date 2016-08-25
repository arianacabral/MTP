#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));

    int n,soma;
    printf("Informe um numero: \n");
    scanf("%d",&n);
    if (n>=0)
    {
        soma = n + rand()%2;
        if (soma % 2 == 0)
        {
            printf("\n Par \n");
        }
        else
            {
                printf("\n Impar \n");
            }
    }
    else
        {
            printf("\n Numero invalido !\n");
        }
    return 0;
}
