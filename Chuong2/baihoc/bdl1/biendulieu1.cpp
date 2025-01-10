#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tuoi = 30;         // 4byte
    float can_nang = 60.5; // 4byte
    char xep_loai = 'A';   // ASCII 1byte
    string ho_ten = "Le Nguyen Minh";
    bool chua_ket_hon = true; // 1byte
    const float pi = 3.14;

    cout << "Toi nam nay " << tuoi << " tuoi\n";
    cout << "Toi duoc xep loai " << xep_loai;
    cout << "\nToi co ten la " << ho_ten;
    cout << "\nToi chua co vo: " << chua_ket_hon;

    /* Các cách khai báo và khởi tạo rút gọn trong C++:
    1. Đối với chuỗi (string):
    - Cách 1:
    string ho_ten, que_quan;
    - Cách 2:
    string kituso; string kituchuoi;
    - Cách 3:
    string ho_ten;
    string que_quan;
    - Cách 4:
    string ho_ten = "";
    string que_quan = "";
    => Các cách trên đều ra 1 kết quả khai báo 1 chuỗi rỗng như nhau.

    2. Đối với các kiểu dữ liệu số (int, float,...):
    - Cách 1:
    int tuoi = 19, soDu_taiKhoan = 1000000;
    - Cách 2:
    int tuoi = 19;
    int soDu_taiKhoan = 1000000;
    (Tương tự đối với float và các kiểu dữ liệu số khác)
    */
}