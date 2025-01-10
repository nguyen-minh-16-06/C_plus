#include <iostream>

using namespace std;

int main()
{
    int thang;
    cout << "Nhap thang: ";
    cin >> thang;

    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        cout << "Ket qua: Quy 1";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Ket qua: Quy 2";
        break;
    case 7:
    case 8:
    case 9:
        cout << "Ket qua: Quy 3";
        break;
    case 10:
    case 11:
    case 12:
        cout << "Ket qua: Quy 4";
        break;
    case 13:
        cout << "Ket qua: Khong co thang 13";
        break;
    }
}