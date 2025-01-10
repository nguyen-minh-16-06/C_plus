#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Operator (toán tử): là 1 kí tự/hiệu, hoặc là 1 câu lệnh
    Cho phép thực hiện 1 tính toán và trả về kết quả
    Vd: +, -, x, /, (int) - hay còn gọi là keyword,...
    Các toán tử đứng 1 mình sẽ không có ý nghĩa gì cả
    Phải đi kèm cùng 1 biến hoặc giá trị => đó là toán hạng (Operand)
    => Toán tử kết hợp với các toán hạng thì được gọi là 1 biểu thức
    => Operator kết hợp Operand = Expression (Sự kết hợp giữa phép toán và toán hạng)
    */

    int x = 1;
    int y = 2;
    int z = x * y + 10;
    cout << x * y + 10; // cout << z;
    // x, y, 10: Operand
    // *, +: Operator
    // x * y + 10: Expression
}