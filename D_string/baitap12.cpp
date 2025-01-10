#include <iostream>
#include <string>

using namespace std;

// Đảo ngược xâu ký tự
string reverseString(string xaukytu)
{
    int l = 0, r = xaukytu.length() - 1;
    while (l < r)
    {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    return xaukytu;
}

int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    s = reverseString(s);

    cout << "Chuoi dao nguoc: " << s;

    return 0;
}