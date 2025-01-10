#include <iostream>
#include <string>

using namespace std;

// Function in struct (Hàm trong struct) P2

/*
- Một hàm rất đặc biệt: hàm này tồn tại sẵn trong struct (tức không cần phải định nghĩa, mặc định có sẵn)
đó chính là HÀM KHỞI TẠO (Constructor). Hàm này được viết như cách viết của 1 hàm thông thường nhưng sẽ
không có kiểu dữ liệu trả về và tên sẽ trùng tên với tên của struct

- HÀM KHỞI TẠO tự động chạy, tự động được gọi mỗi khi khai báo biến có kiểu dữ liệu tương ứng với struct
đó (tức hàm Person() trong struct Person sẽ được gọi khi ở trong int main() ta khai báo biến Person đó ra)
*/

struct Dia_Chi
{
    int so_nha;
    string phuong;
};

struct Person
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    int so_do[3];
    Dia_Chi dia_chi;
    void gioi_thieu_ban_than()
    {
        cout << "Xin chao !\nToi la " << ho_ten << "\n";
        cout << "Nam nay toi " << tuoi << " tuoi";
    }

    /*
    HÀM KHỞI TẠO (Constructor)
    - Mặc định có sẵn khi khởi tạo 1 struct
    - Tên của hàm trùng với tên của struct
    - Hàm khởi tạo này cũng là 1 hàm bình thường, cũng có thể được phép truyền tham số vào
    - LƯU Ý: Khi viết tham số cho hàm khởi tạo thì chúng sẽ không dùng được HÀM KHỞI TẠO mặc định ban đầu nữa. (1)
    */

    Person(string ht, int t)
    {
        // Hoàn toàn truy cập trực tiếp được bởi vì Person cùng phạm vi, cùng trong struct với 2 biến ho_ten và tuoi
        ho_ten = ht;
        tuoi = t;
    }

    /*
    (2): Hoàn toàn được phép viết thêm 1 hàm khởi tạo nữa, đây được gọi là tính chất overloading: hàm cùng tên nhưng khác
    tham số của bài function, tức là chúng ta có thể tạo ra nhiều function cùng tên nhưng khác tham số hoặc khác kiểu dữ
    liệu của tham số. Hàm cùng tên tức là hàm có tên giống nhau, và phải cùng cả kiểu dữ liệu trả về nữa (Ở đây, hàm này
    là hàm đặc biệt nên không có kiểu dữ liệu trả về). Ví dụ chúng ta có 1 hàm gioi_thieu_ban_than() khác nữa và có 1 tham
    số gì đó chẳng hạn (Nhìn xuống (3)).
    */
    Person()
    {
        /*
        Chúng ta sẽ thử viết log thêm 1 lần nữa để kiểm tra (tương tự như Person ở bên trên).
        - Và chúng ta sẽ tạo khởi tạo biến theo 2 cách: (Nhìn xuống (4))
        */
        cout << "Da khoi tao bang ham Person()\n";
    }

    // (3): Phải đảm bảo rằng hàm phải cùng tên, chỉ được phép khác bên trong cặp ngoặc tròn () khai báo tham số mà thôi
    void gioi_thieu_ban_than(string message)
    {
        cout << "Xin chao !\nToi la " << ho_ten << "\n";
        cout << "Nam nay toi " << tuoi << " tuoi";
    }
};

int main()
{
    /*
    - Với cách viết như này thì sẽ rút gọn được nhiều hơn vì trước đây có 3 dòng lệnh gồm Person p;, p.ho_ten, p.tuoi
    . Mà nếu như 1 struct có quá nhiều giá trị và chúng ta phải khởi tạo hết toàn bộ giá trị trong struct thì chúng ta
    phải mất thêm nhiều dòng nữa. Trong khi cách viết như trên thì chúng ta chỉ mất 1 dòng thôi, nó rất là gọn và sạch sẽ.
    - Person1 p("Le Nguyen Minh", 19); sau đó chúng ta truyền các tham số vào thì các tham số đó sẽ được tự động truyền
    vào HÀM KHỞI TẠO, bởi vì HÀM KHỞI TẠO là hàm tự động gọi khi chúng ta tạo/khai báo ra biến đó.
    */

    // Ví dụ về LƯU Ý (1):
    // Person p2;
    // p2.ho_ten = "Ozawa";
    /* Tức là chúng ta sẽ không viết lại được như thế này nữa, chương trình sẽ báo lỗi "no matching function for call to
    Person::Person()", nghĩa là không có hàm nào khớp cho lời gọi này. Hiểu đơn giản rằng, khi chúng ta khai báo Person p2;
    thì nó sẽ gọi đến 1 hàm khởi tạo Person, nhưng mà nó sẽ không còn nữa bởi vì chúng ta đã sửa hàm khởi tạo đấy thành
    hàm khởi tạo có tham số rồi.
    - Cách xử lý có 2 cách.
    Cách 1:
    */
    // Person p2("Ozawa", 25);
    // Cách 2: Chúng ta sẽ viết thêm 1 hàm khởi tạo nữa (nhìn lên (2))

    // (4) Cách mới: Đây là cách tạo 1 biến struct bằng hàm khởi tạo có tham số thì sẽ in ra:
    // "Da khoi tao bang ham Person(string ht, int t)"
    // Thay vì viết 2 câu lệnh p.ho_ten = "....";, p.tuoi = 19; thì chúng ta có thể viết ngắn gọn như sau:
    Person p("Le Nguyen Minh", 19);
    p.gioi_thieu_ban_than();

    cout << "\n";

    // Cách cũ: Đây là cách tạo 1 biến struct bằng hàm khởi tạo không có tham số thì sẽ in ra:
    // "Da khoi tao bang ham Person()"
    Person p2;
    p2.ho_ten = "Le Thien Minh";
    p2.tuoi = 19;
    p2.gioi_thieu_ban_than();

    /*
    => KẾT LUẬN: Với việc dùng hàm khởi tạo có tham số sẽ gọn và đẹp code hơn rất nhiều. Không phải
    viết từng dòng sử dụng cú pháp p.<...> = ...,... như cách cũ, dữ liệu nhiều thì viết trông rất cồng kềnh
    - Và đây cũng chính là kiến thức sẽ gặp trong phần lập trình hướng đối tượng (OOP)
    */
}