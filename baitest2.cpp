#include <iostream>
#include <string>

using namespace std;

string trimSpaces(string s)
{
    int start = 0;
    while (start < s.length() && s[start] == ' ')
    {
        start++;
    }

    int end = s.length() - 1;
    while (end >= start && s[end] == ' ')
    {
        end--;
    }
    if (start <= end)
    {
        return s.substr(start, end - start + 1);
    }
    else
    {
        return 0;
    }
}

string removeExtraSpaces(string xaukytu)
{
    int n = xaukytu.length();
    string result = "";

    bool inWord = false;
    for (int i = 0; i < n; i++)
    {
        if (xaukytu[i] != ' ')
        {
            result += xaukytu[i];
            inWord = true;
        }
        else if (inWord)
        {
            result += ' ';
            inWord = false;
        }
    }

    return result;
}

int main()
{
    string s;
    cout << "Nhap 1 xau: ";
    getline(cin, s);

    // Xử lý khoảng trắng đầu và sau
    s = trimSpaces(s);

    // Xử lý khoảng trắng bên trong
    s = removeExtraSpaces(s);

    // Xử lý viết hoa kí tự đầu tiên
    bool cStart = true;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if (cStart)
            {
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (s[i] == c)
                    {
                        int distance = c - 'a';
                        s[i] = 'A' + distance;
                        break;
                    }
                }
                cStart = false;
            }
        }
        else
        {
            cStart = true;
        }
    }
    
    cout << "Xau sau ky xu ly: " << s << "\n";

    // Xử lý lấy tên của 1 người không bao gồm cả họ và tên đệm
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    int j = i;
    while (j >= 0 && s[j] != ' ')
    {
        j--;
    }
    string name = s.substr(j + 1);

    cout << "Ten cua nguoi do: " << name << "\n";

    return 0;
}