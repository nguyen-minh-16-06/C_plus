#include <iostream>

using namespace std;

int main()
{
    /* Phép phủ định (NOT) (Cú pháp x = !y)*/
    /* LƯU Ý: PHÉP PHỦ ĐỊNH CHỈ CÓ 1 TOÁN HẠNG x */
    bool a = false; // Minh dep trai
    bool b = true;  // Minh ngheo

    bool e1 = !a;
    // phu dinh cua minh dep trai la minh khong dep trai
    cout << "Phu dinh cua menh de a(sai) la: " << e1 << "\n";

    // phu dinh cua minh ngheo la minh giau
    bool e2 = !b;
    cout << "Phu dinh cua menh de b(dung) la: " << e2;
}