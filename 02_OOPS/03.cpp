#include<iostream>
using namespace std;

//Encapsulation


class Employee{
    public:
    string name, dept;
    int id;
    Employee(){
        dept = "CSE";
    };
};

int main(){

    Employee e1;
    e1.name = "Ajit Rai";
    cout<<e1.name;
    cout<<e1.dept;
}