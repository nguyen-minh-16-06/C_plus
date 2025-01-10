#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Cấu trúc rẽ nhánh if else (Câu điều kiện)
    int tuoi;
    string gioi_tinh; // true: nam, false: nữ

    cout << "Nhap so tuoi: ";
    cin >> tuoi;

    cout << "Nhap gioi tinh: ";
    cin >> gioi_tinh;

    // Trong () phải là một biểu thức logic (True or False)
    // Các phép toán so sánh (Relation Operator), biểu thức
    if (tuoi >= 18)
    {
        // Cấu trúc if else lồng nhau
        if (gioi_tinh == "nam")
        /* LƯU Ý: Khi khai báo biến ở bên trong 1 cặp ngoặc nhọn {} thì chỉ DUY NHẤT được sử dụng
        ở bên trong cặp ngoặc nhọn {} đó thôi */
                        /* VÍ DỤ:
                            if (gioi_tinh == "nam")
                            {
                                int x = 0;
                                x++; (Trường hợp này vẫn được)
                                cout << "Du tuoi di tu.";
                            }
                            else if (gioi_tinh == "nu")
                            {
                                x++; (Trường hợp này sẽ báo lỗi)
                                cout << "Di trai cai tao cho nu.";
                            }
                            x++; (Trường hợp này cũng sẽ báo lỗi)

                        */
        {
            cout << "Du tuoi di tu.";
        }
        else if (gioi_tinh == "nu")
        {
            cout << "Di trai cai tao cho nu.";
        }
        else
        {
            cout << "Gioi tinh khong hop le.";
        }
    }
    else if ((tuoi >= 15 && tuoi <= 17))
    {
        cout << "Di trai giao duong.";
    }
    else if ((tuoi >= 11 && tuoi <= 14))
    {
        cout << "Giam sat tai gia.";
    }
    else
    {
        cout << "Chua du tuoi di tu.";
    }
}