#include <iostream>

using namespace std;

// Tính tích của 1 ma trận
int main()
{
    int m, n, p;
    cout << "Nhap so hang cua ma tran A: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran A va so hang cua ma tran B: ";
    cin >> n;
    cout << "Nhap so cot cua ma tran b: ";
    cin >> p;

    int A[100][100], B[100][100];

    cout << "Nhap cac phan tu cua ma tran A:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Nhap cac phan tu cua ma tran B:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMa tran tich C:\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
