#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

struct SinhVien
{
    string ten;
    string gt;
    int tuoi;
    float dT, dL, dH, dTB;
};

typedef SinhVien SV;

void screen()
{
    system("cls");
    cout << "******************************************\n";
    cout << "**    CHUONG TRINH QUAN LY SINH VIEN    **\n";
    cout << "**      1. In danh sach sinh vien       **\n";
    cout << "**      2. Sap xep sinh vien theo dTB   **\n";
    cout << "**      3. Xep loai sinh vien           **\n";
    cout << "**      4. Xuat DS sinh vien ra file    **\n";
    cout << "**      5. Thoat                        **\n";
    cout << "**       Nhap lua chon cua ban ?        **\n";
    cout << "******************************************\n";
}

void nhap(SV a[], SV b[], int n)
{
    cout << "\n____________________________________\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1 << ": \n";
        cin.ignore();
        cout << "\nNhap ten: ";
        getline(cin, a[i].ten);
        b[i].ten = a[i].ten;
        cout << "\nNhap gioi tinh: ";
        getline(cin, a[i].gt);
        b[i].gt = a[i].gt;
        cout << "\nNhap tuoi: ";
        cin >> a[i].tuoi;
        b[i].tuoi = a[i].tuoi;
        cout << "\nNhap diem 3 mon: ";
        cin >> a[i].dT >> a[i].dL >> a[i].dH;
        a[i].dTB = (a[i].dT + a[i].dL + a[i].dH) / 3;
        b[i].dTB = a[i].dTB;
    }
    cout << "\n____________________________________\n";
}

void mode1(const SV a[], int n)
{
    cout << "\n____________________________________\n";
    for (int i = 0; i < n; i++)
    {
        cout << "---Sinh vien thu " << i + 1 << "---\n";
        cout << "Ho ten SV: " << a[i].ten << "\n";
        cout << "Gioi tinh: " << a[i].gt << "\n";
        cout << "Tuoi: " << a[i].tuoi << "\n";
        cout << "Diem Toan: " << fixed << setprecision(1) << a[i].dT << "\n";
        cout << "Diem Ly: " << a[i].dL << "\n";
        cout << "Diem Hoa: " << a[i].dH << "\n";
    }
    cout << "____________________________________\n";
}

void mode2(SV b[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i].dTB < b[j].dTB)
            {
                swap(b[i], b[j]);
            }
        }
    }

    cout << "\n____________________________________\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nTop " << i + 1 << ": " << b[i].ten << ": " << fixed << setprecision(1) << b[i].dTB << " diem";
    }
    cout << "\n____________________________________\n";
}

void mode3(const SV a[], int n)
{
    cout << "\n____________________________________\n";
    for (int i = 0; i < n; i++)
    {
        if (a[i].dTB >= 8)
        {
            cout << "\n"
                 << a[i].ten << " la hoc sinh gioi";
        }
        else if (a[i].dTB >= 6.5)
        {
            cout << "\n"
                 << a[i].ten << " la hoc sinh tien tien";
        }
        else if (a[i].dTB >= 5)
        {
            cout << "\n"
                 << a[i].ten << " la hoc sinh trung binh";
        }
        else
        {
            cout << "\n"
                 << a[i].ten << " la hoc sinh yeu";
        }
    }
    cout << "\n____________________________________\n";
}

void mode4(const SV a[], int n, const string &fileName)
{
    ofstream outFile(fileName);
    if (!outFile)
    {
        cerr << "Failed to open file!\n";
        return;
    }

    outFile << left << setw(20) << "Ho Ten"
            << setw(10) << "GT"
            << setw(5) << "Tuoi"
            << setw(10) << "DT"
            << setw(10) << "DL"
            << setw(10) << "DH"
            << setw(10) << "DTB" << endl;

    for (int i = 0; i < n; i++)
    {
        outFile << left << setw(20) << a[i].ten
                << setw(10) << a[i].gt
                << setw(5) << a[i].tuoi
                << setw(10) << fixed << setprecision(1) << a[i].dT
                << setw(10) << a[i].dL
                << setw(10) << a[i].dH
                << setw(10) << a[i].dTB << endl;
    }
    outFile.close();
    cout << "DS Sinh vien da duoc luu trong " << fileName << "!\n";
}

void mode5()
{
    string s;
    cout << "Are you sure ?\nYes/No ? ";
    cin >> s;
    if (s == "Yes" || s == "yes")
    {
        cout << "Ban da thoat chuong trinh!\n";
        exit(0);
    }
}

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SV a[n], b[n];
    nhap(a, b, n);

    string fileName = "DSSV.txt";
    int key;

    while (true)
    {
        screen();
        cin >> key;
        switch (key)
        {
        case 0:
            cout << "\nBan da chon nhap DS sinh vien!";
            nhap(a, b, n);
            cout << "\nBan da nhap thanh cong!";
            break;
        case 1:
            cout << "**      1. In danh sach sinh vien       **\n";
            mode1(a, n);
            break;
        case 2:
            cout << "**      2. Sap xep sinh vien theo dTB   **\n";
            mode2(b, n);
            break;
        case 3:
            cout << "**      3. Xep loai sinh vien           **\n";
            mode3(a, n);
            break;
        case 4:
            cout << "**      4. Xuat DS sinh vien ra file    **\n";
            mode4(a, n, fileName);
            break;
        case 5:
            cout << "**      5. Thoat                        **\n";
            mode5();
            break;
        default:
            cout << "Khong co chuc nang nay!\n";
            break;
        }
        cout << "\nBam phim bat ky de tiep tuc!";
        cin.ignore();
        cin.get();
    }
}
