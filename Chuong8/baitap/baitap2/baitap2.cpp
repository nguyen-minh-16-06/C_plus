#include <iostream>

using namespace std;

float divide(float a, int b)
{
    if (b == 0)
    {
        cout << "Khong the thuc hien phep chia cho 0";
        return 0;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    cout << divide(6, 2) << "\n";
    cout << divide(-7, 2) << "\n";
    divide(8, 0);

    return 0;
}