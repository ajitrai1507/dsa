#include<iostream>
#include<climits>
using namespace std;

int main(){

    //Find Lowest Value in the array


    int arr[5] = {5,9,1,7,2};
    int ans = INT_MAX;

    for(int i=0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
            
        }
    }

    cout<<ans;
}