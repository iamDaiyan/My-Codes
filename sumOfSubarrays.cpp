#include<iostream>
using namespace std;

int main(){
    //input
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    //main
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout<< sum<<endl;
        }
        
    }
    


    //output
    for (int i = 0; i < n; i++)
    {
        cout<<sum;
    }
    
    
    
}