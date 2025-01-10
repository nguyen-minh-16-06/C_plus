#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Ket qua 1: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    cout << "Ket qua 2: " << count << "\n";

    if (n < 2)
    {
        cout << "Ket qua 3: khong phai la so nguyen to";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Ket qua 3: La so nguyen to";
    }

    else
    {
        cout << "Ket qua 3: Khong phai la so nguyen to";
    }

    return 0;
}