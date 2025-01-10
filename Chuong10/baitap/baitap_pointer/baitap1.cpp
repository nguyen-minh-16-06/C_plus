#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Câu 1:
    int x = 1;
    int y = 2;
    int z = 3;

    int *p = &x;
    (*p)++;

    p = &y;
    (*p)--;

    p = &z;
    (*p) -= 3;

    cout << x << " " << y << " " << z << "\n";

    // Câu 2:
    int x2 = 1;
    int *p2 = &x2;
    int *q2 = p2;

    (*p2)++;
    (*q2)++;

    cout << x2 << " " << *p2 << " " << *q2;

    return 0;
}