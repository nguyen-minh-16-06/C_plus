#include <iostream>

using namespace std;

int main()
// Phép toán tự tăng
{
    int x = 11;
    cout << "x++ = " << (x++) << "\n";
    // x++;
    // cout < x;
    // ++ có nghĩa là tự tăng cho biến thêm 1

    /* Có 3 cách viết để tăng 1 biến lên 1:
        x++; (x++ giá trị trả về là giá trị ban đầu của x trước rồi mới tăng lên 1, tức là x = 0 rồi sau đó mới x = 1)
        ++x; (++x tăng giá trị của x lên 1 và trả về giá trị x mới, tức là x = 1)
        x += 1;
        x = x + 1;

    LƯU Ý: Chỉ có trường hợp +1 thì mới có trường hợp rút gọn x++; còn nếu +10
    hay +100 thì sẽ không có phép x++;

    Đặc điểm:
    1. Biểu diễn là 2 dấu ++
    2. Số toán hạng của phép toán này là 1: x
    3. Độ ưu tiên cao hơn các phép toán số học cơ bản (+, -, x, /)
    Ví dụ: x++ + 1; thì sẽ (tự tăng cho x thêm 1) rồi mới (+ 1) sau
    */
    cout << "x (final) = " << x << "\n";

    // Phép toán tự tăng lên 2
    int y = 11;
    y += 2;
    cout << y << "\n";

    // Phép toán tự giảm
    int z = 11;
    z -= 2;
    cout << z << "\n";

    // Phép toán tự nhân
    int b = 11;
    b *= 2;
    cout << b << "\n";

    // Phép toán tự chia lấy nguyên (ko dư)

    int c = 11;
    c /= 2;
    cout << c << "\n";

    // Phép toán tự chia lấy dư (ko nguyên)
    int v = 11;
    v %= 2;
    cout << v << "\n";
}