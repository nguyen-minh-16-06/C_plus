#include <iostream>
#include <cctype>

using namespace std;

// Kiểm tra ký tự nào xuất hiện nhiều nhất trong xâu
int main()
{
    string c;
    cout << "Nhap ki tu: ";
    getline(cin, c);

    // Khởi tạo 1 mảng có 255 phần tử đều là 0
    int cnt[256] = {0};
    for (int i = 0; i < c.length(); i++)
    {
        cnt[c[i]]++;
    }

    int res = 0;
    char kt;
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i])
        {
            if (cnt[i] >= res)
            {
                res = cnt[i];
                kt = (char)i;
            }
        }
    }
    cout << kt;

    return 0;
}