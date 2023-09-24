#include <iostream>
using namespace std;

int LinearSearch(int numbers[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == key)
        {
            return i+1;
        }
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the number of numbers: ";
    cin >> n;
    int key;
    cout << endl
         << "Enter the key: ";
    cin >> key;
    int numbers[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout<<LinearSearch(numbers,n,key)<<endl;
    
    
}