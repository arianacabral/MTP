#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int sorteia_dados();

int main()
{
srand(time(0));
int i , soma=0, tentativa = 0;
do{
soma = 0;
for (i = 0; i < 5; i++)
{
sorteia_dados();
soma = soma + sorteia_dados();
}
if(soma >= 21)
{
printf("\n Voce ganhou na %d tentativa!!!\n", tentativa+1);
break;
}
else
{
printf("\n Voce perdeu na %d tentativa!!!\n", tentativa+1 );
}
tentativa++;

} while(tentativa < 3);
return 0;
}

int sorteia_dados()
{
int dado = rand()%6 + 1;
return dado;
}
