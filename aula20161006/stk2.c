#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float media(int *vet);
float desvio(int *vet,float n);
int main()
{
    int vet[5],i;
    for(i=0;i<5;i++)
     {
         printf("\nNumero %d: ",i+1);
         scanf("%d",&vet[i]);
     }
    float m = media(vet);
    printf("\nMedia %g  \n\nDesvio Padrao %f \n\n",m,desvio(vet,m));


    return 0;
}
float media(int *vet)
{
    int s = 0, i;
    for(i = 0; i<5; i++)
        s = s+vet[i];
    return s/5.;
}
float desvio(int *vet,float n)
{
    float s = 0.f;int i;
    for(i = 0;i<5;i++)
        s+=pow(n-vet[i],2.f);
    return sqrt(s/4);
}
