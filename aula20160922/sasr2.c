#include<stdio.h>
#include<stdlib.h>
void par();
void impar();

int main()
{
    int op;
    printf("\n digite (1) para impar e (2) para par \n");
    scanf("%d",&op);
    printf("\n");
    if(op==1)
      impar();
    if(op==2)
      par();
    return 0;
}
void par()
{
    int i;
    for(i=1;i<=10;i++)
       if(i%2==0)
         printf(" %d ",i);
}
void impar()
{
    int i;
    for(i=1;i<=10;i++)
        if(i%2==1)
          printf(" %d ",i);

}
