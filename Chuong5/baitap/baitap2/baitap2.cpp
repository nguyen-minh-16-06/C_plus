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
        for (int i = 1; i <= n ; i++)
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
        for (int i = 0; i < n; i++)
        {
            
        }
        

    }

    else
    {
        cout << "0";
    }

    return 0;
}