#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float x = 2.0;
    float y = 3.0;

    float d1 = (x * y) + (x / y);
    float d2 = x + (1 / (x + 1 / (x + 1 / (x + y))));
    float d3 = sqrt(pow((3 * x + 2 * y), 2) * pow((5 * x + 1), 3));
    cout << "Cau 1: " << d1 << "\n";
    cout << "Cau 2: " << d2 << "\n";
    cout << "Cau 3: " << d3;
}