#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 1;
    int i = 1;

    while (sum < n)
    {
        sum += i;
        i++;
    }
    cout << "X nho nhat la: " << i - 1;
}