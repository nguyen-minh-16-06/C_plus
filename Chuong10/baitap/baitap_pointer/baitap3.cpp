#include <iostream>

using namespace std;

int findLongestSubArrayK(int *a, int n, int k)
{
    int _max = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            current++;
        }
        else
        {
            _max = max(_max, current);
            current = 0;
        }
    }
    _max = max(_max, current);

    return _max > 0 ? _max : -1;
}

// Ko sửa hàm main
int main()
{
    // Test cases:
    {
        const int N = 5;
        int a[N] = {1, 1, 1, 2, 3};
        cout << "Test 1: " << (findLongestSubArrayK(a, N, 1) == 3 ? "Pass" : "Failed") << "\n";
    }

    {
        const int N = 7;
        int a[N] = {2, 2, 3, 4, 2, 2, 2};
        cout << "Test 2: " << (findLongestSubArrayK(a, N, 2) == 3 ? "Pass" : "Failed") << "\n";
    }

    {
        const int N = 11;
        int a[N] = {3, 3, 4, 5, 6, 3, 3, 3, 4, 3, 3};
        cout << "Test 3: " << (findLongestSubArrayK(a, N, 3) == 3 ? "Pass" : "Failed") << "\n";
    }

    {
        const int N = 10;
        int a[N] = {1, 1, 2, 3, 1, 1, 1, 2, 1, 1};
        cout << "Test 4: " << (findLongestSubArrayK(a, N, 1) == 3 ? "Pass" : "Failed") << "\n";
    }

    {
        const int N = 10;
        int a[N] = {1, 1, 2, 3, 1, 1, 1, 2, 1, 1};
        cout << "Test 5: " << (findLongestSubArrayK(a, N, 10) == -1 ? "Pass" : "Failed") << "\n";
    }

    {
        const int N = 2;
        int a[N] = {1, 2};
        cout << "Test 6: " << (findLongestSubArrayK(a, N, 1) == 1 ? "Pass" : "Failed") << "\n";
    }
}
