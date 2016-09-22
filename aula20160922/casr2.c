#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

void q(int a,float p,char c);
void pgetchar() {
  int c;
  while((c = getchar()) != EOF && c != '\n');
}

int main()
{
  int inteiro;
  float pontoflu;
  char c;
  scanf("%d",&inteiro);
  scanf("%f",&pontoflu);
  pgetchar();
  c=getchar();
  q(inteiro,pontoflu,c);
  return 0;
}
void q(int a,float p,char c)
{
    printf("Inteiro ao quadrado %d\n",a*a);
    printf("Raiz float %.3f\n",sqrt(p));
    if(c>65 && c<90)
        printf("Caracter: %c\n",c+32);

    if(c>97 && c<122)
        printf("Caracter: %c\n",c-32);
}
