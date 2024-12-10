#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n > 1)
    {
        cout << "P(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
            {
                cout << i << " + ";
            }
            else if (i == n)
            {
                cout << i << " ";
            }
        }
        cout << "\n";

        cout << "Q(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
            {
                cout << i << " * ";
            }
            else if (i == n)
            {
                cout << i << "";
            }
        }
        cout << "\n";

        cout << "R(" << n << ") = ";
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                count++;
            }
        }

        int current = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                current++;
                cout << i;
                if (current < count)
                {
                    cout << " + ";
                }
            }
        }
        cout << "\n";

        cout << "S(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
            {
                cout << i << "^3 + ";
            }
            else if (i == n)
            {
                cout << i << "^3";
            }
        }
        cout << "\n";

        cout << "T(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
            {
                cout << i << "/" << i << "^" << i << " + ";
            }
            else
            {
                cout << i << "/" << i << "^" << i << " ";
            }
        }
        cout << "\n";

        cout << "U(" << n << ") = ";
        int icurrent = 1;
        for (int i = 0; i < n; i++)
        {
            cout << icurrent << " * " << icurrent + 1;
            if (i < n - 1)
            {
                cout << " + ";
            }
            icurrent++;
        }
        cout << "\n";

        cout << "V(" << n << ") = ";
        int currentNumber = 1;
        for (int i = 1; i <= n; i++)
        {
            cout << currentNumber;
            if (i < n)
            {
                cout << " + ";
            }
            currentNumber = currentNumber * 10 + 1;
        }
        cout << "\n";

        cout << "X(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i > 1)
            {
                cout << " + ";
            }
            if (i == 1)
            {
                cout << "1";
            }
            else
            {
                cout << "(";
                for (int j = 1; j <= i; j++)
                {
                    cout << j;
                    if (j < i)
                    {
                        cout << " + ";
                    }
                }
                cout << ")";
            }
        }
    }

    else
    {
        cout << "0";
    }

    return 0;
}