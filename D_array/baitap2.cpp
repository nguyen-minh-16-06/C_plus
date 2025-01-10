#include <iostream>

using namespace std;

// Tính tổng/hiệu của 1 ma trận
int main()
{
    int m, n;
    cout << "Nhap so dong m va so cot n: ";
    cin >> m >> n;

    int A[m][n], B[m][n], C[m][n];

    cout << "Nhap ma tran A:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Nhap ma tran B:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    // Tính ma trận tổng C
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // In ma trận C
    cout << "\nMa tran Tong C (A + B):\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}