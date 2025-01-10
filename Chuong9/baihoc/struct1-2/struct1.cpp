#include <iostream>
#include <string>

using namespace std;

// STRUCT
/*
- Struct khá giống với array nhưng có khác 1 chút với array (Tập các dữ liệu có cùng kiểu dữ liệu (datatype))
Struct là tập các dữ liệu khác kiểu dữ liệu với nhau (datatype)

- Có 3 biến khác kiểu dữ liệu với nhau (1 string, 1 int, 1 float) và 3 kiểu dữ liệu này không thể lưu được vào
array. Struct sẽ giải quyết được vấn đề này

Syntax:
struct <tên của kiểu dữ liệu>
{
    content of struct (nội dung của struct)
    Liệt kê các biến thành phần/thành viên trong kiểu dữ liệu
};

- Toàn bộ cấu trúc struct dưới chỉ là định nghĩa ra kiểu dữ liệu (tức là chỉ định rằng kiểu dữ liệu Person bao
gồm các thông tin như ho_ten, tuoi, chieu_cao)
*/

struct Person
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
};

/*
- Để các dữ liệu này hoạt động thì phải khai báo vào hàm main và cách khai báo giống như cách khai báo các biến
nguyên thuỷ

VD:
int main()
{
    Person p; (Kiểu dữ liệu: Person và p: biến (có thể đặt tên khác nếu muốn)
                                  biến p gồm có 3 thành phần: ho_ten, tuoi, chieu_cao
    return 0;
}
*/

int main()
{
    Person p;
    /*
    - Cách để lấy các giá trị ho_ten, tuoi, chieu_cao ra với cú pháp như sau:
    p.<biến thành phần trong kiểu dữ liệu Person>
    VD:
    p.ho_ten = "Nguyen Minh";
    */
    p.ho_ten = "Nguyen Minh";
    p.tuoi = 19;
    p.chieu_cao = 1.75;

    cout << p.ho_ten << " nam nay " << p.tuoi << " tuoi";

    return 0;
}