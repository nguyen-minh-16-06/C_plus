#include <iostream>

using namespace std;

// Liệt kê các giá trị có xuất hiện trong mảng kèm theo giá trị
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu [" << i + 1 << "]: ";
        cin >> a[i];
    }

    int cnt[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] != 0)
        {
            cout << a[i] << cnt[a[i]];
            cnt[a[i]] = 0;
        }
    }

    return 0;
}