#include <iostream>
#include <string>

using namespace std;

// FUNCTION VOID
/*
- Có 1 hàm đặc biệt không cần kiểu dữ liệu trả về là HÀM VOID. Khi khai báo void ở phần kiểu dữ liệu trả về của hàm
thì hàm đó không cần return (hàm có kiểu dữ liệu void sẽ không trả về dữ liệu)
=> Có nghĩa là khi gọi hàm diem_tong_ket() ở main() thì không trả về 1 số thực nào

- Với HÀM VOID không thể gán "=" cho 1 biến được, chỉ có thể gọi ĐỘC LẬP (bởi vì nó không trả về dữ liệu cho bất kì
biến nào) chỉ đơn thuần là thực thi các câu lệnh ở bên trong hàm void và thực thi xong thì thoát ra và không trả về gì
VD:
int main()
{
    diem_tong_ket(8.5, 9.5, 8); // Gọi độc lập và không thể gán "=" cho 1 biến

    return 0;
}

- Với HÀM VOID thì việc gọi return không có ý nghĩa (return là trả về dữ liệu, hàm void là không trả về dữ liệu thì
không cần return)
*/

void diem_tong_ket(float diem_toan, float diem_ly, float diem_anh)
{
    if (diem_toan < 0 || diem_toan > 10)
    {
        /* Vẫn có thể gọi return nhưng bỏ giá trị bên cạnh nó và gọi 1 cách độc lập. Nghĩa là nếu điểm không hợp lệ
        thì dừng hàm và không gọi đến lệnh cout bên dưới (Lúc này return đóng vai trò như break; ở trong loop for) */
        cout << "Diem khong hop le!";
        return;
    }
    cout << "Diem tong ket la: " << (diem_toan + diem_ly + diem_anh) / 3 << "\n";
}

void xinChao(string gioiTinh)
{
    if (gioiTinh == "nu")
    {
        cout << "Xin chao toi la gioi tinh nu" << "\n";
    }
    else if (gioiTinh == "nam")
    {
        cout << "Xin chao toi la gioi tinh nam" << "\n";
    }
}

int main()
{
    // Không được gán cho 1 biến nào cả, nếu gán chương trình sẽ báo lỗi
    diem_tong_ket(11, 9.5, 8);
    xinChao("nam");
    xinChao("nu");

    return 0;
}