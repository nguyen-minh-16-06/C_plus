#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Nhập vào file
    ofstream fileOutput;

    fileOutput.open("Data.txt");

    fileOutput << "Xin chao" << "\n";
    fileOutput << "Toi ten Le Nguyen Minh" << "\n";

    fileOutput.close();
    cout << "Finished!" << "\n";

    // Đọc từ file
    ifstream fileInput;
    fileInput.open("Data.txt");

    string line;
    // Sử dụng vòng lặp while để chạy hết các dòng trong file, nếu chạy hết thì kết thúc vòng lặp
    while (getline(fileInput, line))
    {
        cout << line << "\n";
    }

    fileInput.close();

    return 0;
}