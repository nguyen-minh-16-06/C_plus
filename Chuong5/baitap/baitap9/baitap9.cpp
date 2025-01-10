#include <iostream>

using namespace std;

int main()
{
    // Sử dụng loop for
    // Theo hàng
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << "   ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Theo cột
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << " x " << i << " = " << j * i << "   ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Sử dụng loop while
    // Theo hàng
    int i = 1;
    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {
            cout << i << " x " << j << " = " << i * j << "   ";
            j++;
        }
        i++;
        cout << "\n";
    }
    cout << "\n";

    // Theo cột
    int x = 1;
    while (x <= 10)
    {
        int y = 1;
        while (y <= 10)
        {
            cout << y << " x " << x << " = " << y * x << "   ";
            y++;
        }
        x++;
        cout << "\n";
    }
    
    return 0;
}