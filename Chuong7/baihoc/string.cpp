#include <iostream>
#include <string> // Có thể có hoặc không cũng được vì trong <iostream> nó đã tích hợp string rồi

using namespace std;

int main()
{
    // STRING
    // String: bản chất là 1 mảng của các kí tự, mảng của các biến có kiểu là char.
    // Ví dụ:

    char c = 'v';

    // Ví dụ: Khi ta có 1 mảng tên là names và có kích thước là 10 chẳng hạn
    // Thì đó cũng chính là 1 sâu kí tự.
    // Muốn biểu diễn 1 xâu kí tự, 1 chuỗi kí tự thi chúng ta có 2 cách.
    // 1 là dùng mảng các char.

    char names[10] = {'N', 'g', 'u', 'y', 'e', 'n'};


    /*
    - Với ngôn ngữ C++ hiện tại bây giờ thì người ta cải tiến, cung cấp cho user 1 kiểu dữ liệu nâng cao
    đó chính là string. Để tiện lợi hơn, không cần phải khai báo mảng ở đằng sau tên biến nữa.
    Ngoài ra còn có nhiều chức năng khác ở bên trong string nữa.
    - Có thể coi "name" như là 1 biến có kiểu là xâu (string), còn ở char names... ta coi đó là 1 mảng các kí tự.
    - Với 1 mảng như string name, ta có thể khai báo không cần gán giá trị
    */

    // string name; // Lúc này name <=> như 1 mảng/xâu rỗng (tương đương với string name = "";)
    // name = "Nguyen Minh"; // Và sau khi khai báo xong ta có thể gán lại cho nó sau.


    /* TÍNH NĂNG 1: NỐI CHUỖI (CỘNG 2 CHUỖI LẠI VỚI NHAU)
    - Có 1 tính năng mở rộng mà chỉ có string mới có, còn kiểu char names[10] thì lại KHÔNG CÓ. Đó chính là khả năng
    nối chuỗi, cộng 2 chuỗi lại với nhau.
    */
    string firstName = "Le"; // Với C cũ thì viết first_name, nhưng với C++ firstName. (Cái này còn được gọi là coding convention)
    string lastName = "Nguyen Minh";
    string fullName = firstName + " " + lastName; // Cộng vào 2 biến 1 kí tự trắng (Vừa được phép cộng giữa 2 biến
    // với nhau, vừa đc phép cộng 1 chuỗi mà ta định nghĩa thêm trong fullName là " ")

    cout << "Ho va ten: " << fullName << "\n";


    /* TÍNH NĂNG 2: CHIỀU DÀI CỦA CHUỖI KÍ TỰ
    - Chẳng hạn ta muốn biết được 1 chuỗi kí tự có bao nhiêu phần tử (bao nhiêu chữ cái trong đó), thông thường với mảng
    thì ta sẽ cho 1 biến đếm/duyệt rồi đếm/duyệt qua từng phần tử trong mảng.
    - Tuy nhiên với string có 1 cách khác nhanh hơn để lấy kích thước (tức là số lượng các kí tự) thì ở chữ fullName ta
    thêm dấu .length(); (Với .length() là 1 function (hay còn gọi là method), đây là 1 chức năng con ở bên trong 1 biến,
    và chỉ có những biến mở rộng mới có các chức năng con này).
    - Còn những kiểu dữ liệu như char, int, float,... thì sẽ không có, vì vậy người ta gọi các những kiểu dữ liệu đó là
    kiểu dữ liệu nguyên thuỷ. String là 1 kiểu dữ liệu mở rộng, và mở rộng thì có nhiều các chức năng được tích hợp bên
    trong đó.
    */

    cout << "Do dai cua chuoi la: " << fullName.length() << "\n";


    /* TÍNH NĂNG 3: CẮT CHUỖI KÍ TỰ LỚN THÀNH CHUỖI KÍ TỰ NHỎ
    - Ta có thể cắt 1 chuỗi kí tự lớn thành 1 chuỗi kí tự nhỏ, đầu tiên ta đặt 1 chuỗi kí tự nhỏ với tên biến là "name"
    sau đó ta thêm 1 hàm .substr(3, 13); ở đằng sau fullName (Với 3 và 13 là các thông/tham số cần truyền vào):
        + Với tham số đầu tiên ta nhập là vị trí của kí tự đầu tiên mà ta muốn trích xuất ra, ví dụ với từ Le Nguyen Minh
    và muốn cắt ra thì ta phải biết được vị trí chữ "N" trong chuỗi lớn là vị trí bao nhiêu "N" là vị trí số 3.
        + Với tham số thứ hai là số kí tự mà ta muốn lấy tính từ vị trí đầu tiên (tức vị trí số 3) là 13 kí tự bắt đầu
    từ kí tự ở vị trí số 3.
    */

    string name = fullName.substr(3, 13);
    cout << "Cat chuoi ki tu: " << name << "\n";


    /* TÍNH NĂNG 4: KHẢ NĂNG TRUY CẬP CÁC PHẦN TỬ
    - Mặc dù string ở đây được coi là 1 kiểu dữ liệu nâng cao, nhưng bản chất thì nó vẫn được coi là 1 array (mảng) của
    các kí tự (tức là ta vẫn có thể truy xuất biến name dưới dạng array).
    - Ta thêm ở đăng sau tên biến "name" vị trí của phần tử trong array (Với [0] là chữ N trong array "name"). Ta hoàn
    toàn có thể truy xuất nó giống như 1 array của kiểu dữ liệu kiểu char.
    - Tương tự, ngoài việc truy xuất ra thì ta có thể sửa đổi các thông tin bên trong array theo kiểu array.
    Ví dụ:
    name[0] = 'B'; (Nguyen Minh => Bguyen Minh)
    */

    cout << "Truy xuat phan tu trong chuoi ki tu: " << name[0] << "\n";

    for (int i = fullName.length() - 1; i >= 0; i--)
    {
        cout << fullName[i];
    }

    return 0;
}