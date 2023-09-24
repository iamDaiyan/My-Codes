#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>n; 
    }
    
    cout<<"Number of subarrays will be: "<<(n*(n+1))/2;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            int sum = 0;
            sum += arr[j];
            cout<<sum<<endl; 
        }
        
    }
    
}