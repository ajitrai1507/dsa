#include<iostream>
using namespace std;

int maxofA(int a, int b, int c){

    if(a>b && a>c){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}


int main(){
    int a,b,c;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Enter the number"<<endl;
    cin>>b;
    cout<<"Enter the number"<<endl;
    cin>>c;

    maxofA(a,b,c);
    
}