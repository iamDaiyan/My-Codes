#include<iostream>
using namespace std;

int summation(int a,int b){
    return a+b;
}

int main(void){
    int a,b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a,b;
    summation(a,b);
    
}