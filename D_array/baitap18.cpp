#include <iostream>
using namespace std;

int main()
{
    int m, n;

    // Nhập số hàng và số cột của ma trận
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    int matrix[10005][10005];

    cout << "Nhap ma tran (m x n): ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan tu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    int num;
    cout << "Nhap mot so nguyen: ";
    cin >> num;

    int count = 0;
    cout << "So " << num << " xuat hien tai vi tri: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == num)
            {
                cout << "[" << i + 1 << "][" << j + 1 << "] ";
                count++;
            }
        }
    }

    if (count == 0)
    {
        cout << "Khong co phan tu nao trong ma tran trung voi so " << num << "\n";
    }
    else
    {
        cout << "So " << num << " xuat hien " << count << " lan trong ma tran." << "\n";
    }

    return 0;
}
