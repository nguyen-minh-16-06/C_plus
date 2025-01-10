#include <iostream>
#include <cmath>

using namespace std;

// Kiểm tra có phải là 1 số hoàn hảo hay không ?
int isPerfect(int n)
{
    int tong = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tong += i;
            if (i != n / i)
            {
                tong += n / i;
            }
        }
    }

    if (tong == n && n != 1)
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

    // Sử dụng hàm (duyệt qua n phần tử)
    for (int i = 1; i <= n; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " la so hoan hao" << "\n";
        }
    }

    // Thủ công bằng tay (Kiểm tra xem số nhập vào có phải là số hoàn hảo hay không)
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
        cout << n << " la so hoan hao";
        return 0;
    }
    else
    {
        cout << n << " khong phai so hoan hao";
    }

    return 0;
}