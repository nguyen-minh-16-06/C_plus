#include <iostream>

using namespace std;

// Viết chương trình nhập vào một mảng, hãy xuất ra màn hình phần tử lớn/ nhỏ nhất, tổng của phần tử trong mảng
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[10005];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "Phan tu lon nhat: " << max << "\n";
    cout << "Phan tu nho nhat: " << min << "\n";
    cout << "Tong cac phan tu trong mang: " << sum << "\n";

    return 0;
}
