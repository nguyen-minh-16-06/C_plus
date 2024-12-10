#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    // TÌM ƯỚC CHUNG LỚN NHẤT

    /*
    Cách 1: Cách làm toán trung học phổ thông
    Tìm ước chung lớn nhất của 2 số a và b sẽ nằm trong khoảng từ số nhỏ hơn về 1
    Ví dụ:
    gcd(20,30) thì UCLN của 2 số sẽ nằm trong khoảng từ 20 đến 1.
    Sau đó ta duyệt dần từ 20 về 1, và số bắt gặp đầu tiên mà cả 2 số 20 và 30 đều chia hết thì chính là UCLN của 20 và 30.
    */

    if (a == 0 || b == 0)
    {
        cout << "Uoc chung lon nhat cach 1: " << max(a, b);
        return 0;
    }

    int ketqua;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ketqua = i;
            break;
        }
    }
    cout << "Uoc chung lon nhat cach 1: " << ketqua << "\n";

    /*
    Cách 2: Cách làm dựa vào thuật toán Euclid
    Thuật toán trình bày như sau: gcd(a,b) = gcd(b,a-b) (Ở đây coi a > b)
    Ví dụ:
    gcd(20,30) = gcd(20,10) <=> (Có nghĩa là 30 - 20 = 10)
               = gcd(10,10) <=> (Có nghĩa là 20 - 10 = 10)
    => KHI HAI THAM SỐ GIỐNG NHAU THÌ ĐÓ CHÍNH LÀ ƯỚC CHUNG LỚN NHẤT (TRONG TRƯỜNG HỢP NÀY LÀ 10).
    Trường hợp 2 số còn khác nhau thì cứ trừ dần cho nhau cho đến khi 2 số bằng nhau thì chúng ta đã tìm được UCLN.

    Ví dụ: gcd(18,8) = gcd(10,8) = gcd(2,8) = gcd(2,6) = gcd(2,4) = gcd(2,2)
    => 2 = 2. Vậy chúng ta đã tìm được UCLN của 2 số 18 và 8.
    Nhược điểm của thuật toán Euclid này sẽ chạy rất chậm nếu như a và b lệch nhau quá lớn.
    Ví dụ: gcd(10**9,1). Cứ trừ 1 cho đến khi 10**9 trở về số 1 thì tìm được UCLN của 2 số là 1.
    */

    if (a == 0 || b == 0)
    {
        cout << "Uoc chung lon nhat cach 2: " << max(a, b);
        return 0;
    }

    int lcm_a = a;
    int lcm_b = b;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << "Uoc chung lon nhat cach 2: " << a << "\n";

    // TÌM BỘI CHUNG NHỎ NHẤT
    // Chính là tích của a và b chia cho UCLN của 2 số a và b
    int lcm =  (lcm_a * lcm_b) / a;
    cout << "Boi chung nho nhat la: " << lcm;

    return 0;
}