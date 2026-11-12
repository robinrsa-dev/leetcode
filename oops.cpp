#include<iostream>
using namespace std;


void stringreversal(string str,int size){

    int start = 0;
    int end=size-1;

    reverse str(start,end);
    start ++;
    end--;
}

class Teacher{
    private:
            double user_id;
            string password;
            
    public:
            string name;
            string department;
            string subject;
            double salary;

    void changedept(){
        cout << "department of teacher is changed" << " ";
    }


    void accesstheprivateinfo(double userid){
        double userid=user_id;
    }
    
    
    Teacher(string n,string d,string ss,double sal)
    {
            name =n;
            department =d;
            subject = ss;
            salary = sal;


    }
};

int main(){

    // Teacher t1();
    // t1.name = "Robin";

    // t1.changedept();

    // cout << endl <<  t1.name << endl;

    // Teacher t1("Robin","CSE","c++",25000);

    // cout << t1.subject;


    // t1.accesstheprivateinfo(25189);

    string str = "robin";
    int size =5;
    
    stringreversal(str,size);

    cout << str;





    return 0;
}