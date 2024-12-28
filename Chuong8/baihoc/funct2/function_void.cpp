#include <iostream>

using namespace std;

// FUNCTION VOID
/*
- Có 1 hàm đặc biệt không cần kiểu dữ liệu trả về là HÀM VOID. Khi khai báo void ở phần kiểu dữ liệu trả về của hàm
thì hàm đó không cần return (hàm có kiểu dữ liệu void sẽ không trả về dữ liệu)
=> Có nghĩa là khi gọi hàm diem_tong_ket() ở main() thì không trả về 1 số thực nào

- Với HÀM VOID không thể gán "=" được và chỉ có thể gọi độc lập (bởi vì nó không trả ra dữ liệu cho bất kì biến nào)
chỉ đơn thuần là thực thi các câu lệnh ở bên trong hàm void và thực thi xong thì thoát ra và không trả về gì
VD:
int main()
{
    diem_tong_ket(8.5, 9.5, 8); // Gọi độc lập và không thể gán "="

    return 0;
}

- Với hàm VOID thì việc gọi return không có ý nghĩa (return là trả về dữ liệu, hàm void là không trả về dữ liệu thì
không cần return)
*/

void diem_tong_ket(float diem_toan, float diem_ly, float diem_anh)
{
    if (diem_toan < 0 || diem_toan > 10)
    {
        /* Vẫn có thể gọi return nhưng bỏ giá trị bên cạnh nó và gọi 1 cách độc lập. Nghĩa là nếu điểm không hợp lệ
        thì dừng hàm và không gọi đến lệnh cout bên dưới (Lúc này return đóng vai trò như break; ở trong loop for) */
        return;
    }
    cout << "Diem tong ket la: " << (diem_toan + diem_ly + diem_anh) / 3;
}

int main()
{
    diem_tong_ket(8.5, 9.5, 8);

    return 0;
}