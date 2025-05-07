#include <iostream>
using namespace std;

int main()
{

    char ch;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            ch = 'a' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}