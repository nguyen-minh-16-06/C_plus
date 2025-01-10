#include <iostream>

using namespace std;

int main()
{
    int A1[] = {5, 9, 12, 3, 7, 11, 2};
    int A2[] = {8, 2, 0, 13, 7, 6, 9};

    int n1 = sizeof(A1) / sizeof(A1[0]);
    int n2 = sizeof(A2) / sizeof(A2[0]);

    cout << "Ket qua 1: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (A1[i] == A2[j])
            {
                cout << A1[i] << " ";
                break;
            }
        }
    }
    cout << "\n";

    int B[n1 + n2];

    cout << "Ket qua 2: ";
    int so_pt = 0;
    for (int i = 0; i < n1; i++)
    {
        B[so_pt] = A1[i];
        so_pt++;
    }
    for (int i = 0; i < n2; i++)
    {
        B[so_pt] = A2[i];
        so_pt++;
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        for (int j = i + 1; j < n1 + n2; j++)
        {
            if (B[j] < B[i])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    int result[so_pt];
    int resultSize = 0;

    for (int i = 0; i < so_pt; i++)
    {
        if (i == 0 || B[i] != B[i - 1])
        {
            result[resultSize] = B[i];
            resultSize++;
        }
    }

    for (int i = 0; i < resultSize; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}