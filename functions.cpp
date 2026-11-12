
#include<iostream>
using namespace std;

void countingfrom1to100()
    {

        for(int i=1;i<=100;i++)
        {
            cout << i <<endl;
        }

    }

int simpleinterest(int x,int y,int z)
    {

        int result = x + y + z ;

        return result;


    }

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}



int voteEligible(int num){

    if(num >=18){

        cout << "candidate is eligible to vote !" << endl;
    }
    else{

        cout << "candidate is not eligible to vote!!!!!";
    }

    return num;
}


int calculator(int n1,int n2){

    char op;
    double result;

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

    return result;



}



 
int main()
{

    

    // countingfrom1to100();

    // int ans = simpleinterest(5,3,2);

    // cout << ans;


    // int result = calculator(5,6);

    // cout << result;

 cout << "Prime numbers from 1 to 100 are:\n";

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

   




    return 0;
}