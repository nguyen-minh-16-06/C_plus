#include <iostream>

using namespace std;

int average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int x, y, z;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;

    cout << average(x, y, z);
}