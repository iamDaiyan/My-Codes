#include <iostream>
using namespace std;
#include <string>

int main()
{
    string word;
    getline(cin, word);
    cout << word << endl;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {

            word[i] += 32;
        }
        else if (word[i] == ' ')
        {
            // do nothing
        }
        else
        {
            return 1;
        }
    }

    cout << word << endl;
    return 0;
}