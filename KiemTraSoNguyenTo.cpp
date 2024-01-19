#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input;
    cout << "Number check : ";
    cin >> input;

    if (input < 0)
        return 1;
    else
    {

        int count = 0;
        for (int i = 1; i < sqrt(input); i++)
        {
            if (input % i == 0)
                count++;
        }

        if (count == 1)
        {
            cout << input << " is prime number " << endl;
        }

        else
        {
            cout << input << " is not prime number " << endl;
        }
    }
    return 0;
}