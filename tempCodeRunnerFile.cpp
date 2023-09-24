#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    dec(n - 1);
    cout << n << endl;
}
int main()
{
    int n = 10;
    cout << "increasing order" << endl;
    inc(n);
    cout << endl;
    cout << "decreasing order:" << endl;
    dec(n);
}