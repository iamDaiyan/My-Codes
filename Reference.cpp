#include <iostream>
using namespace std;

void swapper(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 10;
    swapper(&a, &b);
    cout<<a<<b;
}