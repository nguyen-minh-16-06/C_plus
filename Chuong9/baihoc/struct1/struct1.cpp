#include <iostream>
#include <string>

using namespace std;

// STRUCT
/*
- Struct khá giống với array (mảng), nhưng nó khác với array (Tập các dữ liệu có cùng kiểu dữ liệu (datatype))
là tập các dữ liệu khác kiểu dữ liệu với nhau (datatype)
- Dưới đây là 3 biến khác kiểu dữ liệu với nhau (1 string, 1 int, 1 float) và chắc chắn 3 kiểu dữ liệu này không thể
lưu được vào array (mảng).
- Để nhóm được 3 biến dữ liệu này vào trong 1 tập hợp duy nhất thì ta phải tạo ra 1 kiểu dữ liệu mới khác với array.
*/

/*
Syntax:
  struct   <tên của kiểu dữ liệu>
(keyword)
{
    content of struct (nội dung của struct)
    Liệt kê các biến thành phần trong kiểu dữ liệu struct này
};

*/

/*
- Toàn bộ cấu trúc struct bên dưới chỉ là định nghĩa ra kiểu dữ liệu mà thôi (tức là chỉ định rằng kiểu dữ liệu Person
này bao gồm các thông tin như ho_ten, tuoi, chieu_cao).
- Nếu muốn các dữ liệu này đi vào hoạt động thì ta phải khai báo chúng ra và cách khai báo giống như cách chúng ta
khai báo các biến nguyên thuỷ, ví dụ như: Person p; (ở đây kiểu dữ liệu là Person và p là biến), tức là biến p gồm có 3
thành phần: ho_ten, tuoi, chieu_cao.
*/

struct Person
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
};

/*
Bây giờ ta sẽ tuỳ biến cho Struct trên phức tạp hơn 1 chút để có cái nhìn trực quan và linh động hơn về kiểu dữ liệu này.
- Chúng ta có thể thấy bên trong Struct thì chúng ta có thể khai báo các kiểu dữ liệu khác nhau và thực tế nó không chỉ
có các kiểu dữ liệu cơ bản như string int float đâu mà chúng ta có thể đưa vào Struct những kiểu dữ liệu phức tạp hơn.
Ví dụ như là mảng chẳng hạn, bên trong Struct hoàn toàn có thể tồn tại 1 array (mảng).
- Và ở bên trong Struct hoàn toàn có thể tồn tại 1 Struct khác.
- Ở bên trong Person1 thì chúng ta có thể khai báo struct Dia_chi
- Chúng ta cũng hoàn toàn có thể có 1 array (mảng) các Struct
*/

struct Dia_chi
{
    int so_nha;
    string phuong;
};

struct Person1
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    int so_do[3];    // Định nghĩa bên trong Struct 1 array (mảng)
    Dia_chi dia_chi; // Với Dia_chi là kiểu dữ liệu, dia_chi là tên biến
};

int main()
{
    /*
    - Chẳng hạn như trong mảng x[3] = {1, 2, 3};. Thì với biến mảng, thì chúng ta không thể gọi mỗi tên mảng "x = ;" ra
    như vậy được. Mà ta phải chỉ định rõ là phần tử thứ mấy (tức index thứ mấy). Thì trong struct, cách làm cũng tương tự
    như vậy. Tức là chúng ta phải chỉ định phần tử nào trong struct đó.
    */
    int x[3] = {1, 2, 3};
    x[0];

    Person p;
    /*
    - Cách để lấy các giá trị ho_ten, tuoi, chieu_cao ra thì ta gọi biến p và bấm dấu chấm "." (dấu chấm có nghĩa là truy
    cập đến 1 phần tử thuộc biến p), ví dụ: p.ho_ten = "Nguyen Minh";.
    - Tương tự như 1 phép gán bình thường, nhưng p là biến struct thế nên nó phải chỉ định rõ là chúng ta gán giá trị cho
    phần tử nào trong biến p.
    */
    p.ho_ten = "Nguyen Minh";
    p.tuoi = 19;
    p.chieu_cao = 1.75;

    cout << p.ho_ten << " nam nay " << p.tuoi << " tuoi.";
    /*
    Nguyen Minh nam nay 19 tuoi.
    - Với lệnh cout như trên, trong đó Nguyen Minh và 19, chúng ta truy xuất từ biến p ra (p.ho_ten, p.tuoi).
    - Vậy tức là nó không khác gì như 1 biến bình thường, và thật ra là chúng ta nhóm/gộp nó lại vào 1 cấu trúc liên quan
    đến nhau và đặt cho chúng 1 cái tên Person (trong đó các dữ liệu/biến (ho_ten, tuoi, chieu_cao) có liên quan đến nhau,
    đó là thông tin của 1 con người).
    */

    /*
    - Khi chúng ta khai báo biến Person1 (biến p) thì có nghĩa là chúng ta đã có cái mảng so_do[3]; rồi.
    - Và khi truy cập đến mảng chúng ta sẽ gọi biến p và dấu chấm "." <tên phần tử thuộc biến>. Nhưng mà vì số đo (so_do)
    là 1 mảng thì ta lại thêm 1 phép truy cập phần tử nữa là so_do[0] (bên trong [index] là phần tử thứ index).
    Ví dụ: p.so_do[0] = 60; (lấy phần tử thứ 0 và cho nó bằng 60), tương tự các phần tử thứ index khác.
    - Sau khi có được Struct trong struct chúng ta truy cập bằng cách gõ p.<tên biến của kiểu dữ liệu>.<phần tử thuộc
    biến của kiểu dữ liệu>.
    Ví dụ:
    p.dia_chi.so_nha = 94;
    p.dia_chi.phuong = "Vinh Ninh";
    - Vậy bên trong Struct hoàn toàn có thể có 1 Struct con, hay nói 1 cách tổng quát rằng bên trong Struct hoàn toàn có
    thể có những cấu trúc dữ liệu phức tạp hơn. Và khi chúng ta truy cập các biến dữ liệu thì chúng ta truy cập theo từng
    mức, ví dụ mức ngoài là p, mức tiếp theo là mức struct, rồi đến mức biến ở bên trong cùng.
    */
    Person1 p;
    p.so_do[0] = 60;
    p.so_do[1] = 90;
    p.so_do[2] = 60;
    p.dia_chi.so_nha = 94;
    p.dia_chi.phuong = "Vinh Ninh";

    /*
    - Chúng ta cũng hoàn toàn có thể có 1 array (mảng) các Struct
    - Vừa rồi là array ở bên trong Struct, bây giờ là struct thuộc 1 array
    */
    Person person_list[100]; // Ở đây array có cùng 1 kiểu dữ liệu, tức person_list có cùng 1 kiểu dữ liệu Person
    person_list[0].ho_ten;

    // VẤN ĐỀ ĐẶT RA: KHI NÀO CHÚNG TA NÊN NHÓM 1 DỮ LIỆU VÀO TRONG STRUCT ?
    /* VIỆC NHÓM DỮ LIỆU NÀY KHÔNG BẮT BUỘC. TUY NHIÊN, KHI CHÚNG TA GẶP 1 BÀI TOÁN VỚI CÁC DỮ LIỆU CÓ LIÊN QUAN MẬT THIẾT
    VỚI NHAU THÌ NÊN NHÓM LẠI VÀO 1 STRUCT THÌ SẼ GỌN HƠN VÀ DỄ QUẢN LÍ HƠN.
    => VỚI CÔNG VIỆC NHÓM CÁC DỮ LIỆU LIÊN QUAN ĐẾN NHAU VÀO TRONG 1 STRUCT CHÍNH LÀ TIỀN ĐỀ CỦA VIỆC LẬP TRÌNH HƯỚNG ĐỐI
    TƯỢNG.
    */
}