#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct nhanVien
{
    string hoTen;
    int tuoi;
    float heSoLuong;
    float luong()
    {
        const float luongCoBan = 3000000;
        return heSoLuong * luongCoBan;
    }
};

int main()
{
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    const int MAX = 100;
    nhanVien thongtin[MAX];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << ":";
        cin.ignore();

        cout << "\nNhap ten: ";
        getline(cin, thongtin[i].hoTen);

        cout << "Nhap tuoi: ";
        cin >> thongtin[i].tuoi;

        cout << "Nhap he so luong: ";
        cin >> thongtin[i].heSoLuong;
        cin.ignore();

        sum += thongtin[i].luong();
    }

    for (int i = 0; i < n; j++)
    {
        cout << "\nThong tin nhan vien thu " << i + 1 << ":" << "\n";
        cout << "Ho ten: " << thongtin[i].hoTen << "\n";
        cout << "Tuoi: " << thongtin[i].tuoi << "\n";
        cout << "He so luong: " << thongtin[i].heSoLuong << "\n";
    }

    float luongTrungBinh = sum / n;
    cout << fixed << setprecision(0);
    cout << "\nLuong trung binh cua " << n << " nhan vien la: " << luongTrungBinh;

    return 0;
}