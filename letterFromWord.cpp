#include<iostream>
using namespace std;

int main(){
    char word[99999];
    cout<<"Enter the word: "<<endl;
    cin>>word;
    int n;
    cout<<"Enter the position of the letter: "<<endl;
    cin>>n;
    cout<<word[n-1]<<endl;
}