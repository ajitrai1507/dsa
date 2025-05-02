#include<iostream>
using namespace std;

class Teacher{
    string name,dept,subject;
    double salary;

    public:

    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void getInfo(){
        cout<< "Name :"<< name <<endl;
        cout<< "Department :" << dept <<endl;

    }
};


int main(){

    Teacher t1("Ajit Rai", "Computer science", "c++", 25000);

    t1.getInfo();
}