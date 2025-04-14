#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main(){

    // vector<int>a;
    
    // a.push_back(4);
    // a.push_back(15);
    // a.push_back(20);

    // cout<<a.size()<<endl;
    // cout<<a.capacity()<<endl;

    // vector<int>v1;
    // v1.push_back(20);
    // v1.push_back(30);
    // v1.push_back(15);

    // for(int i=0; i<v1.size(); i++){
    //     cout<<v1[i]<<" ";
    // }

    // cout<<"Sorting the array"<<endl;

    // vector<int>v2;
    // v2.push_back(14);
    // v2.push_back(19);
    // v2.push_back(10);
    // v2.push_back(2);
    // v2.push_back(11);
    // v2.push_back(9);
    // v2.push_back(15);
    // v2.push_back(21);

    // sort(v2.begin(), v2.end());

    // for(int i=0; i<v2.size(); i++){
    //     cout<<v2[i]<<" ";
    // }

    vector<int>v3;
    v3.push_back(2);
    v3.push_back(8);
    v3.push_back(10);
    v3.push_back(12);
    v3.push_back(21);

    // cout<<v3[0];
    // cout<<v3.front()<<endl;
    // cout<<v3.back()<<endl;
    // cout<<v3.empty()<<endl;
    // cout<<v3.at(2);

    //copy value of 1 vector to another
    // vector<int>v4;
    // v4=v3;

    // for(int i=0; i<v4.size(); i++){
    //     cout<<v4[i]<<" ";
    // }

    cout<<binary_search(v3.begin(), v3.end(), 21)<<endl;

    cout<<find(v3.begin(), v3.end(), 12)-v3.begin()<<endl;


}