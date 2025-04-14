#include<iostream>
#include<climits>
using namespace std;

int main(){

    //Find the highest value in the array

    int arr[5] = {2,11,9,10,1};
    int ans = INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    cout<<ans;
}