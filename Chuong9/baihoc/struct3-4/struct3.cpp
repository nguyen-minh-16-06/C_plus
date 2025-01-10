#include <iostream>
#include <string>

using namespace std;

// Function in struct (Hàm trong struct) P1

/*
Trong struct, ngoài việc khai báo biến thì vẫn có thể khai báo function
(tức bên trong struct có thể định nghĩa 1 function)
*/

struct Dia_Chi
{
    int so_nha;
    string phuong;
};

// Các khai báo bên trong struct được gọi là biến thành viên của struct
struct Person
{
    // Dưới đây được gọi là các biến thành viên
    string ho_ten;
    int tuoi;
    float chieu_cao;
    int so_do[3];
    Dia_Chi dia_chi;

    /*
    - Hàm thuộc quyền quản lí của kiểu dữ liệu Person, khi chạy code chương trình sẽ báo lỗi "was not declared
    in this scope (tức chưa được khai báo)", bởi vì lời gọi hàm gioi_thieu_ban_than(p); ở int main() sẽ không
    biết hàm đó ở đâu cả

    ****Giải thích:****
    - Trước khi được đưa hàm vào struct Person thì chạy được vì hàm gioi_thieu_ban_than() nằm ở phạm vi global
    (toàn cục) không thuộc 1 scope (phạm vi)/cặp ngoặc nhọn nào

    - Và với những hàm nằm trong struct được gọi là HÀM THÀNH VIÊN (tức trực thuộc 1 struct đó, không còn được tự do)

    - Tác dụng của việc đưa hàm vào struct:
        + Khi hàm là HÀM THÀNH VIÊN của 1 struct thì được phép truy cập trực tiếp đến các biến thành viên mà
        không cần phải gọi thông qua cú pháp "p.<biến thành viên>", bỏ được cả tham số Person p bên trong bởi
        vì hàm gioi_thieu_ban_than() và string ho_ten; nằm cùng trong 1 struct nên có thể gọi trực tiếp đến nhau
    */

    // Hàm này được gọi là HÀM THÀNH VIÊN
    void gioi_thieu_ban_than()
    {
        cout << "Xin chao !\nToi la " << ho_ten << "\n";
        cout << "Nam nay toi " << tuoi << " tuoi";
    }
};

/*
- Dùng struct để truyền vào làm tham số của 1 function. Bản thân struct là 1 kiểu dữ liệu, mà tham số của các function
bản chất cũng chỉ là các biến

- Tham số Person là kiểu dữ liệu tự định nghĩa với tên biến là p

- Hàm void nằm ngoài struct, không thuộc phạm vi của struct (hàm này có thể được gọi ở bất cứ nơi đâu)
*/

void gioi_thieu_ban_than(Person p)
{
    cout << "Xin chao !\nToi la " << p.ho_ten << "\n";
    cout << "Nam nay toi " << p.tuoi << " tuoi";
}

int main()
{
    Person p;
    // Đây là các biến thành viên thuộc struct kiểu dữ liệu Person
    p.ho_ten = "Le Nguyen Minh";
    p.tuoi = 19;

    // Gọi hàm thông thường khi hàm nằm ngoài struct
    gioi_thieu_ban_than(p);

    // Gọi hàm thành viên thuộc struct kiểu dữ liệu Person
    /*
    Cú pháp gọi HÀM THÀNH VIÊN:
    p.<biến thành phần trong kiểu dữ liệu Person>
    */
    p.gioi_thieu_ban_than();
}