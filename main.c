#include <stdio.h>
#include <stdlib.h>

int main() {
int liczba, n = 7;
while (n) {
printf(‘‘Liczba do toto-lotka: %d’’,
rand() % 49 + 1);
n = n-1;
}
return 1;
}
