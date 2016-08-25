#include<stdio.h>
#include<stdlib.h>
int main()
{
    float A,B,C,media;
    printf("Informe a nota A,B,C, respectivamente, do aluno: \n");
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    media = (2*A + 3*B + 5*C)/10;
    printf("\n\n Media do aluno: %.2f \n\n",media);
    return 0;
}
