#include <iostream>
using namespace std;

int setBit(int n, int pos,int value)
{
    return (n | (value << pos));
}

int clearBit(int n, int pos)
{
    int complement = ~(1 << pos);
    return (n & complement);
}

int main()
{
    int position = 1;
    int val = 1;
    int clearedBit = clearBit(5,position);
    cout<<setBit(5,position,val);

    
    
}