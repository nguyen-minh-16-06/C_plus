#include <iostream>

using namespace std;

int main()
{
    float canh1, canh2, canh3;
    cout << "Nhap do dai cua 3 canh: ";
    cin >> canh1 >> canh2 >> canh3;

    if ((canh1 + canh2 >= canh3) && (canh1 + canh3 >= canh2) && (canh2 + canh3 >= canh1))
    {
        if ((canh1 == canh2) && (canh2 == canh3))
        {
            cout << "Ket qua: tam giac deu.";
        }
        else if ((canh1 == canh2) || (canh1 == canh3) || (canh2 == canh3))
        {
            if ((canh3 * canh3 == (canh1 * canh1 + canh2 * canh2)) ||
                (canh2 * canh2 == (canh1 * canh1 + canh3 * canh3)) ||
                (canh1 * canh1 == (canh2 * canh2 + canh3 * canh3)) &&
                    ((canh1 == canh2) || (canh1 == canh3) || (canh2 == canh3)))
            {
                cout << "Ket qua: tam giac vuong can.";
            }
            else
            {
                cout << "Ket qua: tam giac can.";
            }
        }
        else if ((canh3 * canh3 == (canh1 * canh1 + canh2 * canh2)) ||
                 (canh2 * canh2 == (canh1 * canh1 + canh3 * canh3)) ||
                 (canh1 * canh1 == (canh2 * canh2 + canh3 * canh3)))
        {
            cout << "Ket qua: tam giac vuong.";
        }
        else
        {
            cout << "Ket qua: tam giac thuong.";
        }
    }
    else
    {
        cout << "Tam giac nay khong ton tai.";
    }
}