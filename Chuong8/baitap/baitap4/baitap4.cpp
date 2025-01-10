#include <iostream>
#include <string>

using namespace std;

string convert_num_to_str(int num)
{
    string result = "";

    if (num == 0)
    {
        return "0";
    }

    while (num > 0)
    {
        result = char(num % 10 + '0') + result;
        num /= 10;
    }
    return result;
}

int convert_str_to_num(const string& str)
{
    int result = 0;

    for (int i = 0; i < str.length(); i++)
    {
        result = result * 10 + (str[i] - '0');
    }

    return result;
}

int main()
{
    cout << convert_num_to_str(9669) << "\n";
    cout << convert_str_to_num("9669");

    return 0;
}