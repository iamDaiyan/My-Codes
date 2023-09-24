#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << endl;
    string word;
    cin >> word;
    int freq[26];
    int maxfreq = 0;
    char ans = 'a';


    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < word.size(); i++)
    {
        freq[word[i] - 'a']++; // Since the ASCII code for 'a' is 97, if we simply use freq[word[i]]++, then we'll be incrementing freq[97] when we see an 'a', which is not what I want.
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            ans = i + 'a';
        }
    }

    cout << "The character which appeared most of the time is: " << ans << endl
         << "It appeared " << maxfreq << " times ";
}



