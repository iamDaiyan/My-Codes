#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of numbers: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //main

    for (int i = 0; i < n; i++)
    {
        int maximum = arr[i];
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > maximum)
            {
                maximum = arr[j];
            }
        }

        cout << "For i = " << i << "the max number is: " << maximum<<endl;
    }
}