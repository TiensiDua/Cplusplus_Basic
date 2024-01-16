#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const double PI_Goc = 3.141592653589793238462643383279502884197169399;

int main()
{
    int n = 1, DoChinhXac, SauDauPhay;
    long double Tong = 0.0, PI = 0.0;

    cout << "Do chinh xac cua so PI = ";
    cin >> DoChinhXac;
    cout << "Bao nhieu so sau dau phay : ";
    cin >> SauDauPhay;

    do
    {
        Tong += 1.0 / (n * n);
        n++;
    } while ((1.0 / (n * n)) > pow(10, DoChinhXac));

    PI = sqrt(6 * Tong);

    cout << fixed << setprecision(SauDauPhay);
    cout << "PI = " << PI << endl;

    long double TinCay = (PI / PI_Goc) * 100;

    cout << "Do chinh xac cua phep tinh = ";
    cout << fixed << setprecision(12) << TinCay << "%" << endl;

    return 0;
}