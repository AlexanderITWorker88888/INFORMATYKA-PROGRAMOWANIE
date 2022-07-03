#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand( time( NULL ) );
    int tablica[ 5 ];
      "Totolotek!" << endl << endl;
    for( int i = 0; i < 6; i++ )
    {
        tablica[ i ] = rand() % 49 + 1;
        cout << tablica[ i ] << " ";
    }
}
