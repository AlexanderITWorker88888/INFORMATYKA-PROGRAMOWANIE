/* Liczby do toto-lotka */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a1=0,a2=0,a3=0,a4=0,a5=0,
        liczba, numer, nowa;
    srand(time(NULL));
    numer = 0;
    nowa = 0;
    printf("Liczby do toto-lotka: ");
    while ( numer<6 ) {
        liczba = rand() % 49 + 1;
        nowa=0;
        if (liczba!=a1 && liczba!=a2 && liczba!=a3 && liczba!=a4 && liczba!=a5)
            nowa = 1;
        if (nowa) {
            printf("   %d", liczba);
            numer=numer+1;
            if (numer==1) a1=liczba;
            else
            if (numer==2) a2=liczba;
            else
            if (numer==3) a3=liczba;
            else
            if (numer==4) a4=liczba;
            else
            if (numer==5) a5=liczba;
        }
    }
    printf("\n");
    return 0;
}
