#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Tính tổng các số xuất hiện trong xâu
int main()
{
    string s;
    cout << "Nhap xau ky tu: ";
    cin >> s;

    int sum = 0;
    int res = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            res = (res * 10) + s[i] - '0';
        }
        else
        {
            sum += res;
            res = 0;
        }
    }

    if (isdigit(s[s.length() - 1]))
    {
        sum += res;
    }

    cout << sum;

    return 0;
}