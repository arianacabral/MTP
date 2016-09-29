#include <stdio.h>

struct fracao {
int numerador;
int denominador;
};

struct fracao soma(int numerador1, int numerador2, int denominador1, int denominador2);

int main() {
struct fracao resposta;
int numerador1, denominador1, numerador2, denominador2 ;
printf("\t\t\t Primeira Fracao: \n");
printf("\tEntre com o numerador: ");
scanf("%d",&numerador1);
printf("\tEntre com o denominador: ");
scanf("%d",&denominador1);
printf("\t\t\t Segunda Fracao: \n");
printf("\tEntre com o numerador: ");
scanf("%d",&numerador2);
printf("\tEntre com o denominador: ");
scanf("%d",&denominador2);
resposta = soma (numerador1,numerador2,denominador1,denominador2);
printf("\tSoma: %d/%d \n", resposta.numerador, resposta.denominador);
return 0;
}

struct fracao soma(int numerador1, int numerador2, int denominador1, int denominador2) {
struct fracao resposta;
resposta.numerador = (numerador1*denominador2)+(numerador2*denominador1);
resposta.denominador = (denominador1*denominador2);
return resposta;
}
