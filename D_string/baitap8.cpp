#include <iostream>
#include <string>

using namespace std;

// Xuất chuỗi dưới dạng mỗi từ một dòng

int main()
{
    string s;
    cout << "Nhap xau ki tu: ";
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