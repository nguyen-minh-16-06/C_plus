#include <iostream>

using namespace std;

// Trộn 2 dãy đã sắp xếp thành 1 dãy được sắp xếp
int main()
{
    int n, m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu [" << i + 1 << "]";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu [" << i + 1 << "]";
        cin >> b[i];
    }
    int i = 0, j = 0, cnt = 0, c[n + m];

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            c[cnt] = a[i];
            ++i;
        }
        else
        {
            c[cnt++] = b[j];
            ++j;
        }
    }
    while (i < n)
    {
        c[cnt++] = a[i++];
    }
    while (j < m)
    {
        c[cnt++] = b[j++];
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
}