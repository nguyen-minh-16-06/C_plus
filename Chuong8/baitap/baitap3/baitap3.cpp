#include <iostream>

using namespace std;

void kiemtra(float a)
{
    if (a == (int)a)
    {
        if (a == 0)
        {
            cout << "Day la so 0";
        }
        else if (a > 0)
        {
            cout << "Day la so nguyen duong";
        }
        else
        {
            cout << "Day la so nguyen am";
        }
    }
    else if (a > 0)
    {
        cout << "Day la so thuc duong";
    }
    else
    {
        cout << "Day la so thuc am";
    }
}

void kiemtra(string a)
{
    cout << "Day la chuoi ki tu";
}

int main()
{
    cout << "0\t:  ";
    kiemtra(0);
    cout << "\n";
    cout << "5\t:  ";
    kiemtra(5);
    cout << "\n";
    cout << "-5\t:  ";
    kiemtra(-5);
    cout << "\n";
    cout << "5.5\t:  ";
    kiemtra(5.5);
    cout << "\n";
    cout << "-5.5\t:  ";
    kiemtra(-5.5);
    cout << "\n";
    cout << "-5.0\t:  ";
    kiemtra(-5.0);
    cout << "\n";
    cout << "nam\t:  ";
    kiemtra("nam");

    return 0;
}