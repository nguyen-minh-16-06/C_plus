#include <iostream>

using namespace std;

// Tính tổng ma trận của từng cột
int main()
{
    int n, m;
    cout << "Nhap n hang: ";
    cin >> n;
    cout << "Nhap m cot: ";
    cin >> m;

    int matran[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Phan tu thu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matran[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matran[j][i]; 
        }
        cout << sum << "\n";
    }
}