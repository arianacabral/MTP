#include<stdio.h>
#include<stdlib.h>
enum Meses { janeiro = 1, fevereiro = 2, marco =3, abril =4, maio = 5, junho = 6, julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12};

int main ()
{
   enum Meses xxx;
   printf ("\nInforme o numero do mes que voce nasceu : ");
   scanf("%d",xxx);
   switch (xxx)
		{
		case janeiro:
			printf("\nVoce nasceu em JANEIRO\n");
			break;
        case fevereiro:
			printf("\nVoce nasceu em FEVEREIRO\n");
			break;
        case marco:
			printf("\nVoce nasceu em MARCO\n");
			break;
        case abril:
			printf("\nVoce nasceu em ABRIL\n");
			break;
        case maio:
			printf("\nVoce nasceu em MAIO\n");
			break;
        case junho:
			printf("\nVoce nasceu em JUNHO\n");
			break;
        case julho:
			printf("\nVoce nasceu em JULHO\n");
			break;
        case agosto:
			printf("\nVoce nasceu em AGOSTO\n");
			break;
        case setembro:
			printf("\nVoce nasceu em SETEMBRO\n");
			break;
        case outubro:
			printf("\nVoce nasceu em OUTUBRO\n");
			break;
        case novembro:
			printf("\nVoce nasceu em NOVEMBRO\n");
			break;
        case dezembro:
			printf("\nVoce nasceu em DEZEMBRO\n");
			break;
		}

   return 0;
}
