#include <iostream>
#include <cmath>

using namespace std;

// Kiểm tra số Fibonacci bằng đệ quy
int solve(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return solve(n - 1) + solve(n - 2);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Day Fibonacci: ";
    for (int i = 0; i < n; i++)
    {
        cout << solve(i) << " ";
    }

    return 0;
}