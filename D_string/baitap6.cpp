#include <iostream>
#include <cctype>

using namespace std;

// In tần suất xuất hiện của các kí tự mà không phân biệt chữ cái hoa/thường
int main()
{
    string s;
    cout << "Nhap xau ky tu: ";
    getline(cin, s);

    int cnt[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            cout << (char)i << " " << cnt[i] << "\n";
        }
    }

    return 0;
}