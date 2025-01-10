#include <iostream>

using namespace std;

int main()
{
    // Phép toán so sánh, hay còn gọi phép toán quan hệ (Relation Operator)
    int x = 100;
    bool b = (x < 101);
    /* Có các phép so sánh sau: >, <, == (đây là phép bằng, còn = là phép gán)
    >=, <=, != (so sánh khác) */

    cout << (x > 99) << "\n";   // Phép toán so sánh hơn
    cout << (x == 99) << "\n";  // Phép toán so sánh bằng
    cout << (x != 100) << "\n"; // Phép toán so sánh khác
    cout << b;                  // Phép toán so sánh bé
    // Các giá trị trả về khi so sánh là 0 hoặc 1 (1 đúng, 0 sai)
}