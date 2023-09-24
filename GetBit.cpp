#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> (n);
    int i;
    cin >> i;
    if ((n & (1 << i)) != 0)
    {
        cout << "Bit is: 1";
    }
    else
    {
        cout << "Bit is: 0";
    }
}