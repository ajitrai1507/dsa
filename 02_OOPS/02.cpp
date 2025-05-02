#include<iostream>
using namespace std;

class Teacher{
    private:
    float salary;
    public:
    string name, dept, subject;
    int id;


    //Setter
    void setSalary(double s){
        salary = s;
    }

    //Getter

    float getSalary(){
        return salary;
    }


};


int main(){

    Teacher t1;
    t1.name = "Ajit Rai";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.id = 23;
    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;

    cout<<t1.name;
}