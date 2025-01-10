#include <iostream>

using namespace std;

/*
REFERENCE, POINTER IN FUNCTION
*/

// Pass by value
void add_one_pointer(int x) // Khai báo 1 biến x ở tham số
{
    x++;
}

// Pass by pointer
void add_one_pointer(int *p) // Khai báo 1 con trỏ ở tham số
{
    // Truy cập giá trị của x_main thông qua (*p)
    (*p)++;
}

// Pass by reference
void add_one_reference(int &r) // Khai báo reference với toán tử &
{
    r++;
}

int main()
{
    int x_main_pointer = 10;
    // Truyền địa chỉ của biến vào đối số của hàm
    add_one_pointer(&x_main_pointer);
    /*
    Ý nghĩa: Làm thay đổi nội dung của biến truyền vào đối số của hàm (truyền dưới dạng con trỏ)
    */
    cout << "x (con tro) = " << x_main_pointer << "\n";


    int x_main_reference = 10;
    add_one_pointer(x_main_reference);
    /*
    - Viết dưới dạng reference sẽ ngắn gọn hơn và tiện hơn pointer
    */
    cout << "x (reference) = " << x_main_reference;

    /*
    - Mục đích của 2 cách pass by pointer/reference đều là thay đổi dữ liệu của biến truyền vào đối số
    
    - Tuỳ từng tình huống để đưa ra cách dùng pointer hay reference khác nhau
    */

    return 0;
}