#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Person
{
    string name = "None";
};

int main()
{
    const int maxwidth = 7;

    int x = 3;
    float y = 10.5;
    bool z = true;
    string s = "abc";
    int a[3] = {1, 2, 3};
    Person p;

    cout << left;
    cout << setw(maxwidth) << " " << "Dia chi" << setw(maxwidth) << " " << "Gia tri" << "\n";
    cout << setw(maxwidth) << "x" << &x << setw(maxwidth) << " " << x << "\n";
    cout << setw(maxwidth) << "y" << &y << setw(maxwidth) << " " << y << "\n";
    cout << setw(maxwidth) << "z" << &z << setw(maxwidth) << " " << z << "\n";
    cout << setw(maxwidth) << "s" << &s << setw(maxwidth) << " " << s << "\n";
    cout << setw(maxwidth) << "a[0]" << &a[0] << setw(maxwidth) << " " << a[0] << "\n";
    cout << setw(maxwidth) << "a[1]" << &a[1] << setw(maxwidth) << " " << a[1] << "\n";
    cout << setw(maxwidth) << "a[2]" << &a[2] << setw(maxwidth) << " " << a[2] << "\n";
    cout << setw(maxwidth) << "p" << &p << setw(maxwidth) << " " << p.name << "\n";
    cout << setw(maxwidth) << "p.name" << &p.name << setw(maxwidth) << " " << p.name << "\n";

    return 0;
}