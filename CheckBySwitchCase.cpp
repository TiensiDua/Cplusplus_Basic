#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    char pick;
    int big = (a > b) ? a : b;
    int small = (a < b) ? a : b;

    cout << "1 Tong hai so " << endl;
    cout << "2 Hieu hai so " << endl;
    cout << "3 Tich hai so " << endl;
    cout << "4 So lon hon " << endl;
    cout << "5 So be hon " << endl;
    cout << "Nhap lua chon cua ban : ";
    cin >> pick;

    switch (pick)
    {
    case '1':
        cout << "Tong cua hai so la : " << a + b;
        break;
    case '2':
        cout << "Hieu cua hai so la : " << a - b;
        break;
    case '3':
        cout << "Tich cua hai so la : " << a * b;
        break;
    case '4':
        cout << "So lon hon la : " << big << endl;
        break;
    case '5':
        cout << "So be hon la : " << small;
        break;
    default:
        cout << "Nhap sai. Vui long nhap lai tu dau " << endl;
        main();
        break;
    }
    return 0;
}