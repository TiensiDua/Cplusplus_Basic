#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const double PI = 3.14159;

int main()
{
    double BanKinh;
    cout << "Nhap ban kinh duong tron : ";
    cin >> BanKinh;

    double DienTich = pow(BanKinh, 2) * PI;

    cout << "Dien tich hinh tron da cho la : ";
    cout << fixed << setprecision(5) << DienTich << endl;
    return 0;
}
