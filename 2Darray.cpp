#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    cout<<"Enter length and width";
    cin >>x >> y;
    int array[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }
}