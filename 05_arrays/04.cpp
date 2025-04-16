#include<iostream>
using namespace std;

int main(){

    //Reverse the array///////////

    int arr[] = {6,11,7,4,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end= size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++, end--;
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}