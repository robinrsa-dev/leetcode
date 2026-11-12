#include<iostream>
using namespace std;
class Teacher{

    private:
double salary;
    public:

int grade;
string name;
string department;
int  salaryi;
string subject;

string dept;
Teacher(string name,string department,string subject,int salary){

    this->name = name;
    this->department = department;
    this->subject = subject;
    this->salary = salary;


   

}


void changedeparment(){
    cout << "change the deaprtment";
}
void setsalary(double s){

    salary =s;
}
void getinfo(){
    cout << name << endl;
    cout <<department;
    cout <<subject << " ";
    cout <<  salary;
}

}
;

int main(){
    
    Teacher t3("shabd","cse","cpp",25000);
    t3.getinfo();
    Teacher t4(t3);
    t4.getinfo();






    




    






    return 0;
}