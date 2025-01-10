#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, y;
    cout << "Nhap n: ";
    cin >> n;

    if (n < 0)
    {
        cout << n << " khong phai la so chinh phuong.";
    }

    // Cách 1: Khai báo biến y và gán = căn bậc 2 của n.
    y = sqrt(n);
    if (n == y * y)
    {
        cout << n << " la so chinh phuong.";
    }

    // Cách 2: Không cần khai báo biến y.
    // if (n == (sqrt(n) * sqrt(n)))
    // {
    //     cout << n << " la so chinh phuong.";
    // }

    else
    {
        cout << n << " khong phai la so chinh phuong.";
    }
}