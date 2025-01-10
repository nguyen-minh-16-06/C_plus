#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct MH
{
    string MaMH;
    string tenMH;
};

int main()
{
    MH hh[100];
    int n;
    cout << "Nhap so luong mat hang: ";
    cin >> n;
    cin.ignore();

    ofstream savefile;
    savefile.open("DATA.txt");

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ma hang " << i + 1 << ": ";
        getline(cin, hh[i].MaMH);

        cout << "Nhap ten hang " << i + 1 << ": ";
        getline(cin, hh[i].tenMH);

        savefile << "Ma hang: " << hh[i].MaMH << "\n";
        savefile << "Ten mat hang: " << hh[i].tenMH << "\n";
    }
    savefile.close();

    cout << "\n";
    cout << "CAC MAT HANG LA: " << "\n";

    ifstream readfile;
    readfile.open("DATA.txt");

    string line;
    while (getline(readfile, line))
    {
        cout << line << "\n";
    }
    readfile.close();

    return 0;
}