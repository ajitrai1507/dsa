#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {2,3,8,9,15,25,14,96,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;

    int ans = INT_MIN;
   

    for(int i=0; i<size; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<ans;
}