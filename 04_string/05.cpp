#include<iostream>
using namespace std;

int main(){

    string ch = "civic";

    int start = 0, end= ch.size()-1;

    while(start<end){
        swap(ch[start], ch[end]);
        if(ch[start]!= ch[end]){
            cout<<"Not a palindrome";
            return 0;
        }
        start++, end--;
    }
    cout<<"Palindrome";
}