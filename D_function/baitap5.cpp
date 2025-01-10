#include <iostream>
#include <cmath>

using namespace std;

// Tính giai thừa của 1 số
int gt(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Giai thua cua: " << n << " la: " << gt(n);

    return 0;
}