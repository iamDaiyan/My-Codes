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

    // finding the xor of the two unique number
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = (res ^ arr[i]);
    }
    int secNum = res; // res ^ first number

    // finding the position of rightmost 1 in res
    int pos = 0;
    int setbit = 1;
    while (setbit != 0)
    {
        setbit = res & (1 << pos);
        pos++;
    }
    pos--;

    // traverse and find if any number has setbit in pos;
    int firstNum = 0;
    for (int i = 0; i < n; i++)
    {

        if (((arr[i] & (1 << pos)) != 0))
        {
            firstNum = firstNum ^ arr[i]; // we get one of the number
        }
    }

    secNum = res ^ firstNum;
    cout << firstNum << " " << secNum;
}
