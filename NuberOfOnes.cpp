#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter;
    for (int i = 0; n != 0; i++)
    {
        n=(n&n-1);
        counter++;
    }
    cout<<counter;
    
}