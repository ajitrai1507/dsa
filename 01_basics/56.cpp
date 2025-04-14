#include<iostream>
using namespace std;

int main(){

    char ch[26];
    for(int i=0; i<=25; i++){
        ch[i] = 'a'+i;
    }
    for(int i=0; i<=25; i++){
        cout<<ch[i]<<" ";
    }

    
}