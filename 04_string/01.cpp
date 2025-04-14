#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A','P','P','L','E'};
    cout<<arr;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    string s;
    getline(cin, s);
    cout<<s<<endl;
    cout<<s.size();

    string s1 = "Rohit negi is a \"good\" boy ";
    cout<<s1;
}