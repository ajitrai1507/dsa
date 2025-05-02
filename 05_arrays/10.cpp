#include<iostream>
using namespace std;


int main(){

    int arr[] = {2,10,5,8,15};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[index]){
                index = j;
            }

            swap(arr[i], arr[index]);
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}