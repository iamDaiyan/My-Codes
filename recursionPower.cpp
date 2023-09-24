#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}
int main()
{
    int p, n;
    cout << "number ";
    cin >> n;
    cout << "raised to the power ";
    cin >> p;
    cout << power(n, p);
}