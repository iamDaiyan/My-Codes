#include <iostream>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k; // key OR required sum
    cin >> k;

    // 2 pointer technique
    int left = 0, right = 0, curr_sum = 0;
    while (right < n)
    {
        curr_sum += arr[right];
        right++;
        while (curr_sum > k)
        {
            curr_sum -= arr[left];
            left++;
        }
        if (curr_sum == k)
        {
            cout << left << " " << right;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
