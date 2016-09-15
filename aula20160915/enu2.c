#include<stdio.h>
#include<stdlib.h>
typedef
enum Meses { janeiro = 1, fevereiro = 2, marco =3, abril =4, maio = 5, junho = 6, julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12}calen;

int main ()
{
   calen xxx;
   printf ("\nInforme o numero do mes que voce nasceu : ");
   scanf("%d",&xxx);
   switch (xxx)
		{
		case janeiro:
			printf("\nVoce nasceu em janeiro\n");
			break;
        case fevereiro:
			printf("\nVoce nasceu em fevereiro\n");
			break;
        case marco:
			printf("\nVoce nasceu em marco\n");
			break;
        case abril:
			printf("\nVoce nasceu em abril\n");
			break;
        case maio:
			printf("\nVoce nasceu em maio\n");
			break;
        case junho:
			printf("\nVoce nasceu em junho\n");
			break;
        case julho:
			printf("\nVoce nasceu em julho\n");
			break;
        case agosto:
			printf("\nVoce nasceu em agosto\n");
			break;
        case setembro:
			printf("\nVoce nasceu em setembro\n");
			break;
        case outubro:
			printf("\nVoce nasceu em outubro\n");
			break;
        case novembro:
			printf("\nVoce nasceu em novembro\n");
			break;
        case dezembro:
			printf("\nVoce nasceu em dezembro\n");
			break;
		}

   return 0;
}
