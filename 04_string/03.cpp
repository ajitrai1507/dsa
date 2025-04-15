#include<iostream>
using namespace std;

//Reverse of a String

int main(){

    string aj = "Ajit";

    int start = 0 , end = aj.size()-1;

    while(start<end){
        swap(aj[start], aj[end]);
        start++, end--;
    }
    cout<<aj;
}