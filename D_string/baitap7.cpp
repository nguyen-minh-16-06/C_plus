#include <iostream>

using namespace std;

// Kiểm tra chuỗi có đối xứng hay không
int check(string x)
{
    int l = 0, r = x.length()-1;
    while (l <= r)
    {
        if(x[l] != x[r])
        {
            return 0;
        }
        else
        {
            ++l;
            --r;
        }
    }
    return 1;
}

int main()
{
    string s;
    cout << "Nhap xau ky tu: ";
    cin >> s;

    if (check(s))
    {
        cout << "Xau doi xung";
    }
    else
    {
        cout << "Xau khong doi xung";
    }

    return 0;
}