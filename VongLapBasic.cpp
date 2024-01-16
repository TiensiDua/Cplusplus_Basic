#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Khai báo biến
    string name;
    int SoLanLap;

    // Nhập dữ liệu
    cout << "Your name : ";
    cin >> name;
    cout << "Nhap so vong lap : ";
    cin >> SoLanLap;

    // Xử lý và in ra kết quả
    for (int i = 0; i < SoLanLap; i++)
    {
        cout << "Hello " << name << "  =)))))" << endl;
    }
    return 0;
}