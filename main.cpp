#include <iostream>
//Napisa� "gr� w lotto". U�ytkownik wprowadza (typuje) 6 r�nych liczb
//ca�kowitych z zakresu od 1 do 49. Program losuje 6 liczb z
//tego samego zakresu (musi by� to losowanie bez powt�rze�!),
 //a nast�pnie informuje u�ytkownika ile liczb wytypowa� prawid�owo.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int kupon[6];
    cout << "Podaj 6 roznych liczb z zakresu od 1 - 49" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj " << i+1 << " liczbe:";
        cin >> kupon[i];
    }
    srand(time(NULL));
    int los[6];
    bool powtorzenia;
    for ( int i = 0; i < 6; i++)
    {
        powtorzenia = true;
        while(powtorzenia)
        {
            powtorzenia = false;
            los[i] = rand()%49 + 1;
            for (int j = 0; j < i; j++)
              if (los[i] == los[j])
                {
                  powtorzenia = true;
                   break;
                }

        }

    }
    cout << "Wylosowane liczby to:" << endl << endl;
    for ( int i = 0; i < 6; i++)
    cout << los[i] << " ";
    int licznik = 0;
    for (int i = 0; i < 6; i++)
    for (int j = 0; j < 6; j++)
    if (kupon[i]== los[j])
    {
       licznik++;
       break;
    }
    cout << "\n\nWytypowales dobrze " << licznik << " liczb\n";
    return 0;
}
