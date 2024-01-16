#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // Khai bao bien va nhap vao so input
    int input;
    cout << "Moi ban nhap vao : ";
    cin >> input;

    // Tinh toan va in ra ket qua
    input = (sqrt(((input + 7) * 2)) + 4) / 2;
    cout << "So ban nghi la : " << input;

    return 0;
}