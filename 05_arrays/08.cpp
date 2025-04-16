#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start=0, end= size-1, mid;

    while(start<=end){
        mid= start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}


int main(){

    int arr[] = {30,28,25,16,10,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    cout<<binarySearch(arr, size, key);
}