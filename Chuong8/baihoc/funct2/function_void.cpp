#include <iostream>

using namespace std;

// RETURN
/*
- Có 1 hàm đặc biệt mà không cần kiểu dữ liệu trả về là HÀM void. Khi mà chúng ta khai báo void ở phần kiểu dữ liệu 
trả về của hàm, có nghĩa rằng hàm mà ta khai báo void không cần return (những hàm có kiểu dữ liệu void sẽ không trả 
ra dữ liệu nào cả). Có nghĩa là khi ta gọi hàm diem_tong_ket thì sẽ không trả ra 1 số thực nào cho chúng ta cả.
- Với những hàm như này ta không thể gán bằng được và chỉ có thể gọi độc lập ra (bởi vì nó không trả ra dữ liệu cho
bất kì biến nào cả), chỉ đơn thuần là thực thi các câu lệnh ở bên trong và thực thi xong thì thoát ra và không trả 
về gì, nên mới gọi độc lập hàm diem_tong_ket. Và bởi vì không trả về dữ liệu gì thế nên bên trong hàm có kiểu dữ liệu
void, ta phải tự chủ việc in dữ liệu ra.
- Và với những hàm không cần dữ liệu trả về thì việc gọi return không có ý nghĩa gì cả (return là trả về dữ liệu),
hàm void có nghĩa là không cần dữ liệu trả về thì ta không cần return.
*/

void diem_tong_ket(float diem_toan, float diem_ly, float diem_anh)
{
    if (diem_toan < 0 || diem_toan > 10)
    {
        return; 
        /* Vẫn có thể gọi return nhưng bỏ đi giá trị bên cạnh nó, và gọi nó 1 cách độc lập. Có nghĩa là nếu điểm không
        hợp lệ thì dừng hàm luôn và không gọi đến lệnh cout nữa. Lúc này return đóng vai trò như break; ở trong loop for */
    }
    cout << "Diem tong ket la: " << (diem_toan + diem_ly + diem_anh) / 3;
}

int main()
{
    diem_tong_ket(8.5, 9.5, 8); // Gọi độc lập

    return 0;
}