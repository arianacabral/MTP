#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor[] = {0,1,2,4,8};
    int cont =0;
    //int tamanho = sizeof(vetor)/sizeof(int);
    unsigned char *p = NULL, *q;//o ponteiro n�o est� apontando para nada // inicializa��o de ponteiro
    p = q = (unsigned char *) vetor;//vetor sozinho j� endere�o // &vetor[0]
    for(;p < q + sizeof(vetor); p++)
    {
        if (*p == 0x0)
        {
            cont ++;
        }
        printf("%p : %X\n", p, *p);

    }
    printf("  O numero de bites apenas com o's: %d\n",cont);
    return 0;
}

