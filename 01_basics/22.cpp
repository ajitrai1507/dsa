#include<iostream>
using namespace std;

int main(){

    int first,second, next, num;
    cout<<"Enter the nums"<<endl;
    cin>>num;
    cout<<"Enter first num"<<endl;
    cin>>first;
    cout<<"Enter second num"<<endl;
    cin>>second;

    for(int i=1; i<=num; i++){
        next = first+second;
        first = second;
        second = next;
        cout<<next<<" ";
    }


}