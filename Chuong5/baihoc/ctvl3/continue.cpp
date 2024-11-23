#include <iostream>

using namespace std;

int main()
{
    // CONTINUE
    // Continue; : là câu lệnh cho phép bỏ qua phần còn lại trong vòng lặp (chỉ được sử dụng với loop for)
    // - Bỏ qua ở đây có thể hiểu là bỏ qua vòng lặp hiện tại và nhảy sang vòng lặp tiếp theo
    //for (int i = 1; i <= 10; i++)
    //{
    //    cout << "Toi noi "; // Chỉ gọi đến lệnh này
    //    continue;           // Bỏ qua toàn bộ các dòng lệnh phía dưới
    //    cout << "Anh yeu em lan thu: " << i << "\n";
    //}

    // Ví dụ dễ hiểu:
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0) //Ở đây khi đến số 2 (chẵn) sẽ bỏ qua, nhảy sang số 3, 4 (bỏ qua),...
        {
            continue;
        }
        cout << "Anh yeu em lan thu: " << i << "\n";
    }

    return 0;
}