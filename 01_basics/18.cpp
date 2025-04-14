#include<iostream>
using namespace std;

int main(){

    int num, pow;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"Enter the power"<<endl;
    cin>>pow;

    int result = 1;

    for(int i=1; i<=pow; i++){
        result = result*num;
    }
    cout<<result;
}