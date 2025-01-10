#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string tenNguoi1, tenNguoi2;
    cout << "Nhap ten nguoi 1: ";
    getline(cin, tenNguoi1);
    cout << "Nhap ten nguoi 2: ";
    getline(cin, tenNguoi2);

    if (tenNguoi1.length() > tenNguoi2.length())
    {
        cout << "Ket qua 1: " << tenNguoi1 << "\n";
    }
    else
    {
        cout << "Ket qua 1: " << tenNguoi2 << "\n";
    }

    cout << "Ket qua 2: ";
    string kitugiongnhau, daXuatHien;

    for (char c1 : tenNguoi1)
    {
        if (c1 != ' ' && daXuatHien.find(tolower(c1)) == string::npos)
        {
            for (char c2 : tenNguoi2)
            {
                if (tolower(c1) == tolower(c2))
                {
                    kitugiongnhau += c1;
                    daXuatHien += tolower(c1);
                    break;
                }
            }
        }
    }

    for (char c : kitugiongnhau)
    {
        cout << c << " ";
    }
    cout << "\n";

    int i = tenNguoi1.length() - 1;
    while (i >= 0 && tenNguoi1[i] == ' ')
    {
        i--;
    }
    int j = i;
    while (j >= 0 && tenNguoi1[j] != ' ')
    {
        j--;
    }
    string tenCuoi1 = tenNguoi1.substr(j + 1);

    i = tenNguoi2.length() - 1;
    while (i >= 0 && tenNguoi2[i] == ' ')
    {
        i--;
    }
    j = i;
    while (j >= 0 && tenNguoi2[j] != ' ')
    {
        j--;
    }
    string tenCuoi2 = tenNguoi2.substr(j + 1);

    cout << "Ket qua 3: " << tenCuoi1 << " " << tenCuoi2 << "\n";

    return 0;
}