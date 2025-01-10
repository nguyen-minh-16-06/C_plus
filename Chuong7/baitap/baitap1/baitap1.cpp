#include <iostream>
#include <string>

using namespace std;

int main()
{
    string chuoikitu;
    cout << "Nhap chuoi: ";
    getline(cin, chuoikitu);

    int count = 0;
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        if (chuoikitu[i] == ' ')
        {
            count++;
        }
    }
    cout << "Ket qua 1: " << count << "\n";

    int demkituchu = 0, demkituso = 0;
    // int demkituchu = 0;
    // int demkituso = 0;
    // Cách 1:
    // for (int i = 0; i < chuoikitu.length(); i++)
    // {
    //     if (chuoikitu[i] >= 'a' && chuoikitu[i] <= 'z')
    //     {
    //         demkituchu++;
    //     }
    //     else if (chuoikitu[i] >= '0' && chuoikitu[i] <= '9')
    //     {
    //         demkituso++;
    //     }
    // }

    // Cách 2:
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (chuoikitu[i] == c)
            {
                demkituchu++;
            }
        }
        for (char c = '0'; c <= '9'; c++)
        {
            if (chuoikitu[i] == c)
            {
                demkituso++;
            }
        }
    }

    cout << "Ket qua 2: " << demkituchu << " ki tu chu & " << demkituso << " ki tu so\n";

    // Cách 1:
    string chuoiInHoa;
    string temp = chuoikitu;
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (chuoikitu[i] == c)
            {
                int distance = c - 'a';
                chuoikitu[i] = 'A' + distance;
            }
        }
    }
    chuoiInHoa = chuoikitu;
    cout << "Ket qua 3.1: " << chuoiInHoa << "\n";
    chuoikitu = temp;

    // Cách 2:
    string chuoiInhoa;
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        chuoiInhoa += toupper(chuoikitu[i]);
        // chuoiInhoa = chuoiInhoa + toupper(chuoikitu[i]);
    }
    cout << "Ket qua 3.2: " << chuoiInhoa << "\n";

    string kituso, kituchuoi;
    // string kituso; string kituchuoi;
    // string kituso;
    // string kituchuoi;
    // string kituso = "";
    // string kituchuoi = "";
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        char c = chuoikitu[i];
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            kituchuoi += c;
        }
        for (char c = '0'; c <= '9'; c++)
        {
            if (chuoikitu[i] == c)
            {
                kituso += chuoikitu[i];
                break;
            }
        }
    }
    cout << "Ket qua 4: " << kituchuoi << " " << kituso << "\n";

    string ketqua;
    for (int i = 0; i < chuoikitu.length(); i++)
    {
        if (chuoikitu[i] == '1')
        {
            ketqua += "mot";
        }
        else if (chuoikitu[i] == '2')
        {
            ketqua += "hai";
        }
        else if (chuoikitu[i] == '3')
        {
            ketqua += "ba";
        }
        else if (chuoikitu[i] == '4')
        {
            ketqua += "bon";
        }
        else if (chuoikitu[i] == '5')
        {
            ketqua += "nam";
        }
        else if (chuoikitu[i] == '6')
        {
            ketqua += "sau";
        }
        else if (chuoikitu[i] == '7')
        {
            ketqua += "bay";
        }
        else if (chuoikitu[i] == '8')
        {
            ketqua += "tam";
        }
        else if (chuoikitu[i] == '9')
        {
            ketqua += "chin";
        }
        else
        {
            ketqua += chuoikitu[i];
        }
    }
    cout << "Ket qua 5: " << ketqua << "\n";

    cout << "Ket qua 6: ";
    int chuthuong[26] = {0};
    int chuhoa[26] = {0};

    for (int i = 0; i < chuoikitu.length(); i++)
    {
        char c = chuoikitu[i];
        if (c >= 'a' && c <= 'z')
        {
            chuthuong[c - 'a']++;
            /* Bảng ASCII: a = 97, b = 98, c = 99
            i = 0
            chuthuong[a - 'a'] = chuthuong[0] + 1
            chuthuong[a - 'a'] =      0       + 1
            chuthuong[a - 'a'] =         1
            i = 1
            chuthuong[b - 'a'] = chuthuong[1] + 1
            chuthuong[b - 'a'] =      0       + 1
            chuthuong[b - 'a'] =         1
            i = 2
            chuthuong[c - 'a'] = chuthuong[2] + 1
            chuthuong[c - 'a'] =      0       + 1
            chuthuong[c - 'a'] =         1
            ...
            i = 10
            chuthuong[a - 'a'] = chuthuong[0] + 1
            chuthuong[a - 'a'] =      1       + 1
            chuthuong[a - 'a'] =         2
            i = 12
            chuhoa[X - 'A'] = chuhoa[23] + 1
            chuhoa[X - 'A'] =     0      + 1
            chuhoa[X - 'A'] =        1
            i = 13
            chuhoa[Y - 'A'] = chuhoa[24] + 1
            chuhoa[Y - 'A'] =     0      + 1
            chuhoa[Y - 'A'] =        1
            i = 14
            chuhoa[Z - 'A'] = chuhoa[25] + 1
            chuhoa[Z - 'A'] =     0      + 1
            chuhoa[Z - 'A'] =        1
            */
        }
        else if (c >= 'A' && c <= 'Z')
        {
            chuhoa[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (chuthuong[i] != 0)
        {
            cout << "(" << (char)(i + 'a') << "-" << chuthuong[i] << ") ";
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (chuhoa[i] != 0)
        {
            cout << "(" << (char)(i + 'A') << "-" << chuhoa[i] << ") ";
        }
    }

    return 0;
}