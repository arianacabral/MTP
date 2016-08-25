#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int n,cont;
    int s = rand()%100;
    do
    {
        printf("\n Informe um numero entre 0 e 99 :");
        scanf("%d",&n);


    }while(n! = s)
    return 0;
}
