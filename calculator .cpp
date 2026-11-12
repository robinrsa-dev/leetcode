#include<iostream>
using namespace std;

int main(){


    char op;
    double result,n1,n2;

    cout << "enter the first number::"  << endl;
        cin >> n1;
    cout << "enter the second number::"  << endl;
        cin >>n2;

    cout << "enter the operation to be performed::"  << endl;
        cin >> op;

    switch(op){

        case '+': result = n1+n2;
                    cout << "addition of two numbers is--"  << result << endl;
                    break;
        case '-':result= n1-n2;
                    cout << "subtraction of two numbers is--"  << result << endl;
                    break;
        case '/':result = n1/n2;
                    cout << "division of two numbers is--"  << result << endl;
                    break;
        case '*':result = n1*n2;
                    cout << "mutliplication of two numbers is--"  << result << endl;
                    break;
        default:
                    cout << "invalid operation is performed" << endl;
    }


    return 0;
}