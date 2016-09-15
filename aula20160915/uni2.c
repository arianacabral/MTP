#include<stdio.h>
union Uniao{
    int i;
    float f;
};
int main()
{
    union Uniao numero;
    char opcao;
    do{
        printf("\n Deseja entrar com INTEIRO (i)nt ou PONTO FLUTUANTE (f)loat? ");
        scanf("%c",&opcao);
        fflush(stdin);
    }while(opcao!='i'&&opcao!='I'&&opcao!='f'&&opcao!='F');
    if(opcao=='i'||opcao=='I')
    {
        printf("\n Informe o int: ");
        scanf("%d",&numero.i);
        printf("\n Valor como float: %e\n",numero.f);
    }else{printf("\n Informe o float: ");
        scanf("%f",&numero.f);
        printf("\n Valor como int: %d\n",&numero.i);

    }
}
