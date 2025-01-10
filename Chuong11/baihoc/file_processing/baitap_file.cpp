#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fileInput;
    fileInput.open("DSSV.txt");

    string line;
    while (getline(fileInput, line))
    {
        string info;
        string delimiter = ";";

        info = "Ho ten: ";

        int pos_of_delimiter = line.find(delimiter);
        info = info + line.substr(0, pos_of_delimiter);

        line = line.substr(pos_of_delimiter + 1, line.length() - 1);
        pos_of_delimiter = line.find(delimiter);
        info = info + "  Tuoi: " + line.substr(0, pos_of_delimiter);

        line = line.substr(pos_of_delimiter + 1, line.length() - 1);
        pos_of_delimiter = line.find(delimiter);
        info = info + "  Diem chu: " + line.substr(0, pos_of_delimiter);

        cout << info << "\n";
    }

    fileInput.close();

    return 0;
}