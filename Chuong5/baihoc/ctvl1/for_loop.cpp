#include <iostream>

using namespace std;

int main()
{
    // FOR LOOP STATEMENT (Câu lệnh vòng lặp for)
    // - Vòng lặp for cho ta biết trước được số lần lặp bao nhiêu lần
    // Ví dụ: lặp 11 lần, 12 lần,... n lần

    // - Khởi tạo biến i với i được kí hiệu là index: thứ tự dùng để đánh số
    // - Ngoài ra i cũng được hiểu là iterate: lặp lại, danh từ là iteration (mang ý nghĩa sự lặp đi lặp lại)
    for (int i = 1; i <= 10; i++) // Có thể không cần sử dụng phép tự tăng trong cấu trúc này (int i = 1; i <= 10;)
    {
        cout << "Anh yeu em lan thu: " << i << "\n";
        // i++; (Có thể gọi biểu thức tự tăng hoặc tự giảm sau khi thực hiện phép lặp xong)
    }

    return 0;

    /*
    - Có thể chạy theo hướng ngược lại từ 10 đến 1:

    for (int i = 10; i >= 1; i--)
    {
        cout << "Anh yeu em lan thu: " << i << "\n";
    }
    */

    /*
    - Hoàn toàn có thể bỏ i ra ngoài, lúc này i đã hoàn toàn thuộc sở hữu của hàm main(), không còn là của mỗi hàm for nữa

    int i = 10;
    for ( ; i >= 1; i--) (LƯU Ý vẫn phải có dấu ; ở trước điều kiện)
    {
        cout << "Anh yeu em lan thu: " << i << "\n";
    }
    cout << "i = " << i << "\n";

    - Và sau khi chạy xong và tại sao lại in ra i = 0
    (Bởi vì i = 10, sau khi chạy hết vòng for thì i sẽ về 0 rồi dừng, điều kiện dừng của vòng lặp là >= 1,
    tức là chạy đến 1 thì đó là bước lặp cuối cùng. Sau bước lặp đó thì sẽ kiểm tra thêm 1 lần nữa, nếu là 0 thì dừng
    và trả ra kết quả là i = 0)
    */
}