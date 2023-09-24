#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // array
    int arr[n];

    for (int i = 0; i <= n-1; i++)
    {
        arr[i] = i;
    }

    // marking prime numbers
    for (int i = 2; i <= n-1; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = i; i * j <= n-1 && arr[i] != 0; j++)
            {
                arr[i * j] = 0;
            }
        }
    }

    // printing
    for (int i = 2; i <= n-1; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
}
