#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap mang so nguyen: ";
    cin >> n;

    int x[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu [" << i + 1 << "] la: ";
        cin >> x[i];
    }

    cout << "Mang da nhap la: ";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << "\n";

    cout << "Cau 1: Mang theo thu tu dao nguoc: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << x[i] << " ";
    }
    cout << "\n";

    cout << "Cau 2: Tong vi tri dau va cuoi cua mang la: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            sum += x[i];
        }
    }
    cout << sum;
    cout << "\n";

    if (n % 2 == 0)
    {
        cout << "Cau 3: Hai phan tu nam chinh giua mang la: " << x[(n / 2) - 1] << " va " << x[n / 2];
    }
    else
    {
        cout << "Cau 3: Phan tu nam chinh giua mang la: " << x[n / 2];
    }
    cout << "\n";

    int sumchan = 0;
    int sumle = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            sumchan += x[i];
        }
        else
        {
            sumle += x[i];
        }
    }
    cout << "Cau 4: Tich tong cac so le va so chan la: " << sumchan * sumle;

    return 0;
}