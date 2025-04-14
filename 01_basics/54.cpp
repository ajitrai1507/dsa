#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int sum =0;
    int average;

    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<18; i++){
        cout<<"Enter the element "<<i;
        cin>>arr[i];
        sum = sum+arr[i];

        // int size = sizeof/(sizeof[arr[i]]);
        
    }
    average =  sum/size;
    cout<<average;
}