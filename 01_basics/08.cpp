#include<iostream>
using namespace std;

int main(){

    char ch;

    cout<<"Enter the charachter"<<endl;
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout<<"This is the vowels";
    }else{
        cout<<"This is the consonant";
    }
}