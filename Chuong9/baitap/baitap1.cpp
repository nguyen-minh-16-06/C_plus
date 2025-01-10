#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct nhanVien
{
    string hoTen;
    int tuoi;
    float heSoLuong;

    // Xài hàm có kiểu dữ liệu trả về
    float luong()
    {
        const float luongCoBan = 3000000;
        return heSoLuong * luongCoBan;
    }

    // Xài hàm không có kiểu dữ liệu trả về
    void luongcongviec()
    {
        const float luongCoBan = 3000000;
        float tienLuong = heSoLuong * luongCoBan;

        cout << fixed << setprecision(0);
        cout << "Tien luong cua " << hoTen << " la " << tienLuong << " VND";
    }
};

int main()
{
    nhanVien thongtin;

    cout << "Nhap ten: ";
    getline(cin, thongtin.hoTen);

    cout << "Nhap tuoi: ";
    cin >> thongtin.tuoi;

    cout << "Nhap he so luong: ";
    cin >> thongtin.heSoLuong;

    // setprecision(0); Không in phần thập phân
    cout << fixed << setprecision(0);

    // Xài hàm có kiểu dữ liệu trả về
    cout << "Tien luong cua " << thongtin.hoTen << " la " << thongtin.luong() << " VND" << "\n";

    // Xài hàm không có kiểu dữ liệu trả về
    thongtin.luongcongviec();

    return 0;
}