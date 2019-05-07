#include <iostream>

using namespace std;

int main()
{
    char lit='A';
    int ile=2;
    int maxi=26;

    for (int i=1; i<=maxi; i++)
    {
        cout << lit;

        if(i % ile)
        {
            cout << " ";
        }
        else
        {
            cout << "\n";
        }

        if(lit=='H')
        {
            cout << "Po ile liter w rzedzie dalej wypisywac?\n"
                    "[Podaj liczbe calkowita]\n";
            cin >> ile;
            i-=8;
            maxi-=8;
        }
        lit++;

    }

    return 0;
}
