#include <iostream>

using namespace std;

int main()
{
    // Khi làm việc với mảng thì phải làm việc cùng với vòng lặp
    int x[] = {6, 9, 3, 5, 2, 1};

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        if (x[i] % 2 == 0)
        {
            sum += x[i];
        }
    }
    cout << sum;

    return 0;
}