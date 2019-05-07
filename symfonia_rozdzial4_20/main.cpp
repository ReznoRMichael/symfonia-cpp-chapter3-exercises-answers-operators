#include <iostream>

using namespace std;

int main()
{
    double aaa;

    cout << (sizeof(aaa)) << endl;
    cout << (sizeof(double)) << endl;
    //cout << (sizeof(double + 2)) << endl; // niepoprawne
    cout << (sizeof(double) + 2) << endl;
    cout << sizeof(int) << endl;

    return 0;
}
