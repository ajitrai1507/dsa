#include<iostream>
using namespace std;

class Student{
    // private:
    public:
    string name;
    int age, roll_no;
    string grade;
};


int main(){

    Student S1;
    S1.name = "Ajit Rai";
    S1.age = 10;
    S1.roll_no = 215;
    S1.grade = "A+";

    cout<<S1.age;

}