#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the charachter"<<endl;
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch== 'i'|| ch =='o'|| ch =='u' || ch == 'A'|| ch =='E'|| ch == 'I'|| ch=='O' || ch=='U'){
        cout<<"Vowels";
    }else{
        cout<<"Consonant";
    }
}