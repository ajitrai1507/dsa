#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,7,11,8,4};
    int ans = 21;
    int size= sizeof(arr)/ sizeof(arr[0]);
    // cout<<size;

    for(int i=0; i<size; i++){
        if(arr[i]==ans){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;

}