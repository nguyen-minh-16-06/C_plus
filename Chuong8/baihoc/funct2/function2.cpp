#include <iostream>

using namespace std;

// RETURN
/*
- return là câu lệnh để trả về kết quả cho 1 function (hàm) nào đó, nhưng giá trị trả về phải có cùng kiểu dữ liệu
với phần định nghĩa của hàm (ket_qua có trong hàm là float thì phần định nghĩa của hàm diemtongket() cũng phải là
float hoặc kiểu dữ liệu trả về có thể ép kiểu với kết quả ta tính)

VD: diemtongket không phải là số thực mà là số nguyên, nhưng ket_qua lại là số thực thì vẫn có thể return được
(Đây chính là khái niệm ép kiểu dữ liệu ở Chương 3, hoàn toàn có thể áp dụng vào bài hàm này)

- Nhưng nếu trả về 1 kiểu dữ liệu không thể ép được thì sẽ gây ra lỗi (tức là không thể ép kiểu mặc đinh được).Vẫn có
cách để chuyển từ 1 "string" thành "int" nhưng phải sử dụng 1 hàm/thư viện mở rộng (mặc định C++ không có)
VD:
    float = (diem_toan + diem_ly + diem_anh) / 3;
    string ketQua = "Tot";
    return ketQua;
=> Báo lỗi (no suitable conversion function from "string" to "int" exist)

- Vị trí gọi lệnh return ở trong hàm có thể được gọi ở bất cứ vị trí nào trong function. Nhưng bất cứ câu lệnh nào
nằm sau lệnh return đều không được thực thi. Nói cách khác lệnh return sẽ kết thúc luôn function đó (giống lệnh break;
trong vòng lặp for, nhưng với hàm thì không dùng break; (break; là dừng hẳn, return là trả về 1 kết quả)

- return giúp chúng ta tối ưu, gọn code hơn.
*/

int diemtongket(float diem_toan, float diem_ly, float diem_anh)
{
    // Trường hợp kiểm tra điều kiện không hợp lệ
    /*
    - Với 1 hàm kết quả trả về sẽ có 1 kết quả để kiểm tra lỗi. Bởi vì không phải các tham số nhập vào đều là đúng (tức là
    không thể biết người dùng nhập vào dữ liệu đúng hay không). Đây được hiểu là 1 bước validation (xác thực/minh) xem tham
    số nhập vào có đúng hay không. Và nếu không có bước kiểm tra thì nếu nhập vào 1 dữ liệu sai thì nó vẫn tính như bình
    thường, từ đó sẽ có những bất thường và xảy ra lỗi
    */
    if (diem_toan < 0 || diem_toan > 10)
    {
        /* Thông thường trong lập trình thường sử dụng giá trị -1 để thể hiện cho giá trị không hợp lệ (đó chỉ là quy ước
        và có thể đặt bất kì giá trị nào) */
        return -1;
    }
    // return trả về điểm tổng kết của 1 học sinh
    return (diem_toan + diem_ly + diem_anh) / 3;
}

int main()
{
    float kq = diemtongket(8.5, 9.5, 8);
    // Đây là cách các lập trình viên rào trước các lỗi có thể xảy ra (sử dụng giá trị -1)
    if (kq != -1)
    {
        cout << "Diem tong ket: " << kq << "\n";
    }
    else
    {
        cout << "Diem tong ket khong hop le.";
    }

    return 0;
}