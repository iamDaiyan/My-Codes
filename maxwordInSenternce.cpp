#include <iostream>
using namespace std;

#define length_of_sentence 1000

int main()
{
    char sentence[length_of_sentence + 1];
    cin.getline(sentence, length_of_sentence + 1);
    cin.ignore();

    int i = 0, ans = 0, length = 0, ansWord;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        length++;
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (length > ans)
            {
                ans = length;
                ansWord = i - length + 1;
            }
            length = 0;
        }
    }
    bool last_char = false;

    for (int i = ansWord; sentence[i] != ' ' && sentence[i] != '\0'; i++)
    {
        cout << sentence[i];
        if (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')
        {
            break;
        }
    }

    cout << " " << ans;

    return 0;
}
