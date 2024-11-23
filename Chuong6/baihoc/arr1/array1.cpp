#include <iostream>

using namespace std;

int main()
{
    // Mảng (ARRAY)
    /*
    - Mảng hiểu đơn giản là 1 cái biến nhưng thay vì lưu 1 giá trị đơn lẻ, thì mảng lưu
    1 nhóm các giá trị có cùng kiểu dữ liệu với nhau
    */

    // Ví dụ:
    //  int x = 0; // Khai báo x chỉ lưu được 1 giá trị đơn như này
    //  int y = 1; // Tương tự như y

    // Để khai báo 1 mảng thì ta thêm 1 cặp dấu ngoặc vuông [] phía sau tên của biến
    // Ví dụ: Ta khai báo 1 biến x với kiểu dữ liệu int và thêm [] ở phía sau x

    /*
    int x[] = 0; : có nghĩa là ta khai báo 1 mảng các số nguyên x
    - Trong đó: { , , , , }: chứa danh sách các giá trị, các danh sách cách nhau bởi 1 dấu phẩy
    , trong ngoặc vuông cần phải khai báo số lượng phần tử.
    Ví dụ: int x[5] = {}
    */
    int x[5] = {4, 1, 6, 9, 10};

    /*
    cout << x; : Với việc khai báo như này thì nó sẽ hiện ra địa chỉ của biến x (0x61fefc)
    sẽ được tìm hiểu trong các bài sau.
    */

    // Muốn in giá trị của mảng x ra thì phải gọi thêm vị trí của phần tử trong mảng.
    // Ví dụ:
    cout << x[0] << "\n"; // x[chỉ số index]: được tính từ 0 đến n-1
    // Với x[0] thì sẽ in ra số 4 vì 4 tương ứng với chỉ số đầu tiên (0) trong mảng.

    /*
    LƯU Ý:
    - Nếu truy cập vào phần tử vượt quá số lượng mà x này có (nghĩa là truy cập vào 6
    nhưng mảng x chỉ chứa tối đa 5 phần tử) thì chương trình không báo lỗi nhưng đưa ra
    1 giá trị ngẫu nhiên nào đó trên vùng nhớ của máy tính
    - Giả sử trong mảng khai báo có 5 phần tử tối đa nhưng ta khai báo thêm 1 phần tử
    trong dấu ngoặc {4, 1, 6, 9, 10, 21}; thì chương trình sẽ báo lỗi too many initializers
    (có quá nhiều khởi tạo) tức là vượt quá kích thước khai báo của mảng.
    - Vậy cách xử lý là ta chỉ cần khai báo int x[] = {,...};
        + Với []: có nghĩa là ta không biết trước được có bao nhiêu phần tử, để rỗng thì có thể
        thoải mái thêm bao nhiêu phần tử cũng được
    */
    int y[] = {4, 1, 6, 9, 10, 6};
    /*
    - Có thể truy xuất đến phần tử và sửa đổi giá trị cho nó.
    Ví dụ:
    */
    y[5] = 10;
    cout << y[5] << "\n"; // In ra 10 thay vì 6 như lúc trước

    /*
    - Nếu muốn in toàn bộ phần tử trong mảng thì đưa mảng vào 1 vòng for
    - Thực tế khi làm việc trên các mảng hay các kiểu dữ liệu danh sách sau này
    hầu như đều phải đưa vào vòng lặp (Vòng lặp và mảng gần như là đi liền với nhau)
    */

    int z[] = {4, 1, 6, 9, 10, 6};

    for (int i = 0; i < 6; i++)
    {
        cout << "Phan tu thu i trong mang la: " << z[i] << "\n"; // Với i là biến lặp qua từng phần tử của mảng
    }

    /*
    - Vẫn có các mảng liên quan đến kiểu dữ liệu khác cũng tương tự như kiểu dữ liệu số học sẽ được học ở phần sau
    */
    // Ví dụ:
    string s[] = {"Hello", "World", "I am Minh"};
    cout << s[2];

    return 0;
}