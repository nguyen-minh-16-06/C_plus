#include <iostream>
#include <string>

using namespace std;

// Kiểm tra các ký tự có lặp lại trong xâu không
int main()
{
    string c;
    int cnt[26] = {0};
    for (int i = 0; i < c.length(); i++)
    {
        cnt[c[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 1)
        {
            cout << (char)(i + 'A');
        }
    }

    return 0;
}