#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void roboEd();
int main()
{
    char msg[256];
    srand(time(0));
    printf("\n ** Ola, Tudo bem? Quer conversar\n ");
    do{
        fgets(msg,sizeof(msg),stdin);
        roboEd();
    }while(strncmp(msg,"tchau",5)!=0);
    printf("\n ** Ate a proxima vez\n ");
    return 0;
}
void roboEd()
{
    int qf=rand()%7;
    switch(qf)
    {
        case 0: printf("\n ** Tudo bem? \n");break;
        case 1: printf("\n ** OK \n");break;
        case 2: printf("\n ** LOL!\n");break;
        case 3: printf("\n ** Que legal\n");break;
        case 4: printf("\n ** Que chato\n");break;
        case 5: printf("\n ** Fale mais sobre isso");break;
        case 6: printf("\n ** Sobre o que quer falar?\n");
    }
}
