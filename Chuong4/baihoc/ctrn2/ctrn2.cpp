#include <iostream>

using namespace std;

int main()
{
    // Toán tử điều kiện (Conditional Operator)
    // ("Điều kiện" ?(Toán tử) A : B) Đây được gọi là một biểu thức điều kiện
    // Một số tài liệu sẽ ghi là Toán tử 3 ngôi (Ngôi ở đây được xem như là số toán hạng), từ chuyên ngành là (Ternary Operator)
    // Ở đây có 3 ngôi (3 toán hạng)
    // "Điều kiện": là 1 biểu thức logic (nhận về giá trị true hoặc false)
    // Nếu biểu thức "Điều kiện" là true thì trả về toán hạng A, còn nếu false thì trả về toán hạng B

    int tuoi;
    cout << "Nhap tuoi: ";
    cin >> tuoi;

    bool di_tu = ((tuoi > 18) ? true : false);
            //    DK     ?        A         :           B
    cout << ((tuoi > 18) ? "Du tuoi di tu." : "Chua du tuoi di tu.") << "\n";
    cout << di_tu;
    
    /* LƯU Ý: Khi cấu trúc rẽ nhánh lớn và phức tạp (>2 nhánh) thì nên dùng if else đầy đủ,
    nên sử dụng Conditional Operator khi có ít thành phần biến logic
    (điều kiện[Phép hội, phép tuyển,...])
    Tất nhiên, cách viết rút ngọn như này cũng không bắt buộc vẫn có thể sử dụng if else đầy đủ 
    để viết một cấu trúc ngắn, nhưng với việc viết như này thì:
    1. Gọn code hơn, không quá rối, phức tạp khi nhìn vào code.
    2. Trông sẽ chuyên nghiệp hơn, nhìn code thoáng gọn và đẹp hơn.
    */
}