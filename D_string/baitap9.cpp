#include <iostream>
#include <string>

using namespace std;

// Cắt một từ trong xâu và in ra mỗi từ trên 1 dòng
int main()
{
    string s;
    cout << "Nhap xau ky tu: ";
    getline(cin, s);

    string word = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if (word != "")
            {
                cout << word << "\n";
                word = "";
            }
        }
    }

    if (word != "")
    {
        cout << word << "\n";
    }

    return 0;
}