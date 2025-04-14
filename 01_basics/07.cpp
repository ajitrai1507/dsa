#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num>0){
        cout<<"This is the positive number";
    }else if(num<0){
        cout<<"This is the negative number";
    }else{
        cout<<"This is zero";
    }
}