#include <iostream>
#include <cmath>

using namespace std;

// Tìm UCLN/BCNN
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    cout << "Uoc chung lon nhat cua a va b la: " << gcd(a, b) << "\n";
    cout << "Boi chung nho nhat cua a va b la: " << lcm(a, b);
}