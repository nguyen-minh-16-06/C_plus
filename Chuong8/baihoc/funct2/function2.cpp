#include <iostream>

using namespace std;

// RETURN
/*
return là câu lệnh để trả về kết quả cho 1 function (hàm) nào đó, nhưng giá trị trả về phải có cùng kiểu dữ liệu
với phần định nghĩa của hàm.
- ket_qua ta tính toán là float thì phần định nghĩa của hàm diemtongket() cũng phải là float hoặc kiểu dữ liệu
trả về có thể ép kiểu với kết quả ta tính.
Ví dụ: diemtongket ta không lấy số thực, chỉ lấy số nguyên, nhưng ket_qua lại là số thực thì vẫn có thể return được
(Đây chính là khái niệm ép kiểu dữ liệu ở Chương 3, hoàn toàn có thể áp dụng vào bài hàm này)
- Nhưng nếu ta trả về 1 kiểu dữ liệu không thể ép được thì sẽ gây ra lỗi (tức là không thể ép kiểu mặc đinh được).
Tất nhiên vẫn có cách để chuyển từ 1 "string" thành "int" nhưng phải sử dụng 1 hàm mở rộng, 1 thư viện mở rộng
(mặc định C++ không có).
- Ở đây, mặc định các hàm kiểu dữ liệu số thì không thể return 1 ket_qua2 có kiểu dữ liệu mặc định được.
- Vị trí gọi lệnh return ở trong hàm có thể được gọi ở bất cứ vị trí nào trong function (hàm) đó. Nhưng bất cứ câu lệnh
nào nằm sau câu lệnh return đều không được thực thi. Nói cách khác lệnh return sẽ kết thúc luôn function (hàm) đó (giống
lệnh break; trong vòng lặp for, nhưng dùng hàm thì ta không dùng break; (vì break; là dừng hẳn), còn return là trả về 1
kết quả nào đó)
- Với 1 hàm kết quả trả về sẽ có 1 kết quả để kiểm tra lỗi. Bởi vì không phải các tham số nhập vào đều là đúng (tức là ta
không thể biết người dùng có thể nhập vào dữ liệu đúng hay không). Đây có thể hiểu là 1 bước validation (xác thực/minh)
xem tham số nhập vào có đúng hay không. Và nếu không có bước kiểm tra thì nếu ta nhập vào 1 dữ liệu thì sai thì nó vẫn
tính như bình thường, từ đó sẽ có những bất thường và xảy ra lỗi.
- return giúp chúng ta tối ưu, gọn code hơn.
*/

int diemtongket(float diem_toan, float diem_ly, float diem_anh)
{
    if (diem_toan < 0 || diem_toan > 10) // Trường hợp không hợp lệ
    {
        /* Thông thường trong lập trình thường sử dụng giá trị -1 để thể hiện cho giá trị không hợp lệ
        đó chỉ là quy ước và có thể đặt bất kì giá trị nào. */
        return -1;
        /*
        Và ta return -1; ở đây, bởi vì khi gặp lỗi thì kết thúc hàm luôn chứ tính làm gì nữa.
        return nó vừa kết thúc hàm, vừa trả về giá trị -1 luôn.
        */
    }
    //else //Khi có lệnh return ở trên ta có thể bỏ luôn lệnh else vẫn được, đôi lúc không cần vẫn được (Tuỳ trường hợp)
    //{
        //ket_qua = (toan + ly + anh) / 3;
        //string ket_qua2 = "Tot";
        //cout << "Da tinh toan xong diem tong ket\n";
        //return ket_qua2; // Báo lỗi (no suitable conversion function from "string" to "int" exist)
    //}
    return (diem_toan + diem_ly + diem_anh) / 3; // return trả về điểm tổng kết của 1 học sinh
}

int main()
{
    float kq = diemtongket(8.5, 9.5, 8);
    if (kq != -1) // Đây là cách các lập trình viên rào trước các lỗi có thể xảy ra (sử dụng giá trị -1)
    {
        cout << "Diem tong ket: " << kq << "\n";
    }
    else
    {
        cout << "Diem tong ket khong hop le.\n";
    }
    return 0;
}