#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 8; i++)
    {
        if (i % 2 == 0)
        {
            continue; // continue thuộc cặp ngoặc nhọn nào thì tác động lên vòng lặp có ngoặc nhọn đó (loop for to)
        }
        cout << "Tuan thu " << i << ": \n";
        for (int j = 1; j <= 7; j++)
        {
            if (j % 2 == 0)
            {
                continue; // continue thuộc cặp ngoặc nhọn nào thì tác động lên vòng lặp có ngoặc nhọn đó (loop for nhỏ)
            }
            cout << "Anh yeu em ngay thu " << j << "\n";
        }
    }
    
    return 0;
}