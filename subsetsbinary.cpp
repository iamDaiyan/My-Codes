#include <iostream>
using namespace std;

int main()
{
    //input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //finding subset
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)))
            {
                cout << arr[j] << ',';
            }
        }
        cout << endl;
    }
}