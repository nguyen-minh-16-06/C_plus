#include <iostream>
#include <cmath>

using namespace std;

// Kiểm tra có phải là 1 số chính phương hay không ?
int sochinhphuong(int x)
{
    if (x < 0)
    {
        return 0;
    }
    if (x == sqrt(x) * sqrt(x))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;

    // Sử dụng hàm
    if (sochinhphuong(x))
    {
        cout << x << " la so chinh phuong";
    }
    else
    {
        cout << x << " khong la so chinh phuong";
    }

    // Thủ công bằng tay
    if (x < 0)
    {
        cout << x << " khong la so chinh phuong";
        return 0;
    }

    if (x == sqrt(x) * sqrt(x))
    {
        cout << x << " la so chinh phuong";
    }
    else
    {
        cout << x << " khong la so chinh phuong";
    }

    return 0;
}