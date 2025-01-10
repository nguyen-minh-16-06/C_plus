#include <iostream>

using namespace std;

int main()
{
    // WHILE LOOP STATEMENT (Câu lệnh vòng lặp while)
    // - While được sử dụng khi không biết trước số lần lặp như thế nào, và dựa trên 1 điều kiện nào đó
    // - Là vòng lặp với 1 điều kiện logic xác định (Đúng hoặc sai)
    // - Nếu đúng thì chạy tiếp nếu sai thì dừng
    // - Cấu trúc khá giống với for loop nhưng câu lệnh khai báo ở bên ngoài cấu trúc
    // và câu lệnh tự tăng được sử dụng khi các câu lệnh trong vòng lặp được thực thi xong
    // - Với cách này thì sẽ kiểm tra điều kiện duy trì vòng lặp trước (tức while loop)
    // rồi mới thực hiện dòng lệnh "cout << ..."

    int i = 1;
    while (i <= 10)
    {
        cout << "Anh yeu em lan thu: " << i << "\n";
        i++;
    }

    // Có 1 cách viết tương tự (Ít sử dụng):
    // - Về mặt bản chất thì cách này khác ở thứ tự để kiểm tra, tức là với vòng do while này
    // thì sẽ kiểm tra dòng lệnh "cout <<..." trước rồi mới kiểm tra điều kiện dừng while(i <= 10);

    // int i = 1;
    // do
    //{
    //     cout << "Anh yeu em lan thu: " << i << "\n";
    //     i++;
    // }while (i <= 10);

    // Vẫn có 1 cách khác nữa, để linh động hơn trong việc sử dụng while loop

    int j = 1;
    bool duy_tri = true;
    while (duy_tri)

    // - Có thể viết tường minh: while(duy_tri == true) [Nhưng không nhất thiết phải cần vì
    // bản thân cú pháp của while() ở bên trong ngoặc tròn () luôn nhận giá trị/biểu thức true hoặc false
    // (1 biểu thức logic)]
    {
        cout << "Anh yeu em lan thu: " << j << "\n";
        if (j == 10)
        {
            duy_tri = false;
        }
        j++;
    }

    return 0;
}