#include <stdio.h>
int main()
{
	int n, soma=0, aux=1;
	printf("\n Informe um numero \n");
	scanf("%d", & n);
	while (aux<n)
	{
		if (n % aux == 0)
		{
			soma = soma+aux;
		}
		aux=aux+1;
	}
	if (soma == n)
	{
		printf("\n O numero %d e um numero perfeito \n", n);
	}
	else
	{
		printf("\n O numero %d nao e um numero perfeito \n", n);
	}
	return 0;
}
