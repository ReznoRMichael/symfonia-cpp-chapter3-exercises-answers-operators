#include <iostream>

using namespace std;

int main()
{
    int ddd = 3;
    ddd <<= 10; // przesuwamy w lewo bity o 10 miejsc, czyli mno¿ymy *1024
    cout << ddd << endl;
    return 0;
}
