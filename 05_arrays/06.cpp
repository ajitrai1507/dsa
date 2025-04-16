#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,3,4,5,6};
    int sum = 0;
    int size = 6;

    for(int i=0; i<size-1; i++){
        sum = sum+arr[i];
    }
    int ans = size*(size+1)/2;
    cout<<ans-sum;
}