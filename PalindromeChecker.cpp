#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of characters in the word: "<<endl;
    cin >> n;
    cout<<endl<<"Enter the word: ";
    char word[n + 1];
    cin>>word;
    cout<<endl;

    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (word[i] == word[n - i - 1])
        {

            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "It is";
    }
    else
    {
        cout << "It is not";
    }
}