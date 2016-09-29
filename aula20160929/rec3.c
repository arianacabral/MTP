#include <stdio.h>

int fatorial (int v);
int main()
{
    int fat1, fat2, fat3, n, k, triangulopascal;
    printf("\t\t TRIANGULO DE PASCAL \n\n");
    printf("\t Numero de linhas do TRIANGULO DE PASCAL: ");
    scanf("%d",&n);
    printf("\t Numero de colunas do TRIANGULO DE PASCAL: ");
    scanf("%d",&k);
    fat1 = fatorial (n);
    fat2 = fatorial (k);
    fat3 = fatorial ((n-k));

    triangulopascal = fat1 / (fat2 * fat3);

    printf("\t Resultado: %d", triangulopascal);
    printf("\n\n");
    return 0;

}

int fatorial (int v)
{

    int fatorial = 1, i;
    for(i=2;i<=v;i++)
    {
        fatorial = fatorial *i;
    }

    return fatorial;
}
