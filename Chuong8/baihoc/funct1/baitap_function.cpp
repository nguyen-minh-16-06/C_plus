#include <iostream>

using namespace std;

void phepTinh(int a, int b, char x)
{
    if (x == '/')
    {
        if (b == 0)
        {
            cout << "Sao chia day thim";
        }
        cout << "kq = " << a / b << "\n";
    }
    else if (x == '+')
    {
        cout << "kq = " << a + b << "\n";
    }
    else if (x == '-')
    {
        cout << "kq = " << a - b << "\n";
    }
    else if (x == '*')
    {
        cout << "kq = " << a * b << "\n";
    }
    else
    {
        cout << "Phep tinh tao lao !" << "\n";
    }
}

int main()
{
    int a, b;
    char c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    phepTinh(a, b, c);

    return 0;
}