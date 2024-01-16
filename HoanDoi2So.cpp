#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;

    // Cách 1 đổi chỗ hai số
    int temp = a;
    a = b;
    b = temp;
    cout << "a va b sau khi doi cho :" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << endl;

    // Cách 2 đổi chỗ hai số
    cout << "a va b nhap vao ban dau :" << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    return 0;
}