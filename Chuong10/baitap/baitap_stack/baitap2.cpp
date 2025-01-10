#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void print(int a[], int n)
{
    cout << left;
    cout << setw(12) << "Dia chi" << setw(12) << "Gia tri" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << setw(12) << &a[i] << setw(12) << a[i] << "\n";
    }
}

int capacity(int a[], int n)
{
    int result = sizeof(int) * n;

    return result;
}

int main()
{
    const int n = 5;
    int a[n] = {1, 6, 3, 7, 2};

    cout << "Cau 1: " << "\n";
    print(a, n);

    cout << "Cau 2: " << capacity(a, n) << " bytes" << "\n";

    return 0;
}