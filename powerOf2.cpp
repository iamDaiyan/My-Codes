#include <iostream>
using namespace std;

bool PowerOf2(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cin >> n;
    cout<<PowerOf2(n);
}