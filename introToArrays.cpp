#include <iostream>
#include<climits>
using namespace std;

int main(void)
{
    int n;

    cout << "Enter the number of numbers you want to enter: ";
    cin >> n;
    int num[n];
    cout << "Now enter the numbers: " << endl;
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        

        maximum = max(maximum,num[i]);
        minimum = min(minimum,num[i]);
    }

    cout<<"Max is: "<<maximum<<endl<<"Min is: "<<minimum<<endl;
}