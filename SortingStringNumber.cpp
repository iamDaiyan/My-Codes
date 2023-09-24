#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void headingBorder(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}

int main(){
    headingBorder(100);
    string number = "12074291237493124619786";
    sort(number.begin(),number.end(),greater<int>());
    cout<<"this is the greatest number: "<<number<<endl;

    sort(number.begin(),number.end(),less<int>());
    cout<<"This is the smallest number: "<<number<<endl;

}