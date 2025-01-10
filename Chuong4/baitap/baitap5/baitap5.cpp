#include <iostream>

using namespace std;

int main()
{
    float x, tien_taxi, km2_km30, km_30;
    tien_taxi = 15000;

    cout << "Nhap so km: ";
    cin >> x;

    if (x <= 1)
    {
        cout << "So tien phai tra: " << tien_taxi << "VND";
    }

    if (x >= 2 && x <= 30)
    {
        km2_km30 = tien_taxi + ((x - 1) * 13000);
        cout << "So tien phai tra: " << km2_km30 << "VND";
    }

    if (x > 30)
    {
        km_30 = ((tien_taxi + (29 * 13000)) + ((x - 30) * 10000));
        cout << "So tien phai tra: " << km_30 << "VND";
    }
}