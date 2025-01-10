#include <iostream>

using namespace std;

// Đếm chữ số chẵn lẻ của số nguyên
void solve(int n)
{
    int cntl = 0;
    int cntr = 0;
    while (n)
    {
        int r = n % 10;
        if (r % 2 == 0)
        {
            cntl++;
        }
        else
        {
            cntr++;
        }
        n /= 10;
    }
    cout << cntl << " " << cntr;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    solve(n);

    return 0;
}