#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ho_ten = "";
    int tuoi = 0;
    string que_quan = "";

    cout << "Ho va ten: ";
    getline(cin, ho_ten);
    // getline() để nhập chuỗi kí tự/dòng

    cout << "Bao nhieu tuoi: ";
    cin >> tuoi;
    // cin: lấy theo giá trị, và các giá trị đc phân biệt bởi dấu cách tức là coi dấu cách như 1 lần nhập
    // chẳng hạn như nếu ta gõ 30 31 thì nó chỉ lấy giá trị 30

    cin.ignore();
    // Hiện tượng này xảy ra khi ta gọi getline() sau cin

    cout << "Que quan o dau: ";
    getline(cin, que_quan);

    cout << ho_ten << " nam nay " << tuoi << " tuoi, que quan: " << que_quan;
}

/*=> Kết luận: nếu bài toán chỉ nhập số thì ta chỉ cần xài cin >>
nếu bài toán nhập chuỗi kí tự thì ta xài getline
và nếu như ta nhập chuỗi kí tự sau khi gọi cin (tức là nhập số sau khi nhập kí tự)
thì ta sử dụng cin.ignore(); : đóng vai trò xoá hết bộ nhớ đệm, xoá hết tín hiệu "enter" cũ*/