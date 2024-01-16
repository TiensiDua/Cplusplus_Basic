#include <iostream>

using namespace std;

int main()
{
    // Khai báo biến lưu điểm và nhập vào điểm
    char diem;
    cout << "Diem thi dang chu cua ban : ";
    cin >> diem;

    // Xử lý và in ra kết quả
    switch (diem)
    {
    case 'A':
        cout << "Xuat sac !" << endl;
        break;

    case 'B':
        cout << "Gioi !" << endl;
        break;

    case 'C':
        cout << "Kha !" << endl;
        break;

    case 'D':
        cout << "Trung binh !" << endl;
        break;

    case 'F':
        cout << "Kem & Truot !" << endl;
        break;

    default:
        cout << "Nhap sai. Vui long nhap lai" << endl;
        main();
        break;
    }

    return 0;
}