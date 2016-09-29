#include<stdio.h>

int Soma (int A[], int N);
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("\n\t Soma: %d \n\n",Soma(A,N));
    return 0;
}

int Soma (int A[], int N)
{
    int resultado = 0, i;
    for (i=0; i<N; i++)
    {
        resultado = resultado + A[i];
    }
    return resultado;
}
