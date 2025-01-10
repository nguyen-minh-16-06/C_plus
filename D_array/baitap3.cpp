#include <iostream>

using namespace std;

// Đảo một mảng một chiều
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int arr[100];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "]: ";
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    cout << "Mang sau khi dao: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
