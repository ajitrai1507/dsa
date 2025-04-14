#include<iostream>
using namespace std;

int main(){

    int num, rem , mul=1, ans =0;
    cout<<"Enter the number"<<endl;
    cin>>num;

    while(num>0){

        rem = num%10;
        num = num/10;

        ans = rem*mul+ans;
        mul = mul*2;

    }
    cout<<ans;
}