#include <iostream>

using namespace std;

int main()
{
    // ĐỘ ƯU TIÊN
    bool a = true; // Minh dep trai
    bool b = true; // Minh nhieu tien
    bool c = true; // Minh hoc gioi
    bool e = true; // Minh kibo

    /* Phép && được ưu tiên trước,
    nếu muốn ưu tiên bất kì phép toán nào thì bỏ vào ngoặc đơn ()*/
    bool d1 = a && b && c;   // Minh hoan hao
    bool d2 = a || b || c;   // Minh lay duoc vo
    bool d3 = a || (b && c); // Minh lay duoc vo
                             // 1 || 0
                             //   1
    // Phép phủ định ! được ưu tiên hơn phép &&
    bool d4 = a && b && c && !d; // Minh lay duoc vo

    cout << "Minh co hoan hao khong: " << d1 << "\n";
    cout << "Minh co lay duoc vo khong: " << d2;
    cout << "Minh co lay duoc vo khong: " << d3;
}