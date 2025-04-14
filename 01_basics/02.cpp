#include<iostream>
using namespace std;

int main(){
    int package;
    cout<<"Enter the package"<<endl;
    cin>>package;

    if(package>15){
        cout<<"I accept the offer"<<endl;
    }
    else{
        cout<<"I reject the offer";
    }
}