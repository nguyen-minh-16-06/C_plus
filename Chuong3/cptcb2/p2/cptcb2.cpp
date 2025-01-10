#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x = 65;
    // int x = 1.5;
    /* Chuyển kiểu dữ liệu mở rộng từ string sang kiểu dữ liệu nguyên thuỷ */

    int y = x;
    string s = "123abc"; // Đọc từ đầu chuỗi đến khi gặp kí tự thì dừng lại (Tức là lấy kí tự số trở về trước)
    y = stoi(s);         // Sử dụng stoi(..) string to integer
    cout << y << "\n";

    //==========================================================
    float z = x;
    string b = "123.4";
    z = stof(b); // Sử dụng stof(..) string to float
    cout << z << "\n";

    /* Chuyển từ số sang chuỗi */
    string c = to_string(x);
    cout << c;
}