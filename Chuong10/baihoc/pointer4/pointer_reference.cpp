#include <iostream>

using namespace std;

/*
REFERENCE (Tham chiếu)
- reference được hiểu cơ bản là 1 biến đại diện cho 1 biến khác
(bản chất là khi gọi đến biến x hay y thì đều cùng gọi đến 1 vùng nhớ)

- Khi tạo ra 1 biến reference thì 2 biến đó sẽ hoạt động như nhau
*/

int main()
{
    int x = 10;

    /*
    - y là reference của x

    - Về mặt biến reference mang vai trò giống như pointer (lấy giá trị của biến như dereference)

    - NHƯNG KHÔNG LẤY ĐỊA CHỈ CỦA BIẾN ĐƯỢC

    - Mục đích của reference là để giảm tải độ phức tạp của con trỏ
    */
    int &y = x;

    x++;
    y++;

    cout << x << " " << y << "\n";

    /*
    LƯU Ý:
    - reference không có khái niệm NULL như con trỏ (con trỏ pointer có thể không trỏ vào đâu cả = NULL)
    nhưng với reference thì không thể là NULL được (BẮT BUỘC phải tham chiếu tới 1 biến nào đó)
    VD:
    int &y = NULL;

    - reference cũng không được phép khai báo mà không khởi tạo (BẮT BUỘC PHẢI KHỞI TẠO), con trỏ thì không cần
    VD:
    int &y;
    */

    return 0;
}