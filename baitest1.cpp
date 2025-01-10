#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu co trong mang: ";
    cin >> n;

    const int MAX = 100;
    int a[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap so phan tu thu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        cout << "Tong cua hang " << i + 1 << " la: " << sum << "\n";
    }

    int sumEven = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                sumEven += a[i][j];
            }
        }
    }
    cout << "Tong cac so chan cua ma tran la: " << sumEven << "\n";

    return 0;
}