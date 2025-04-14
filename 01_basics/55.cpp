#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,5,8,9,11,15,12};
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    int size = sizeof(arr)/ sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<i;
            break;
        }
    }
    return -1;
}