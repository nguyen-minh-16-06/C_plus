#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;

    // Tìm số lớn nhất trong 3 số x, y, z
    if (x > y && x > z)
    {
        cout << "Ket qua 1: So lon nhat la " << x << "\n";
    }
    else if (y > x && y > z)
    {
        cout << "Ket qua 1: So lon nhat la " << y << "\n";
    }
    else if (z > x && z > y)
    {
        cout << "Ket qua 1: So lon nhat la " << z << "\n";
    }

    // Tìm số bé nhất trong 3 số x, y, z
    if (x < y && x < z)
    {
        cout << "Ket qua 2: So be nhat la " << x << "\n";
    }
    else if (y < x && y < z)
    {
        cout << "Ket qua 2: So be nhat la " << y << "\n";
    }
    else if (z < y && z < x)
    {
        cout << "Ket qua 2: So be nhat la " << z << "\n";
    }

    // Kiểm tra cả 3 số có cùng dấu hay không ?
    if (x > 0 && y > 0 && z > 0)
    {
        cout << "Ket qua 3: Ca 3 so cung dau" << "\n";
    }
    else
    {
        cout << "Ket qua 3: Ca 3 so khac dau nhau" << "\n";
    }

    // In ra các cặp số trái dấu nhau
    if ((x > 0 && y > 0 && z > 0) || (x < 0 && y < 0 && z < 0))
    {
        cout << "Ket qua 4: Khong co cap so nao trai dau" << "\n";
    }
    cout << "Ket qua 4: ";
    if (x * y < 0)
    {
        cout << "(" << x << ";" << y << "), ";
    }
    if (x * z < 0)
    {
        cout << "(" << x << ";" << z << "), ";
    }
    if (y * z < 0)
    {
        cout << "(" << y << ";" << z << ")";
    }
}