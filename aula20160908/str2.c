#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[256], mensagem[256];
    int j=0, i;
    printf("\n Informe uma frase ou mensagem : \n");
    fgets(frase,256,stdin);
    fflush(stdin);
    mensagem[j]=frase[0];
    j++;
    for(i=0; frase[i]!='\0'; i++)
    {
        if(frase[i]==' ')
        {
            mensagem[j]=frase[i+1];
            j++;
        }
    }
    printf("\n Mensagem : \n %s", mensagem);
    return 0;
}
