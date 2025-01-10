#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Câu 1:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "0 ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 2:
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == i || j == n || i == 0)
            {
                cout << " 1";
            }
            else if (j >= i)
            {
                cout << " 0";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}