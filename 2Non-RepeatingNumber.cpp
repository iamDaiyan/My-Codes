#include <iostream>
using namespace std;

int posxor(int n)
{
    int mask = 1;
    int position = 0;
    while ((n & mask) == 0)
    {
        mask = mask << 1;
        position++;
    }
    return position;
}

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

    // finding the xor of 2 non-repeating numbers
    int xorOfTwo = 0;
    for (int i = 0; i < n; i++)
    {
        xorOfTwo = (xorOfTwo ^ arr[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (posxor(arr[i]) != posxor(xorOfTwo))
        {
            arr[i] = 0;
        }
        //here the remaining numbers have the exact same position of lsb as xorOfTwo
    }


    int firstNumber = 0;
    for (int i = 0; i < n; i++)
    {
        firstNumber ^= arr[i]; 
    }
    //remaining here is the first number
    int secondNumber = xorOfTwo^firstNumber;

    cout<<firstNumber<<" "<<secondNumber<<endl;
}