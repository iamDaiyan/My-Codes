#include <iostream>
using namespace std;

int main()
{
    // input
    int x, y, k;
    cout << "Enter length and width";
    cin >> x >> y;
    cout << "Enter the key: ";
    cin >> k;
    int array[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> array[i][j];
        }
    }

    // searching
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (array[i][j] == k)
            {
                cout << "It was found at" << i << " " << j;
                return 0;
            }
        }
    }
    cout << "Not found";
}