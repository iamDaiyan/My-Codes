#include <iostream>
using namespace std;

// Searching
int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    cout << "Enter the key: ";
    cin >> key;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "It was found in: " << BinarySearch(numbers, n, key) + 1 << endl;
}