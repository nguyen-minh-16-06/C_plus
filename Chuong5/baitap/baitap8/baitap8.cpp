#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int temp = n;
    int reverse = 0;     // Biến lưu số đảo ngược
    int digit_count = 0; // Biến đếm số chữ số
    int sum_digits = 0;  // Biến tính tổng các chữ số
    int position;        // Vị trí chữ số muốn lấy
    int target_digit;    // Chữ số tại vị trí yêu cầu

    // Phân tích số n: đảo ngược số và tính tổng các chữ số
    while (temp > 0)
    {
        int digit = temp % 10;          // Lấy chữ số cuối
        reverse = reverse * 10 + digit; // Đảo ngược số
        sum_digits += digit;            // Cộng dồn tổng các chữ số
        digit_count++;                  // Tăng số lượng chữ số
        temp /= 10;                     // Bỏ chữ số cuối
    }

    // Kết quả 1: In ra số đảo ngược
    cout << "Ket qua 1: " << reverse << "\n";

    // Kết quả 2: In ra số lượng chữ số
    cout << "Ket qua 2: So n co " << digit_count << " chu so" << "\n";

    // Kết quả 3: In ra tổng các chữ số
    cout << "Ket qua 3: " << sum_digits << "\n";

    // Nhập vị trí muốn lấy chữ số
    cout << "Nhap vi tri muon lay: ";
    cin >> position;

    // Lấy chữ số tại vị trí yêu cầu
    if (position < 1 || position > digit_count)
    {
        cout << "Ket qua 4: Ko ton tai vi tri nay";
    }
    else
    {
        // Tính chữ số tại vị trí yêu cầu
        int temp_for_position = n;
        for (int i = 1; i < position; i++)
        {
            temp_for_position /= 10; // Bỏ chữ số cuối cho tới vị trí cần lấy
        }
        target_digit = temp_for_position % 10; // Lấy chữ số tại vị trí yêu cầu
        cout << "Ket qua 4: " << target_digit;
    }

    return 0;
}