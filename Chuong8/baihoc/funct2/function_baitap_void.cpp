#include <iostream>
#include <cmath>

using namespace std;

// BÀI TẬP GIẢI PHƯƠNG TRÌNH BẬC 2

void ptb2(int a, int b, int c)
{
    int x, y;
    int delta = (b * b) - (4 * a * c);

    if (delta > 0)
    {
        x = (-b + sqrt(delta)) / (2 * a);
        y = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co 2 nghiem: " << "\n";
        cout << "x1: " << x << "\n";
        cout << "x2: " << y << "\n";
    }
    else if (delta == 0)
    {
        x = (-b) / (2 * a);
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << x << "\n";
    }
    else
    {
        cout << "Phuong trinh vo nghiem" << "\n";
    }
}

int main()
{
    ptb2(1, 2, 3);
    ptb2(1, 2, 1);
    ptb2(1, 2, -3);

    // Nhập vào từ người dùng:
    int x, y, z;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;
    ptb2(x, y, z);

    return 0;
}
