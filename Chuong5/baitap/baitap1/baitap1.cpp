#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Ket qua 1: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
    
    cout << "Ket qua 2: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";

    cout << "Ket qua 3: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";

    cout << "Ket qua 4: ";
    for (int i = -n; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}