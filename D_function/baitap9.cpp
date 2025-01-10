#include <iostream>
#include <cmath>

using namespace std;

// Tìm tổng chữ số của 1 số nguyên (123 = 6)
int sumDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong cua 1 so nguyen la: " << sumDigit(n);

    return 0;
}