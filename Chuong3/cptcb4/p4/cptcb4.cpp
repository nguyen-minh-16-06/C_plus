#include <iostream>
#include <math.h> // Thư viện toán học chuẩn C cũ
#include <cmath>  // Thư viện toán học chuẩn C++

using namespace std;

int main()
// Phép toán nâng cao (căn bậc 2, hàm mũ, trị tuyệt đối, luỹ thừa,...)
{
    int x = 9;
    cout << sqrt(x) << "\n";   // Square root (Căn bậc 2)
    cout << pow(x, 3) << "\n"; // Power (Hàm mũ) x^n, thường dùng cho các số mũ to

    int y = -9;
    cout << abs(y) << "\n"; // Absolute (Trị tuyệt đối), thể hiện khoảng cách từ giá trị đó đến gốc toạ độ 0
    
}