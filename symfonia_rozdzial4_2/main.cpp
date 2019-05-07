#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=100; i++)
    {
        cout << i;

        if(i % 10)
        {
            cout << " ";
        }
        else
        {
            cout << "\nZakonczona dziesiatka.\n";
        }
    }

    return 0;
}
