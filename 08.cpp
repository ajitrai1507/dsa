#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num==0){
        cout<<"Number is zero";
    }else if(num>0){
        cout<<"Number is Positive";
    }else{
        cout<<"Number is Negative";
    }
}