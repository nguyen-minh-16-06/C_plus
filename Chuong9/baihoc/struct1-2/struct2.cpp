#include <iostream>
#include <string>

using namespace std;

/*
- Struct có những kiểu dữ liệu phức tạp không chỉ các kiểu dữ liệu nguyên thuỷ như: int, float,...
- Bên trong struct hoàn toàn có thể tồn tại 1 array, 1 struct và 1 array các struct
*/

struct Person
{
    string ho_ten;
    int tuoi;
    float chieu_cao;

    // Khai báo 1 array so_do có 3 phần tử trong struct Person (array thuộc struct)
    int so_do[3];

    // Khai báo 1 struct Dia_chi trong struct Person
    // Dia_chi: kiểu dữ liệu, dia_chi: tên biến
    Dia_chi dia_chi;
};

struct Dia_chi
{
    int so_nha;
    string phuong;
};

int main()
{
    Person p;
    p.ho_ten = "Nguyen Minh";
    p.tuoi = 19;
    p.chieu_cao = 1.75;


    /*
    - Tương tự như cách gọi thành phần bên trong biến p. Nhưng so_do là mảng thì cần phải
    thêm 1 phép truy cập phần tử nữa là so_do[i] (bên trong [i] là phần tử thứ index)
    VD:
    p.so_do[0] = 60; (lấy phần tử thứ 0 và cho nó bằng 60, tương tự các phần tử thứ index khác)
    */
    p.so_do[0] = 60;
    p.so_do[1] = 90;
    p.so_do[2] = 60;


    /*
    - Bên trong struct hoàn toàn tồn tại 1 struct khác (tức là trong struct hoàn toàn có thể có
    những cấu trúc dữ liệu phức tạp hơn. Và muốn truy cập các biến dữ liệu thì truy cập theo từng
    mức (mức ngoài, mức bên trong thứ nhất, mức bên trong cùng)

    - Truy cập struct trong struct bằng cách cú pháp sau:
    p.<biến thành phần của kiểu dữ liệu thứ nhất>.<biến thành phần của kiểu dữ liệu thứ hai>
    VD:
    
    Với dia_chi là biến thành phần của kiểu dữ liệu Person, so_nha là biến thành phần của kiểu dữ liệu dia_chi
    p.dia_chi.so_nha = 94;
    p.dia_chi.phuong = "Vinh Ninh";
    */
    p.dia_chi.so_nha = 94;
    p.dia_chi.phuong = "Vinh Ninh";


    /*
    - 1 array các struct (struct thuộc array)
    - array có cùng 1 kiểu dữ liệu
    => Vậy person_list[100] cũng có cùng 1 kiểu dữ liệu Person
    */
    Person person_list[100];
    person_list[0].ho_ten;

    /*
    VẤN ĐỀ ĐẶT RA: KHI NÀO NÊN NHÓM 1 DỮ LIỆU VÀO TRONG STRUCT ?
    VIỆC NHÓM DỮ LIỆU NÀY KHÔNG BẮT BUỘC. TUY NHIÊN, KHI GẶP 1 BÀI TOÁN VỚI CÁC DỮ LIỆU LIÊN
    QUAN MẬT THIẾT VỚI NHAU THÌ NÊN NHÓM LẠI VÀO 1 STRUCT SẼ GỌN VÀ DỄ QUẢN LÍ/NÂNG CẤP HƠN
    => VỚI CÔNG VIỆC NHÓM CÁC DỮ LIỆU LIÊN QUAN ĐẾN NHAU VÀO TRONG 1 STRUCT CHÍNH LÀ TIỀN ĐỀ
    CỦA VIỆC LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG
    */
}