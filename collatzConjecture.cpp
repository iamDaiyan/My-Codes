#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            // even
            n = n / 2;
        }
        else
        {
            //odd
            n = n * 3 + 1;
        }

        cout<<n<<" ";
    }
}