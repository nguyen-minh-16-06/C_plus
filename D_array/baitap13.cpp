#include <iostream>

using namespace std;

// Tìm số có số lần xuất hiện nhiều nhất trong mảng và in số đó ra
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

    int cnt[10005] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (res < cnt[a[i]])
        {
            res = cnt[a[i]];
        }
    }
    for (int i = 0; i <n; i++)
    {
        if (res == cnt[a[i]])
        {
            cout << a[i] << " ";
            cnt[a[i]] = 0;
        }
    }
}