#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;

    int x[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu [" << i + 1 << "]: ";
        cin >> x[i];
    }

    // Câu 1:
    float tbcsochan = 0;
    float countsochan = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && i != 0)
        {
            tbcsochan += x[i];
            countsochan++;
        }
    }
    cout << "Ket qua 1: " << tbcsochan / countsochan << "\n";

    // Câu 2:
    float tbcsole = 0;
    float countsole = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            tbcsole += x[i];
            countsole++;
        }
    }
    cout << "Ket qua 2: " << tbcsole / countsole << "\n";

    // Câu 3:
    int _max = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > _max)
        {
            _max = x[i];
        }
    }
    cout << "Ket qua 3: " << _max << "\n";

    // Câu 4:
    int _min = x[0];
    int vitrinhonhat;
    for (int i = 0; i < n; i++)
    {
        if (_min > x[i])
        {
            _min = x[i];
            vitrinhonhat = i;
        }
    }
    cout << "Ket qua 4: " << vitrinhonhat << "\n";

    // Câu 5:
    int countsochinhphuong = 0;
    for (int i = 0; i < n; i++)
    {
        int sochinhphuong = sqrt(x[i]);
        if (x[i] == sochinhphuong * sochinhphuong)
        {
            countsochinhphuong++;
        }
    }
    cout << "Ket qua 5: " << countsochinhphuong << "\n";

    // Câu 6:
    cout << "Ket qua 6: ";
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        if (x[i] < 2)
        {
            continue;
        }

        for (int j = 2; j <= sqrt(x[i]); j++)
        {
            if (x[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << x[i] << " ";
        }
    }
    cout << "\n";

    // Câu 7:
    int temp;
    cout << "Ket qua 7: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        cout << x[i] << " ";
    }

    return 0;
}