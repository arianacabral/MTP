#include<stdio.h>

#define MOSTRA(B) ({printf ("%s\n", (B)?"Verdadeiro":"Falso"); })
typedef enum {false = 0, true = 1} bool;
int main () {
    bool V = true;
    bool F = false;
    MOSTRA (V);
    MOSTRA (F);
    MOSTRA (2>3);
    MOSTRA (2<3);
    MOSTRA (2==3);
    MOSTRA (2!=3);
    MOSTRA (2<=3);
    MOSTRA (2>=3);
    return 0;
}
