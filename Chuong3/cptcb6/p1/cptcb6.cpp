#include <iostream>

using namespace std;

int main()
{
    // Phép toán logic
    bool a = true;  // Minh dep zai
    bool b = false; // Minh hoc gioi

    cout << (a + b) << "\n"; // Các biến logic có thể thực hiện các toán tử +, -, *, /
    // Trong thực tế thì sẽ không +, -, *, / với các biến logic vì nó không có ý nghĩa gì cả

    /* Phép hội: có nghĩa là 'và' (Cú pháp x && y) */
    bool c = a && b; // Minh hoan hao (a và/AND b) AND
    cout << "Minh co hoan hao khong: " << c << "\n";
    /* Nếu a và b:
        1, 1 => 1
        1, 0 => 0
        0, 1 => 0
        0, 0 => 0
                */

    /* Phép tuyển: có nghĩa là 'hoặc' (Cú pháp x || y) */
    bool d = a || b; // Minh lay duoc vo (a hoặc/OR b) OR
    cout << "Minh co lay duoc vo khong: " << d;
    /* Nếu a và b:
        1, 1 => 1
        1, 0 => 1
        0, 1 => 1
        0, 0 => 0
                */
}
