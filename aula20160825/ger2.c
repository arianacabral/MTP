#include<stdio.h>
#include<time.h>
int main()
{
    srand (time (0));
    int n,v;

    v = ("%d", rand()%100);
    printf("\n Numero sorteiado %d\n",v);

    do
    {
        printf("\n Informe um numero de 0 a 99 \n");
        scanf("%d",&n);

        if(0<=n<100)
            {
                if (n<v)
                {
                    printf("\n BAIXO! \n");
                }
                else
                    if (n>v)
                    {
                        printf("\n ALTO! \n");
                    }
                    else
                        {
                            printf("\n ACERTOU! \n");
                            break;
                        }
            }
    } while (n!=v);
    return 0;
}
