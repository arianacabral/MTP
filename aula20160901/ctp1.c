#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
int main()
{
    char frase[256];
    char olheiro;
    int indice =0;
    printf("\n Digite uma frase\n");
    gets(frase);
    olheiro = frase [indice];
    while(olheiro != '\0')
    {
        frase[indice] = tolower(olheiro);
        indice ++;
        olheiro = frase[indice];
    }

    printf ("\n\n %s \n\n", frase);
    return 0;
}
