#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int c = 0;
    cin >> a >> b;
    int temp;

    c = a % b;
    while (b % c != 0)
    {
        temp = c;
        c = b % c;
        b = temp;
    }

    cout << b;
}

// NOT COMPLETED YET!