#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime number";
            return 0;
        }
    }

    cout << "Prime number";
}