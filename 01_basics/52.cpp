#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5]= {7,8,9,10,1};
    int ans = INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<ans;
}