#include<iostream>
using namespace std;

int checker(int arr[],int n){
    if (n==1)
    {
        return 1;
    }

    bool RestArr = checker(arr+1,n-1);
    return(arr[0]<arr[1]) && RestArr;
    
}
int main()
{
    int array[] = {1,2,3,4,5,6,7};
    cout<<checker(array,7);
}