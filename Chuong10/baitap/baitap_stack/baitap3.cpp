#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Person
{
    string hoTen = "";
    int tuoi;
    float chieuCao, canNang;
};

int main()
{
    Person p;
    p.hoTen = "Nguyen Anh Vu";
    p.tuoi = 30;
    p.chieuCao = 1.75;
    p.canNang = 62;
    Person *p1 = &p;

    cout << "Cau 1: Dia chi cua p la " << p1 << "\n";
    cout << "Cau 2:\n";

    cout << left;
    cout << setw(12) << " " << "Dia chi" << setw(8) << " " << "Gia tri" << "\n";
    cout << setw(12) << "p.hoTen " << &p.hoTen << setw(7) << " " << p.hoTen << "\n";
    cout << setw(12) << "p.tuoi " << &p.tuoi << setw(7) << " " << p.tuoi << "\n";
    cout << setw(12) << "p.chieuCao " << &p.chieuCao << setw(7) << " " << p.chieuCao << "\n";
    cout << setw(12) << "p.canNang " << &p.canNang << setw(7) << " " << p.canNang << "\n";

    cout << "Cau 3: Dung luong cua p la " << sizeof(Person) << " bytes";

    return 0;
}