#include<iostream>
using namespace std;

//Count of the string/.........

int main(){

    string s = "Ajit";
    // cout<<s.size();
    int count = 0;

    while(s[count] != '\0'){
        count++;
    }
    cout<<count;
}