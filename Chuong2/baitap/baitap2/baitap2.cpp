#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ho_ten = "";
    int nam_sinh = 0;
    string que_quan = "";
    float chieu_cao = 0;
    float can_nang = 0;
    bool tinh_trang_hon_nhan = false;
    char ket_qua_tot_nghiep = 'G';

    cout << "Ho va ten: \n";
    getline(cin, ho_ten);

    cout << "Sinh nam: \n";
    cin >> nam_sinh;

    cin.ignore();
    cout << "Que quan: \n";
    getline(cin, que_quan);

    cout << "Chieu cao: \n";
    cin >> chieu_cao;

    cout << "Can nang: \n";
    cin >> can_nang;

    cout << "Tinh trang hon nhan: \n";
    cin >> tinh_trang_hon_nhan;

    cout << "Xep loai: \n";
    cin >> ket_qua_tot_nghiep;

    cout << "SO YEU LI LICH\n";
    cout << "\nHo va ten: " << ho_ten;
    cout << "\nSinh nam: " << nam_sinh;
    cout << "\nQue quan: " << que_quan;
    cout << "\nChieu cao: " << chieu_cao << " m\n";
    cout << "Can nang: " << can_nang << " kg\n";
    cout << "Tinh trang hon nhan: " << tinh_trang_hon_nhan;
    cout << "\nKet qua tot nghiep: " << ket_qua_tot_nghiep;
}