#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0); // will return 0 if ans is 1 cuz it will be false
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int complement = ~(1 << pos);
    return (n & complement);
}

int updateBit(int n, int pos, int val)
{
    clearBit(n, pos);
    return (n | (val << pos));
}

int main()
{
    int n, position, val;
    cout << "n "
         << "position "
         << "val " << endl;
    cin >> n >> position >> val;
    cout << "getBit: " << getBit(n, position) << endl;
    cout << "setBit: " << setBit(n, position) << endl;
    cout << "clearBit: " << clearBit(n, position) << endl;
    cout << "updateBit: " << updateBit(n, position, val);
}