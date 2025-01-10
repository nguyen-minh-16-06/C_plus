#include <iostream>

using namespace std;

// Liệt kê các giá trị xuất hiện trong mảng (chỉ xuất hiện 1 lần nếu lần sau có xuất hiện)
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

    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                cnt = 0;
                break;
            }
        }
        if (cnt)
        {
            cout << cnt[i] << " ";
        }
    }

    return 0;
}