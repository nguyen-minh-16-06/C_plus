#include <iostream>
#include <cctype>

using namespace std;

// In các ký tự có chữ cái thường
int main()
{
    string s;
    cout << "Nhap xau ky tu: ";
    getline(cin, s);

    int cnt[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            cout << (char)(i + 'a') << " " << cnt[i] << "\n";
        }
    }

    return 0;
}