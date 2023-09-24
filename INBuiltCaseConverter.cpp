#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string word = "Hello World";
    cout<<word<<endl;
    transform(word.begin(),word.end(),word.begin(),::toupper);
    cout<<word<<endl;
}