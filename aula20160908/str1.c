#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char frase [2048];
    int i;
    printf("\n Digite uma frase ou mensagem: \n");
    gets(frase);
    for(i=0;frase[i];i++)
    {
        frase [i] = toupper(frase[i]);
    }
    printf("\n A frase ou mensagem tem %d caracteres. \n",strlen(frase));

    if ( strncmp (frase, "BOM DIA",7) == 0)
    {
        printf("\n Bom Dia para voce tambem! \n");
    }
    else
    {
        printf("\n Voce quer dizer: %s ?\n", frase);
    }
    return 0;
}
