#include <iostream>
#include <cmath>

using namespace std;

// Kiểm tra số thuận nghịch
int tn(int n)
{
    int rev = 0;
    int m = n;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == m)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (tn(n))
    {
        cout << n << " la so thuan nghich";
    }
    else
    {
        cout << n << " ko la so thuan nghich";
    }

    return 0;
}