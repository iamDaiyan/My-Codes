#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *pointer = arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<"The memory address of  "<<*pointer<<" is: "<<pointer<<endl;
        pointer++;
    }
}
