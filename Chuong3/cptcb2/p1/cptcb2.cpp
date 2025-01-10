#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Type casting (Ép kiểu): Chuyển đổi kiểu dữ liệu
    float x = 1.5;

    cout << x << "\n";
    cout << (int)x << "\n";
    // (int)x: được coi là 1 biểu thức (expression)
    // (int): được coi là 1 toán tử (Operator)
    // x: được coi là 1 toán hạng (Operand)

    int y = 65;

    cout << (char)y << "\n";
    // Ở đây A trong mã ASCII (dec) là 65
    // Ngược lại tương tự
    char z = 'A';

    cout << (int)z << "\n";
    cout << (char)z << "\n";
    // Nếu như kiểu kí tự có thể đổi sang số nguyên thì cũng có thể đổi sang
    // số thực (Vì 65 và 65.0 là như nhau)
    // MỘT SỐ NGUYÊN CÓ THỂ ĐƯỢC COI LÀ MỘT SỐ THỰC, NHƯNG NGƯỢC LẠI THÌ KHÔNG
    
    bool c = true;
    
    cout << (int)c; //Không cần phải ép kiểu vì bản chất khi bool in ra thì
    // nó đã là 1(true) hoặc 0(false) rồi
}