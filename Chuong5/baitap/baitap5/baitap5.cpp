#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }

    if (sum == n & n != 1)
    {
        cout << "Ket qua: " << n << " la so hoan hao";
        return 0;
    }
    else
    {
        cout << "Ket qua: " << n << " khong phai so hoan hao";
    }

    return 0;
}