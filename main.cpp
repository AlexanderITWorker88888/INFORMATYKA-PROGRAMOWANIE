#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
  {
    srand( time( NULL ) );
    int tablica[ 6 ];
    int x;
    cout << "Totolotek!" << endl << endl;
    for( int i = 0; i < 6; i++ )
    {
        do
        {
            x =( rand() % 49 ) + 1;
        }
        while(( tablica[ 0 ] == x ) ||( tablica[ 1 ] == x ) ||( tablica[ 2 ] == x ) ||( tablica[ 3 ] == x ) ||( tablica[ 4 ] == x ) ||( tablica[ 5 ] == x ) );

        tablica[ i ] = x;

        cout << tablica[ i ] << " ";
    }
    cin.get();
    return 0;
}
