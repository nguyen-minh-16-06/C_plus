#include <iostream>
#include <string> // Có thể có hoặc không cũng được vì trong <iostream> nó đã tích hợp string rồi

using namespace std;

int main()
{
    // BÀI TẬP XỬ LÍ CHUỖI (Bài tập phổ biến trong xử lí thông tin, xử lí dữ liệu)
    // Xử lí chuỗi có cả viết hoa và viết thường thành 1 chuỗi chỉ có viết thường.
    // Ví dụ chữ 'L', 'N', 'M' viết hoa thành chữ viết thường 'l', 'n', 'm'.

    string fullName = "Le Nguyen Minh";

    for (int i = 0; i < fullName.length(); i++)
    {
        /*
        LƯU Ý:
        - Các kí tự (char) hoàn toàn có thể đổi sang kiểu số nguyên => ta có phép c++.
        - Với phép cộng trong string thì cộng 2 chuối vào với nhau, nhưng với kiểu dữ liệu
        char thì cộng vào mã unicode (mã của chữ cái trong ASCII).
        - Mỗi 1 kí tự trong hệ thống máy tính đều có 1 mã unicode/ASCII (hiểu đơn giản là mã
        định danh cho kí tự đó).
        Ví dụ: 'A' = 65, 'B' = 66
        */
        for (char c = 'A'; c <= 'Z'; c++)
        {
            if (fullName[i] == c)
            {
                int distance = c - 'A';
                fullName[i] = 'a' + distance;
            }
        }
    }
    cout << fullName;

    return 0;
}