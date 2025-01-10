#include <iostream>

using namespace std;

int findMax(int *a, int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            a[i] = max;
        }
    }
    return max;
}

int main()
{
    const int N = 5;

    {
        int a[N] = {15, 3, 11, 9, 10};
        cout << "Test 1: " << (findMax(a, N) == 15 ? "Pass" : "Failed") << "\n";
    }
    {
        int a[N] = {-1, -3, -11, -9, -10};
        cout << "Test 2: " << (findMax(a, N) == -1 ? "Pass" : "Failed") << "\n";
    }

    return 0;
}