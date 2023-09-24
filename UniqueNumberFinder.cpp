#include <iostream>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // finding
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = (res ^ arr[i]);
    }

    cout<<res;
}