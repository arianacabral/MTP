#include<stdio.h>
#include<ctype.h>
int main()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    int contador=0;
    printf("\n Digite uma mensagem: \n");
    gets(frase);
    olheiro = frase[indice];
    while(olheiro !='\0')
        {
            if(isalpha(olheiro))
            {
                contador++;
            }
            indice ++;
            olheiro = frase[indice];

}
printf("\n a mensagem possui %d letras\n", contador);
return 0;
}
