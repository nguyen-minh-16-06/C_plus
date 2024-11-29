#include <iostream>
#include <string>

using namespace std;

// Function in Struct (Hàm trong Struct) P2

/*
- Sau khi đã hiểu hàm ở bên trong struct là gì thì chúng ta sẽ được biết đến một hàm rất đặc biệt nữa, hàm này
đã tồn tại sẵn bên trong struct rồi (tức là chúng ta không cần phải định nghĩa nó), mà nó sẽ mặc định có sẵn.
- Hàm mà chúng ta sẽ tìm hiểu trong bài này chính là HÀM KHỞI TẠO (Constructor). Hàm này sẽ vẫn viết như cách
viết của 1 hàm số nhưng sẽ không có kiểu dữ liệu trả về và tên của hàm sẽ trùng tên với tên của struct.
- HÀM KHỞI TẠO tự động chạy, tự động được gọi mỗi khi chúng ta khai báo biến có kiểu dữ liệu tương ứng với struct
đó (tức là hàm Person() trong struct Person sẽ được gọi khi ở trong int main() chúng ta khai báo biến Person đó ra)
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

    // Tên của hàm trùng với tên của struct
    /*
    - Trong hàm này chúng tã sẽ in ra 1 thông báo, thường được gọi là log (log: ghi chép quá trình chạy của 1 phần mềm)
    và thường được dùng để check xem chương trình đã chạy đến đâu hoặc chạy đến hàm nào. Hiểu đơn giản là log in ra 1
    thông báo để xem chương trình chạy đến giai đoạn nào rồi. Và với cách viết log này phục vụ mục đích để kiểm tra, sau
    khi chúng ta chắc chắn về cái hoạt động của nó rồi thì chúng ta nên xoá nó đi.
    - Đó là 1 trong những kinh nghiệm viết log cho các hàm, để kiểm tra xem nó đã được gọi bình thường hay chưa.
    */

    // Person() // Đây là HÀM KHỞI TẠO (Constructor) - mặc định có sẵn khi chúng ta khởi tạo 1 struct.
    //{
    //     cout << "Da khoi tao xong 1 person\n";
    // }

    /*
    - Hàm khởi tạo này cũng chỉ là 1 hàm bình thường, cũng có thể được phép truyền tham số vào.
    - LƯU Ý: Khi chúng ta viết tham số cho hàm khởi tạo thì chúng sẽ không dùng được HÀM KHỞI TẠO mặc định ban đầu nữa. (1)
    */
    Person(string ht, int t)
    {
        cout << "Da khoi tao bang ham Person(string ht, int t)\n";
        ho_ten = ht; // Hoàn toàn có thể truy cập trực tiếp được như thế này bởi vì Person1 cùng phạm vi, cùng trong
        tuoi = t;    // struct với 2 biến ho_ten và tuoi
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

    void gioi_thieu_ban_than()
    {
        cout << "Xin chao !\nToi la " << ho_ten << "\n";
        cout << "Nam nay toi " << tuoi << " tuoi";
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
    - Dòng chữ "Da khoi tao xong 1 person" được in ra có nghĩa là câu lệnh cout bên trên đã được gọi, và nó được gọi
    khi chúng ta khai báo 1 Person. Vì vậy nó có tên HÀM KHỞI TẠO, nó sẽ được TỰ ĐỘNG GỌI khi chúng ta KHỞI TẠO/KHAI
    BÁO BIẾN 1 struct.
    */

    // Person p;
    // p.ho_ten = "Le Nguyen Minh";
    // p.tuoi = 19;
    // Trong hàm main() chỉ có duy nhất câu lệnh bên dưới là câu lệnh gọi hàm.
    // p.gioi_thieu_ban_than();

    // Thay vì viết 2 câu lệnh p.ho_ten = "....";, p.tuoi = 19; thì chúng ta có thể viết ngắn gọn như sau:
    // Person p("Le Nguyen Minh", 19);
    // p.gioi_thieu_ban_than();
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
    - KẾT LUẬN: Với việc dùng hàm khởi tạo có tham số, nó gọn và đẹp code hơn rất nhiều. Không phải viết từng dòng và
    sử dụng cú pháp p.<...> = ...,... như Cách cũ, dữ liệu mà nhiều thì sẽ viết trông rất cồng kềnh và nản chí.
    - Và đây cũng chính là kiến thức mà chúng ta sẽ gặp trong phần lập trình hướng đối tượng (OOP).
    */
}