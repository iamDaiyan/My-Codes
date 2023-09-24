#include<iostream>
using namespace std;

int main(){
    int n = 50;
    int* pointer = &n;
    cout<<n<<"is in"<<pointer<<endl;
    cout<<"Is should be the same as before: "<<&n<<endl;
    cout<<*pointer<<endl;
    *pointer = 100;
    cout<<"After changing the value using deframing: "<<*pointer;
}