#include <iostream>
using namespace std;

int arr[56];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 56)
        {
            break;
        }
        else
        {
            cout << "\nMaksimum panjang array yang dapat dimasukkan adalah 20" << endl;
        }
    }
    cout << endl;
    cout << "================================================" << endl;
    cout << "===========Masukkan Element Array===============" << endl;
    cout << "================================================" << endl;

    for (int i = 0; i < n; i++)
}

