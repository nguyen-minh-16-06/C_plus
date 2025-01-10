#include <iostream>
#include <cmath>

using namespace std;

// FUNCTION (HÀM)

/*
- Khi gặp 1 công việc có tính chất lặp lại, thì có thể tách công việc đó thành 1 chương trình hay đoạn code
riêng được gọi đó là function (chức năng, hàm)

- Khi chương trình được chia thành các function thì trông đoạn code gọn, tối ưu và đẹp hơn.

- Hàm trong lập trình cũng tương tự như hàm số trong toán học (y = f(x): y là 1 giá trị nhận kết quả từ 1
phép biến đổi f (f ở đây viết tắt là function, x là giá trị đầu vào), khi truyền 1 giá trị ban đầu vào sau 1
phép biến đổi f thì sẽ cho ra kết quả là y
*/

/*
Syntax:
return_data_type function_name(paramater list)
{
    content of function
}
*/

/*
Bài toán tìm max giữa 2 số nguyên
+ Với int - kiểu dữ liệu trả về
+ max - tên của hàm
+ (int a, int b) - phần tham số khai báo giống với khai báo biến (<kiểu dữ liệu> <tên biến>)
biến a, b chỉ tồn tại trong hàm max. 1 hàm có nhiều tham số, không chỉ riêng mỗi a và b (Tuỳ mục đích của hàm làm gì)
*/

int max(int a, int b)
{
    int result = 0;
    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    // Trả về kết quả cho cho hàm max
    return result;
}

/*
OVERLOADING: Có nghĩa là viết nhiều hàm có cùng tên vẫn được nhưng mà khác tham số
=> 2 hàm có cùng tên không được phép định nghĩa lại (đối với 2 hàm có cùng số lượng tham số)
Thêm 1 tham số int c để bài toán trở thành so sánh số lớn nhất giữa 3 số
Bài tập: Tìm số lớn nhất giữa 3 số ở bên dưới:
*/
int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
}

/* int main(): Bản thân int main() chính là 1 hàm bắt buộc đối với 1 chương trình C++ */
int main()
{
    // Ở đây có thể dùng các biến khác được, chẳng hạn như m, n, x, y,...
    // Tên của tham số có thể đặt tuỳ ý hoặc có thể truyền thẳng tham số vào mà không cần gán thông qua biến

    // VD 1: Gán biến cho hàm và in ra
    int m = 4;
    int n = 9;
    int ketQua1 = max(m, n);
    cout << "Ket qua so sanh 2 so lon nhat la: " << ketQua1 << "\n";


    // VD 2: Có thể dùng các tên biến khác được không cố định 1 tên biến
    int x = 15;
    int y = 5;
    int ketQua2 = max(x, y);

    cout << "Ket qua so sanh 2 so lon nhat la: " << ketQua2 << "\n";

    // VD 3: Truyền thẳng giá trị vào hàm mà không cần thông qua biến
    int ketQua3 = max(9, 7, 5);
    cout << "Ket qua so sanh 3 so lon nhat la: " << ketQua3 << "\n";

    // sqrt(ketQua); : Chính là 1 hàm và được định nghĩa trong thư viện <cmath> của C++
    // sqrt(ketQua);

    return 0;
}
