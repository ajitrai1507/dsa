#include<iostream>
#include<climits>
using namespace std;

//Second Largest Number//////

int main(){

    int arr[] = {2,8,9,15,16,17};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    int ans = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    int second = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(arr[i]!= ans){
           second = max(arr[i], second);
        }
    }
    cout<<second;
}