#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

const double PI = 3.141592653589793238462643383279502884197169399;

int main()
{
    // Khai báo biến
    double radius, area, volume;
    int DoChinhXac;

    // Nhập vào các số liệu
    cout << "Radius = ";
    cin >> radius;
    cout << "Do chinh xac sau dau phay : ";
    cin >> DoChinhXac;

    // Tính toán
    area = 4 * PI * pow(radius, 2);
    volume = (radius * area) / 3;

    // In ra kết quả
    cout << "Area = ";
    cout << fixed << setprecision(DoChinhXac) << area << endl;
    cout << "Volume = ";
    cout << fixed << setprecision(DoChinhXac) << volume << endl;

    return 0;
}