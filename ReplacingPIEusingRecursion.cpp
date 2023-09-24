#include <iostream>
using namespace std;

void replacePi(char word[], int n)
{
    if (n == 0)
    {
        return;
    }
    if (word[0] == 'p' && word[1] == 'i')
    {
        cout << "3.14";
        replacePi(word+2,n-2);
    }else
    {
        cout<<word[0];
        replacePi(word+1,n-1);
    }
    
}
int main()
{
    char word[]={"xyzpixypixpi"};
    replacePi(word,12);
}