#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Khai bao va nhap vao 3 so
    int a, b, c;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    // Cac bien de tinh toan
    int Tong = a + b + c;
    int Tich = a * b * c;
    double tbc = (double)Tong / 3;

    // In ra ket qua tinh toan
    cout << "Tong 3 so da cho = " << Tong << endl;
    cout << "Tich 3 so da cho = " << Tich << endl;
    cout << "Trung binh cong 3 so da cho = ";
    cout << fixed << setprecision(5) << tbc << endl;

    return 0;
}