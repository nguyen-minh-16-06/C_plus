#include <iostream>
#include <cmath>

using namespace std;

// Kiểm tra xem có phải là 1 số nguyên tố hay không ?
int isPrimeNumber(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Sử dụng hàm
    if (isPrimeNumber(n))
    {
        cout << n << " la so nguyen to" << "\n";
    }
    else
    {
        cout << n << " khong phai la so nguyen to" << "\n";
    }

    // Thủ công bằng tay
    if (n < 2)
    {
        cout << n << " khong phai la so nguyen to" << "\n";
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
        cout << n << " la so nguyen to" << "\n";
    }
    else
    {
        cout << n << " khong phai la so nguyen to" << "\n";
    }

    // Duyệt mảng
    int m;
    cout << "Nhap so phan tu trong mang: ";
    cin >> m;

    int a[100];

    for (int i = 0; i < m; i++)
    {
        cout << "Nhap phan tu thu [" << i + 1 << "]: ";
        cin >> a[i];
    }

    cout << "Cac so nguyen to la: ";
    for (int i = 0; i < m; i++)
    {
        bool isPrimenumber = true;
        if (a[i] < 2)
        {
            continue;
        }

        for (int j = 2; j <= sqrt(a[i]); j++)
        {
            if (a[i] % j == 0)
            {
                isPrimenumber = false;
                break;
            }
        }

        if (isPrimenumber)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}