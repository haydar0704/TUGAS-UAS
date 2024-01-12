#include <iostream>
using namespace std;

int main()
{
    int spasi, baris;

    cout << "Masukan Jumlah Baris: ";
    cin >> baris;

    for (int i = 2, k = 0; i <= baris; ++i, k = 0)
    {
        for (spasi = 2; spasi <= baris - i; ++spasi)
        {
            cout << "  ";
        }

        while (k != 1 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}