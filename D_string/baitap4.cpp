#include <iostream>
#include <string>

using namespace std;

// Kiểm tra ký tự nào thuộc trong xâu 1 và xâu 2
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
        cnt[c2[i]] = 1;
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            cout << (char)i << " ";
        }
    }

    return 0;
}