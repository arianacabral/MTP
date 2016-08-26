#include<stdio.h>
#include<time.h>
int main()
{
    srand (time (0));
    int n,v,i=0;

    v = ("%d", rand()%100);

    do
    {
        printf("\n Informe um numero de 0 a 99 \n");
        scanf("%d",&n);

        if(0<=n<100)
            {
                if (n<v)
                {
                    printf("\n BAIXO! \n");
                    i++;
                }
                else
                    if (n>v)
                    {
                        printf("\n ALTO! \n");
                        i++;
                    }
                    else
                        {
                            printf("\n ACERTOU! \n");
                            break;
                        }
            }
    } while (n!=v);

    printf("\n Numero de tentativas %d",i+1);
    return 0;
}
