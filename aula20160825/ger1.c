#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Informe um numero: \n");
    scanf ("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            printf("Nao e primo!");
            break;
        }
    }
    if (i==n)
    {
        printf("Primo!!!\n");
    }
    return 0;
}
