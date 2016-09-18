#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char frase[256];
    int i, cod;
    printf("\n Informe uma frase ou mensagem: \n");
    fgets(frase,256,stdin);
    fflush(stdin);
    for(i=0; frase[i]!='\0'; i++)
    {
        cod=frase[i];
        if(frase[i]<=13)
            frase[i]==cod+13;
        else
            frase[i]==cod-13;
    }
    printf("\n Mensagem e: \n %s", frase);
    return 0;
}
