#include <iostream>
#include <string>

using namespace std;

// Tìm chuỗi ký tự tăng dài nhất khác nhau trong chuỗi và độ dài của nó
int main()
{
    string s;
    cout << "Nhap vao chuoi ki tu: ";
    cin >> s;

    int res = 1;
    int cnt = 1;
    int start = 0;

    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] < s[i + 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > res)
            {
                res = cnt;
                start = i - cnt + 1;
            }
            cnt = 1;
        }
    }

    if (cnt > res)
    {
        res = cnt;
        start = s.length() - cnt;
    }

    cout << "Chuoi tang dai nhat la: " << s.substr(start, res) << "\n";
    cout << "Do dai cua chuoi tang dai nhat la: " << res;

    return 0;
}
