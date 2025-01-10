#include <iostream>
using namespace std;

int main()
{
    int n;

    while (n <= 0)
    {
        cout << "Nhap n: ";
        cin >> n;
    }

    int a[100];
    bool valid = true;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a[i];

        if (i > 0 && a[i] <= a[i - 1])
        {
            valid = false;
            break;
        }
    }

    if (!valid)
    {
        cout << "Sai quy cach, nhap lai" << "\n";
        return 1;
    }

    cout << "Day so ban dau: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int new_num;
    cout << "Nhap so moi: ";
    cin >> new_num;

    int pos = n;
    for (int i = 0; i < n; i++)
    {
        if (new_num <= a[i])
        {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = new_num;

    cout << "Day so sau khi chen: ";
    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
