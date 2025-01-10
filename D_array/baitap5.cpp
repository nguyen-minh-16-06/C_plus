#include <iostream>

using namespace std;

// Tìm số có số lần xuất hiện nhiều nhất trong mảng, in số đó và số lần xuất hiện ra đó
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

    int dem = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] > dem)
        {
            dem = cnt[a[i]];
            res = a[i];
        }
        // TH nếu số đó có cùng số lần xuất hiện lớn nhất trong mảng thì xoá điều kiện dưới
        else if (cnt[a[i]] == dem)
        {
            if (res > a[i])
            {
                res = a[i];
            }
        }
    }
    cout << "So xuat hien nhieu nhat la " << res << " voi so lan xuat hien la:  " << dem;
}