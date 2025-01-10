#include <iostream>
#include <cmath>

using namespace std;

// Tính tổng ước của số nguyên
int count(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                cnt += 2;
            }
            else
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong uoc cua so nguyen la: " << count(n);

    return 0;
}