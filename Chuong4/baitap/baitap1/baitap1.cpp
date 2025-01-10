#include <iostream>

using namespace std;

int main()
{
    float x, y;

    cout << "Nhap x: ";
    cin >> x;

    cout << "Nhap y: ";
    cin >> y;

    if (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            cout << "Ket qua:\n";
            cout << "x khac 0.\n";
            cout << "y khac 0.\n";
            cout << "hai so cung dau.";
        }
        else if (x < 0 && y > 0)
        {
            cout << "Ket qua:\n";
            cout << "x khac 0.\n";
            cout << "y khac 0.\n";
            cout << "hai so trai dau.";
        }
        else if (x > 0 && y < 0)
        {
            cout << "Ket qua:\n";
            cout << "x khac 0.\n";
            cout << "y khac 0.\n";
            cout << "hai so trai dau.";
        }
        else if (x < 0 && y < 0)
        {
            cout << "Ket qua:\n";
            cout << "x khac 0.\n";
            cout << "y khac 0.\n";
            cout << "hai so cung dau.";
        }
    }
    else if (x == 0 && y == 0)
    {
        cout << "Ket qua:\n";
        cout << "x bang 0.\n";
        cout << "y bang 0.";
    }
    else if (x != 0 && y == 0)
    {
        cout << "Ket qua:\n";
        cout << "x khac 0.\n";
        cout << "y bang 0.";
    }
    else if (x == 0 && y != 0)
    {
        cout << "Ket qua:\n";
        cout << "x bang 0.\n";
        cout << "y khac 0.";
    }
}