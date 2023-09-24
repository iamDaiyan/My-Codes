#include <iostream>

#include <iomanip>

using namespace std;

int main()
{

    float a, b, c;

    cout << "Enter the values for a,b,c:" << endl;

    cin >> a >> b >> c;

    float sum, average, product;

    sum = a + b + c;

    average = (sum) / 3;

    product = a * b * c;

    cout << sum << endl;

    cout << average << endl;

    cout << product << endl;

    return 0;
}