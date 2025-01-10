#include <iostream>

using namespace std;

// Tìm số bị lặp lại đầu tiên trong mảng
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[10005];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu [" << i + 1 << "]: ";
        cin >> a[i];
    }

    int cnt[100005] = {0};
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] == 1)
        {
            cout << a[i];
            ok = 1;
            break;
        }
        cnt[a[i]] = 1;
    }
    if (!ok)
    {
        cout << "-1";
    }

    return 0;
}