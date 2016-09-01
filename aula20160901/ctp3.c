#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char frase [500];
    int i,numeroletras;
    printf("\n Digite uma mensagem \n");
    gets (frase);

    for(i=0; frase[i]!='\0';i++)
    {
        if (isalpha(frase[i]))
        {
            numeroletras = i;

        }
    }

    printf("\n A mensagem tem %d letras",numeroletras);
    return 0;
}
