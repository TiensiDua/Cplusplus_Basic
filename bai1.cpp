#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap a , b , c " << endl;
    cin >> a >> b >> c;

    int T1 = 0;
    T1 = 3 * a / (b + c);

    int T2 = 0;
    T2 = 2 * (b * b);

    cout << "T1 = " << T1 << endl;
    cout << "T2 = " << T2 << endl;

    if (T1 == T2)
    {
        cout << "T1 = T2 ";
    }
    else
        cout << "T1 khong = T2 ";
    return 0;
}