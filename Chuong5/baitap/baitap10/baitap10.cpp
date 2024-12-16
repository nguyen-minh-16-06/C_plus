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
        if (i % 2 == 0)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << j << "  ";
            }
        }
        else
        {
            for (int j = n; j >= 0; j--)
            {
                cout << j << "  ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 2:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n || j == 0 || j == n)
            {
                cout << "1  ";
            }
            else
            {
                cout << "0  ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 3:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == i)
            {
                cout << "0  ";
            }
            else
            {
                cout << "1  ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 4:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == i || j == (n - i))
            {
                cout << "0  ";
            }
            else
            {
                cout << "1  ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 5:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "0  ";
                }
                else
                {
                    cout << "1  ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "1  ";
                }
                else
                {
                    cout << "0  ";
                }
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 6:
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == i)
            {
                cout << "0  ";
            }
            else
            {
                cout << abs(j - i) << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}