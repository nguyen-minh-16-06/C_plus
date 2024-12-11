#include <iostream>
#include <cmath>

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
        cout << "= ";
        int countkq1 = 1;
        int sumkq1 = 0;
        for (int i = 1; i <= n; i++)
        {
            sumkq1 += countkq1;
            countkq1++;
        }
        cout << sumkq1 << "\n";
        //------------------------------------------------------
        cout << "Q(" << n << ") = ";
        for (int i = 1; i <= n; i++)
        {
            if (i < n)
            {
                cout << i << " * ";
            }
            else if (i == n)
            {
                cout << i << " ";
            }
        }
        cout << "= ";
        int countkq2 = 1;
        int sumkq2 = 1;
        for (int i = 1; i <= n; i++)
        {
            sumkq2 *= countkq2;
            countkq2++;
        }
        cout << sumkq2 << "\n";
        //------------------------------------------------------
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
        cout << " = ";
        int sumkq3 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                sumkq3 += i;
            }
        }
        cout << sumkq3 << "\n";
        //------------------------------------------------------
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
        cout << " = ";
        int sumkq4 = 0;
        for (int i = 1; i <= n; i++)
        {
            int countkq4 = i * i * i;
            sumkq4 += countkq4;
        }
        cout << sumkq4 << "\n";
        //------------------------------------------------------
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
        cout << "= ";
        double sumkq5 = 0;
        for (int i = 1; i <= n; i++)
        {
            double pow = 1;
            for (int j = 1; j <= i; j++)
            {
                pow *= i;
            }
            double countkq5 = i / pow;
            sumkq5 += countkq5;
        }
        cout << sumkq5 << "\n";
        //------------------------------------------------------
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
        cout << " = ";
        int sumkq6 = 0;
        for (int i = 1; i <= n; i++)
        {
            sumkq6 += i * (i + 1);
        }
        cout << sumkq6 << "\n";
        //------------------------------------------------------
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
        cout << " = ";
        int sumkq7 = 0;
        int countkq7 = 0;
        for (int i = 1; i <= n; i++)
        {
            countkq7 = countkq7 * 10 + 1;
            sumkq7 += countkq7;
        }
        cout << sumkq7 << "\n";
        //------------------------------------------------------
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
        cout << " = ";
        int sumkq8 = 0;
        int countkq8 = 0;
        for (int i = 1; i <= n; i++)
        {
            countkq8 += i;
            sumkq8 += countkq8;
        }
        cout << sumkq8 << "\n";
    }

    else
    {
        cout << "0";
    }

    return 0;
}