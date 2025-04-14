#include<iostream>
using namespace std;

int main(){

    int arr[20];
    int sum = 0;

    for(int i=0; i<20; i++){
        cin>>arr[i];  
    }
    

    cout<<"The sum of 20 number";
    for(int i=0; i<20; i++){
        // sum = sum+i;
        
        cout<<arr[i]<<" ";
        sum = sum+arr[i];
    }
    cout<<sum;
}