#include <iostream>

using namespace std;

int main()
{
    // Khai báo biến và nhập vào số cần kiểm tra
    int Input;
    cout << "Nhap so : ";
    cin >> Input;

    // Kiểm tra và in ra kết quả
    if (Input > 0)
    {
        cout << "So da nhap la so nguyen duong " << endl;
    }
    else if (Input < 0)
    {
        cout << "So da nhap la so nguyen am " << endl;
    }
    else
    {
        cout << "So da nhap la so " << Input << endl;
    }

    return 0;
}