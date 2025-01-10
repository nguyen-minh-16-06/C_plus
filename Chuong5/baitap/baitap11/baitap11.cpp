#include <iostream>

using namespace std;

int main()
{
    // Ở đây m là hàng, n là cột
    int m, n;
    cout << "Nhap m va n: ";
    cin >> m >> n;

    // Câu 1:
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "*  ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 2:
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == m || j == n || j == 0)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Câu 3:
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 != 0 || j % 2 != 0)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }

    return 0;
}