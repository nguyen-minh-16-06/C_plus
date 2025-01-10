#include <iostream>

using namespace std;

int main()
{
    int h, m, s;

    cout << "Nhap gio: ";
    cin >> h;

    cout << "Nhap phut: ";
    cin >> m;

    cout << "Nhap giay: ";
    cin >> s;

    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        cout << "Ket qua: hop le.";
    }

    else
    {
        cout << "Ket qua: Khong hop le.";
    }
}