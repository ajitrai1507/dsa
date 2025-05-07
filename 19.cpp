#include <iostream>
using namespace std;

int main()
{
    int num, pow, sum;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << "Enter the power" << endl;
    cin >> pow;

    sum = num;

    for (int i = 1; i < pow; i++)
    {
        sum = sum * num;
    }
    cout << sum;
}