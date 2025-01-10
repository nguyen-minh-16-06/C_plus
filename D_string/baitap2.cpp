#include <iostream>
#include <string>

using namespace std;

// Kiểm tra ký tự nào có trong cả xâu 1 và xâu 2
int main()
{
    string c1, c2;
    cout << "Nhap xau 1: ";
    getline(cin, c1);
    cout << "Nhap xau 2: ";
    getline(cin, c2);

    int cnt[256] = {0};

    for (int i = 0; i < c1.length(); i++)
    {
        cnt[c1[i]] = 1;
    }
    for (int i = 0; i < c2.length(); i++)
    {
        if (cnt[c2[i]])
        {
            cnt[c2[i]] = 2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] == 2)
        {
            cout << "Xuat hien trong ca c1 va c2: " << (char)i << "\n";
        }
    }

    return 0;
}