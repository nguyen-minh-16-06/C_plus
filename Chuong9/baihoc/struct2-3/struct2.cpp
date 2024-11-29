#include <iostream>
#include <string>

using namespace std;

// Function in Struct (Hàm trong Struct) P1

/*
Bài này sẽ giới thiệu rằng: Ở trong Struct, ngoài việc khai báo biến, khai báo dữ liệu thành viên thì chúng ta
có thể khai báo cả hàm nữa (tức là bên trong Struct có thể định nghĩa 1 function).
*/

struct Dia_Chi
{
    int so_nha;
    string phuong;
};

// Các khai báo bên trong Struct được gọi là biến thành viên của Struct
struct Person
{
    string ho_ten; // Dưới đây được gọi là các biến thành viên
    int tuoi;
    float chieu_cao;
    int so_do[3];
    Dia_Chi dia_chi;

    /*
    - Hàm bây giờ đã thuộc quyền quản lí của kiểu dữ liệu Person, và khi chạy code thì chương trình sẽ báo lỗi
    "was not declared in this scope (tức chưa được khai báo)", bởi vì lời gọi hàm gioi_thieu_ban_than(p); ở
    int main() sẽ không biết hàm đó ở đâu cả.
    ****Giải thích:****
    Trước khi được đưa hàm vào struct Person thì có thể chạy được vì hàm gioi_thieu_ban_than() nằm ở phạm vi
    global (toàn cục), nó sẽ không thuộc 1 cái scope (phạm vi)/cặp ngoặc nhọn nào cả.
    - Và với những hàm nằm trong struct được gọi là HÀM THÀNH VIÊN (tức là nó trực thuộc 1 struct nào đó, không
    còn được tự do nữa). Cách để gọi HÀM THÀNH VIÊN (nhìn xuống (2), sử dụng Ctrl + F để tìm kiếm)
    - Tác dụng:
    + Một khi hàm là HÀM THÀNH VIÊN của 1 struct thì chúng ta được phép truy cập trực tiếp đến các biến
    thành viên đó mà không cần phải gọi qua cái phép toán "p.<biến thành viên>", đồng nghĩa với việc chúng ta có
    thể bỏ được p. (nhìn xuống (3), sử dụng Ctrl + F để tìm kiếm).
    + Và tại sao lại có thể bỏ được như thế là bởi vì hàm gioi_thieu_ban_than() và string ho_ten; nằm cùng trong
    1 struct, thế nên là có thể gọi trực tiếp đến nhau được.
    - Tổng quát: Khi mà các biến, các hàm có liên quan mật thiết đến nhau thì chúng ta nên để chúng vào 1 struct.
    Điều đó khiến cho code trở nên rất gọn và dễ dàng quản lý, cũng như là nâng cấp sau này. Và đây cũng là 1 phần
    tiền đề của lập trình hướng đối tượng (OOP).
    */
    // Hàm này được gọi là HÀM THÀNH VIÊN
    void gioi_thieu_ban_than(Person p) // Hàm đã được bỏ vào bên trong struct (1)
    {
        cout << "Xin chao !\nToi la " << p.ho_ten << "\n";
        cout << "Nam nay toi " << p.tuoi << " tuoi\n";
    }

    // (3)
    void gioi_thieu_ban_than() // Không cần phải truyền tham số nữa
    {
        cout << "Xin chao !\nToi la " << ho_ten << "\n"; // Gọi trực tiếp ho_ten mà không cần p.<...>, tương tự tuoi
        cout << "Nam nay toi " << tuoi << " tuoi";
    }
};

/*
- Ta dùng struct để truyền vào làm tham số của 1 function (hàm). Bản thân struct là 1 kiểu dữ liệu, mà tham số của
các function, bản chất cũng chỉ là các biến.
- Tham số của chúng ta lần này là kiểu dữ liệu do bản thân ta tự định nghĩa, nó là struct, là kiểu dữ liệu Person do
bản thân tự định nghĩa ra.
- Dưới đây là hàm void nằm ngoài struct, không thuộc phạm vi nào cả (có nghĩa là hàm này có thể được gọi ở bất cứ nơi
đâu). Và bây giờ chúng ta sẽ chuyển hàm này vào bên trong struct (nhìn lên (1), sử dụng Ctrl + F để tìm kiếm).
*/

// void gioi_thieu_ban_than(Person p) // Đây là hàm không có kiểu dữ liệu trả về
// {
//      cout << "Xin chao !\nToi la " << p.ho_ten << "\n";
//      cout << "Nam nay toi " << p.tuoi << " tuoi";
// }

int main()
{
    Person p;
    p.ho_ten = "Le Nguyen Minh"; // Đây là các biến thành viên thuộc struct kiểu dữ liệu Person
    p.tuoi = 19;
    p.gioi_thieu_ban_than(p); /* (2) Đây là cách gọi HÀM THÀNH VIÊN (cũng tương tự như biến thành viên,
    thêm p.<tên phần tử thành viên>). */
    p.gioi_thieu_ban_than();  /* (3) Cũng có thể bỏ tham số p bên trong hàm đi, khi đã để hàm bên trong struct.
    Từ đó code trông sẽ gọn hơn.*/
}