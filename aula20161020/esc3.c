#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    float x;
    float y;
}Ponto;

void salvaPonto(Ponto ponto, char arquivo00[],int npontos);

int main()
{
    Ponto ponto;
    int npontos,i;
    char arquivo00[256];

    printf("Insira o nome do arquivo: ");
    fflush(stdin);
    fgets(arquivo00, 256, stdin);
    arquivo00[strlen(arquivo00)-1]='\0';
    printf("\nInforme a quantidade de pontos desejados: ");
    scanf("%d", &npontos);
    printf("\t\t Pontos ");
    for( i=0; i<npontos; i++)
        {
            printf("\nPonto %d: \n", i+1);
            printf(" *Abscissa X: ");
            scanf("%f",&ponto.x);
            printf(" *Ordenada Y: ");
            scanf("%f",&ponto.y);
            salvaPonto(ponto, arquivo00,npontos);
        }
    return 0;
}

void salvaPonto(Ponto ponto, char arquivo00[],int npontos)

{

	FILE * arquivo01;
	arquivo01 = fopen(arquivo00, "ab");
	fprintf(arquivo01, "\n\t*Ponto:\n");
	fprintf(arquivo01, "\n\tX:%g  Y:%g \n", ponto.x, ponto.y);


	fclose(arquivo01);
}
