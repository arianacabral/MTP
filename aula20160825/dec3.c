#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int dado1, dado2, dado3,soma;

    dado1=("%d\n",rand()%6+1);
    printf("\n O numero sorteado do primeiro dado:%d\n",dado1);
    dado2=("%d\n",rand()%6+1);
    printf("\n O numero sorteado do segundo dado:%d\n",dado2);
    dado3=("%d\n",rand()%6+1);

    printf("\n O numero sorteado do terceiro dado:%d\n",dado3);

    soma=(dado1+dado2+dado3);
    printf("\n Numero da soma:%d\n",soma);
    if(soma==7 || soma==11)
        {
            printf("\n Venceu! \n");
        }

    else
        {
            printf("\n Perdeu! \n");
        }

    return 0;
    }
