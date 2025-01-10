#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Cấu trúc lựa chọn (Switch Case)
    int month;
    string s = "";

    cout << "Nhap thang: ";
    cin >> month;

    switch (month)
    /* switch() với (biến điều kiện) thường các biến này là các biến số nguyên
    hoặc là 1 biến kí tự, tức là biến có thể thay đổi giá trị được (tránh các biến const)
    */
    {
    case 1:
        s = "January";
        break; // Bắt buộc phải có break;
    case 2:
        s = "February";
        break;
    case 3:
        s = "March";
        break;
    case 4:
        s = "April";
        break;
    }
    // Nếu không có break; thì luồng chương trình sẽ chạy cho đến khi hết case.
    // Ví dụ: Nếu không có break mà ta nhập tháng vào 1, 2, 3 thì nó vẫn sẽ chạy
    // và chạy qua từng case cho đến 4 rồi in ra 4
    // Còn nếu có break thì khi ta nhập 1 vào thì nó sẽ dừng ngay luồng chương trình tại 1
    cout << s;
}