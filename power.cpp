#include<iostream>
using namespace std;

int main(){
    int p,n,ans;
    cout<<"number ";
    cin>>n;
    cout<<"raised to the power ";
    cin>>p;
    ans =1;
    for (int i = 0; i < p; i++)
    {
        ans = n*ans;
    }
    cout<<ans;
    
}