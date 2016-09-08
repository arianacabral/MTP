#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char vetor[200];
	int tamanho,i,j,t,m, cont=0;
	printf("\n Digite uma palavra ou frase para verificar se e um palindromo: \n\n");
	fflush(stdin);
	gets(vetor);
	tamanho = strlen(vetor);
	tamanho--;
	for( i=0 ; i <= tamanho ; i++)
	{
		if((vetor[i] >= 32 && vetor[i] <=47)||(vetor[i] >= 58 && vetor[i] <=64) || (vetor[i] >= 91 && vetor[i] <=96) || (vetor[i] >= 123 && vetor[i] <=126))
		{
			t=0;
			for(j=1 ; j <= tamanho-i ; j++)
			{
				vetor[i+t]=vetor[i+j];
				t++;
			}
		tamanho--;
		i--;
		}
	}
	for(i=0 ; vetor[i] != '\0' ; i++)
	{
		if(vetor[i] >= 'A' && vetor [i] <= 'Z')
		{
			vetor[i] = vetor[i] + ('a' - 'A');
		}
	}
	m = tamanho;
	for( j=0 ; j <= tamanho ; j++)
	{
		if(vetor[j] == vetor[m])
			{	cont++;
				m--;
			}
	}
	if(cont == tamanho+1)

    {
        printf("\n A palavra ou frase e um palindromo! \n");
    }

	else
    {
        printf("\n A palavra ou frase nao e um palindromo! \n");

    }
	printf("\n\n");
	return 0;
}
