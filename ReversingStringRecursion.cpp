#include <iostream>
using namespace std;

void reverse(char arr[], int n)
{
    if (n == 0)
    {
        return;
    }
    reverse(arr + 1, n - 1);
    cout<<arr[0];
}
int main()
{
    char word[] = {'B', 'I', 'N', 'O', 'D'};
    int n = 5;
    reverse(word,n);
    cout<<endl;
}