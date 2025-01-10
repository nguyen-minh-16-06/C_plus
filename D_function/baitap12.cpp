#include <iostream>
#include <cmath>

using namespace std;

// Đếm ước của 1 số nguyên
int count(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum += i + (n / i);
            }
            else
            {
                sum += i;
            }
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong uoc cua so nguyen la: " << count(n);

    return 0;
}