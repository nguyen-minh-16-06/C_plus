/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 10 ****************************
********************** vunguyencoder.com **************************************

Chương trình sau cần in ra văn bản như hình minh hoạ.
Ko thêm bớt dòng code nào, chỉ được phép di chuyển các dòng code có sẵn.
Hãy sửa để chương trình sau chạy được mà ko lỗi.

Lưu ý: Các dòng code có đánh dấu (*) là được phép di chuyển
*******************************************************************************/

#include <iostream>

using namespace std;

std::string ho_ten = "Maria Ozawa";  // (*)
int so_do_ba_vong[3] = {90, 60, 90}; // (*)
std::string que_quan = "Nhat Ban";   // (*)
int tuoi = 20;                       // (*)

void xin_chao()
{
    cout << "Xin chao. Toi ten la " << ho_ten << ".\n";
}

void thong_tin_tuoi()
{
    cout << "Toi nam nay " << tuoi << " tuoi.\n";
}

void thong_tin_que_quan()
{
    cout << "Toi den tu " << que_quan << ".\n";
}

void thong_tin_so_do()
{
    std::cout << "So do ba vong cua toi la: ";
    for (int i = 0; i < 3; i++)
    {
        cout << so_do_ba_vong[i] << " ";
    }
}

int main()
{

    {
        {
            {
                {
                }
            }
        }
    }
    xin_chao();

    thong_tin_tuoi();

    thong_tin_que_quan();

    thong_tin_so_do();
}