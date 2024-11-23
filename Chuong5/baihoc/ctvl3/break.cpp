#include <iostream>

using namespace std;

int main()
{
    // BREAK
    // break; : Dừng luôn vòng lặp (chỉ được sử dụng với loop for)
    //for (int i = 1; i <= 10; i++)
    //{
    //    break; // Bỏ luôn vòng lặp, tức là kết liễu luôn vòng for đang chạy
    //    cout << "Anh yeu em lan thu: " << i << "\n";
    //}

    // Ví dụ dễ hiểu:
    for (int i = 1; ; i++) // Vòng lặp vô hạn
    {
        if(i == 11)
        {
            break;
        }
        cout << "Anh yeu em lan thu: " << i << "\n";
    }

    return 0;
}