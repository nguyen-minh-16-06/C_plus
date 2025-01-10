#include <iostream>

using namespace std;

int main()
// Phép toán số học (Arithmetic operator)
{
    int x = 5 + 6;
    int y = x - 1;
    int z = x * 2 + x * y; // Tính từ bên phải trước (x*y) trước rồi mới đến (x*2)
    int u = x / 2;         // Phép chia lấy phần nguyên, không lấy phần dư
    int c = x % 2;         // Phép chia lấy phần dư, không lấy phần nguyên
    float b = 11.0 / 2;
    // LƯU Ý: PHÉP CHIA LẤY PHẦN DƯ CHỈ THỰC HIỆN VỚI CÁC BIẾN SỐ NGUYÊN (INT)
    cout << u << "\n";
    cout << c << "\n";
    cout << b;
}