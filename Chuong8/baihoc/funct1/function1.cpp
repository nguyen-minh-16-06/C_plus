#include <iostream>
#include <cmath>

using namespace std;

// FUNCTION (HÀM)

/*
- Khi gặp 1 công việc có tính chất lặp lại, thì có thể tách công việc đấy ra thành 1 chương trình
hay đoạn code riêng và người ta gọi đó là function (chức năng, hàm).

- Khi chương trình được chia thành các function thì trông đoạn code gọn, tối ưu và đẹp hơn.

- Hàm trong lập trình cũng tương tự như hàm số trong toán học (y = f(x): y là 1 giá trị nhận kết
quả từ 1 phép biến đổi f (f ở đây viết tắt là function), x là giá trị đầu vào, khi chúng ta truyền
1 giá trị ban đầu vào, sau 1 phép biến đổi f thì sẽ cho ra kết quả là y)
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
và biến a, b chỉ tồn tại trong hàm max. 1 hàm có nhiều tham số, không chỉ riêng mỗi a và b (Tuỳ mục đích của hàm làm gì)
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

    return result; // Trả về kết quả cho cho hàm max
}

// OVERLOADING: Có nghĩa là viết nhiều hàm có cùng tên vẫn được nhưng mà khác tham số

/* => 2 hàm có cùng tên không được phép định nghĩa lại (đối với 2 hàm có cùng số lượng tham số)
Thêm 1 tham số int c để bài toán trở thành so sánh số lớn nhất giữa 3 số.
*/
int max(int a, int b, int c)
{
    // Phần bài tập: Tìm số lớn nhất giữa 3 số
    int result = 0;
    if (a > b && a > c)
    {
        result = a;
    }
    else if (b > a && b > c)
    {
        result = b;
    }
    else if (c > a && c > b)
    {
        result = c;
    }

    return result;
}

/* int main(): ở đây bản thân int main() chính là 1 hàm bắt buộc đối với 1 chương trình C++ */
int main()
{
    // Ở đây chúng ta có thể dùng các biến khác được, chẳng hạn như m, n
    int m = 4;
    int n = 9;
    int ketQua = max(m, n); // Tên của tham số có thể đặt tuỳ ý, hoặc có thể truyền thằng số vào mà không cần phải biến
    sqrt(ketQua);           // sqrt(ketQua); : cũng chính là 1 hàm và được định nghĩa trong thư viện <cmath> của C++

    int x = 15;
    int y = 5;
    int ketQua2 = max(x, y);

    cout << ketQua << " " << ketQua2 << "\n";

    int ketQua3 = max(4, 7, 5);
    cout << ketQua3;

    return 0;
}
