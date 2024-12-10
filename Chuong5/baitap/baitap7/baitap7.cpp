#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int f;
        if (i >= 5)
        {
            f = ((2 * pow(i, 2)) + (5 * i) + 9);
        }
        else
        {
            f = ((-2) * pow(i, 2) + (4 * i) - 9);
        }
        sum += f;
    }

    cout << "Ket qua: " << sum;

    return 0;
}