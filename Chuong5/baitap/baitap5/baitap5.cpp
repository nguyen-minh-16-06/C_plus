#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        cout << "Ket qua: la so hoan hao";
        return 0;
    }
    
    else
    {
        cout << "Ket qua: khong phai so hoan hao";
    }
    
    return 0;
}