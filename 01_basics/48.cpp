#include <iostream>
using namespace std;

int main()
{

    int num, rem, ans = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    while (num > 9)
    {

        while (num > 0)
        {

            rem = num % 10;
            num = num / 10;

            ans = rem + ans;
        }
        num = ans;
    }
    cout << num;
}