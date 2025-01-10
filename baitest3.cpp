#include <iostream>
#include <string>

using namespace std;

string trimSpaces(string str)
{
    int start = 0;
    while (start < str.length() && str[start] == ' ')
    {
        start++;
    }

    int end = str.length() - 1;
    while (end >= start && str[end] == ' ')
    {
        end--;
    }

    if (start <= end)
    {
        return str.substr(start, end - start + 1);
    }
    else
    {
        return 0;
    }
}

string removeExtraSpaces(string str)
{
    int n = str.length();
    string result = "";
    bool inWord = false;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
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
    string name;
    cout << "Nhap ho ten: ";
    getline(cin, name);

    name = trimSpaces(name);

    name = removeExtraSpaces(name);

    string nameUpper = name;
    for (int i = 0; i < nameUpper.length(); i++)
    {
        nameUpper[i] = toupper(nameUpper[i]);
    }

    string nameLower = name;
    for (int i = 0; i < nameLower.length(); i++)
    {
        nameLower[i] = tolower(nameLower[i]);
    }

    cout << "Ho ten chuyen thanh chu hoa: " << nameUpper << "\n";
    cout << "Ho ten chuyen thanh chu thuong: " << nameLower << "\n";

    return 0;
}
