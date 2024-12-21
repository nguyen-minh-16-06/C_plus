#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    cout << "Nhap so phan tu con trong mang con: ";
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

    cout << "Ma tran da nhap la: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matran[i][j] << " ";
        }
        cout << "\n";
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += matran[i][j];
        }
    }
    cout << "Ket qua 1: " << sum << "\n";

    //------------------------------------------------------------------
    int max = matran[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < matran[i][j])
            {
                max = matran[i][j];
            }
        }
    }
    cout << "Ket qua 2: " << max << "\n";

    //------------------------------------------------------------------
    int arraybetter = 0;
    int indexbetter = 0;
    for (int i = 0; i < n; i++)
    {
        int sumj = 0;
        for (int j = 0; j < m; j++)
        {
            sumj += matran[i][j];
        }

        if (sumj > arraybetter)
        {
            arraybetter = sumj;
            indexbetter = i;
        }
    }

    cout << "Ket qua 3: ";
    for (int j = 0; j < m; j++)
    {
        cout << matran[indexbetter][j] << " ";
    }
    cout << "\n";

    //------------------------------------------------------------------
    bool foundPrime = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool isPrime = true;
            if (matran[i][j] < 2)
            {
                isPrime = false;
            }
            else
            {
                for (int k = 2; k <= sqrt(matran[i][j]); k++)
                {
                    if (matran[i][j] % k == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime)
            {
                cout << "Ket qua 4: " << matran[i][j];
                foundPrime = true;
                break;
            }
        }
        if (foundPrime)
        {
            break;
        }
    }

    if (!foundPrime)
    {
        cout << "Ko ton tai so nguyen to nao trong mang";
    }

    return 0;
}