#include <iostream>

using namespace std;

/*
POINTER IN ARRAY
*/

int main()
{
    int a[4] = {1, 4, 2, 5};

    // cout << "a = " << a << "\n";
    // cout << &a[0] << "\n" << &a[1] << "\n" << &a[2] << "\n" << &a[3] << "\n";

    /*
    Địa chỉ biến a lưu trữ giống với địa chỉ a[0]. Vậy biến a đc coi là 1 con trỏ, trỏ đến phần tử đầu tiên
    trong mảng (bản chất là chỉ lưu địa chỉ của phần tử đầu tiên)
    */

    // int *p;
    // p = a;
    // cout << p << "\n";

    /*
    Duyệt mảng bằng con trỏ
    */
    for (int *p = a; p <= a + 3; p++)
    {
        // Có thể xài for (int *p = &a[0]; p <= &a[3]; p++)
        cout << *p << " ";
    }

    return 0;
}