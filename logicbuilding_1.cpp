#include <iostream>
#include<cmath>
using namespace std;


void reversearr(int arr[],int size){

    int start =0;
    int end = size-1;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}

int main() {

// DAY 1 OF LOGIC BUILDING


    // int num;
    // cin >> num;
    // cout << "You Entered :" << num;
    // int a;
    // float b;
    // double c;
    // char d;

    // cout << "size of int :" << " "<< sizeof(a) << " ";
    // cout << "size of float :" << "" << sizeof(b) << " ";
    // cout << "size of double :" << " " <<sizeof(c) << " ";
    // cout << "size of char :" << " " << sizeof(d) << " ";

    // int a,b;
    // cout << " entre the number a:" <<  " ";
    // cin >> a;
    // cout << "enter the number b : " << " ";
    // cin >> b;

    // // int biggest = (a>b)? cout <<"a is largest among two" : cout << "b is larger among the two numbers";
    // if(a>b){

    //     cout << " a is the largest number among the two inputed numbers";

    // }

    // else{
    //     cout << " b is bigger than a";
    // }



    // DAY 2 OF LOGIC BUILDING

    // int num;
    // cout << "enter the number " << flush;

    // cin >> num;

    // if(num%2 == 0){
    //     cout << "number is even";
    // }
    // else{
    //     cout << "number is odd ";
    // }


    // int num;
    // cin >> num;

    // if(num %5 == 0){
    //     cout << "number is divisible by 5";
    // }
    // else{
    //     cout << "number is not divisible by 5";
    // }



    // int num;
    // cin >> num;

    // if(num %7 == 0){
    //     cout << "number is multiple of 7";
    // }
    // else{
    //     cout << "number is not multiple of 7";
    // }



    // DAY 3 OF  LOGIC BUILDING:

    // int num;
    // cout << " enter the number to " << " ";

    // cin >> num ;

    // int square = pow(num,2);
    // cout << square  << " ";

    // int cube = pow(num,3);
    // cout << cube << " ";

    // double rad,base,height;

    // cin >> rad;
    // cin >> base;
    // cin >> height;

    // double arofcircle = 3.14*pow(rad,2);

    // cout << arofcircle << " ";

    // double aroftriangle = 0.5*base*height;

    // cout << aroftriangle << " ";

    // int dividend,divisor,quotient,remainder;

    //     cin >> dividend;
    //     cin >> divisor;

    //     quotient = dividend / divisor;

    //     cout << "quotient is :: " << quotient << endl;

    //     remainder = dividend % divisor;

    //     cout << "remainder is ::" << remainder;





    // DAY 4 OF LOGIC BUILDING


    // for(int i =1;i<=10;i++){

    //     cout << "5 x  " << i << " = " << 5*i << endl;
    // }


    // char operation ;
    // double a,b;
    // double result;


    // cout << "enter the operation to be performed(+,-,/,*):";
    // cin >> operation;
    
    // cout << "enter a:" << endl;
    // cin >> a;
    // cout << "enter b:" << endl;
    // cin >> b;

    // switch(operation){

    //     case '+': result= a+b;
    //         cout << "additon of two numbers is :" << result;
    //         break;
        
    //     case '-': result= a-b;
    //     cout << "minus of two numbers is :" << result;
    //         break;

    //     case '/': if(b != 0){
    //           result = a/b;
    //           cout << "divison of two numbers is :" << result;
    //           }
    //           else{
    //             cout << "divison is not possible";
    //           }
    //         break;

    //     case '*': result= a*b;
    //     cout << "product of two numbers is :" << result;

    //     default:
    //         cout <<"operation is invalid";
        

    // }


//    int num;
//    cin >> num;

//    int result = 0;

//    while (num !=0){
//     int digit=num %10;
//     result = result*10+digit;
//     num = num/10;
//    }

//    cout << result;



//DAY 5 OF LOGIC BUILDING


// int num;
// int result = 0;
// cin >> num;

// while(num !=0){
//     int digit = num %10;
//     num = num/10;
//     result = result +(digit);
    
// }

// cout << result;



// char ch;
// cout << "enter a character " << endl;
// cin >> ch;

// switch(ch) {

    // case 'a': cout<< ch <<"is a vowel";
    // break;
    // case 'e': cout<< ch <<"is a vowel";
    // break;
    // case 'i': cout<< ch <<"is a vowel";
    // break;
    // case 'o': cout<< ch <<"is a vowel";
    // break;
    // case 'u': cout<< ch <<"is a vowel";
    // break;
    // case 'A': cout<< ch <<"is a vowel";
    // break;
    // case 'E': cout<< ch <<"is a vowel";
    // break;
    // case 'I': cout<< ch <<"is a vowel";
    // break;
    // case 'O': cout<< ch <<"is a vowel";
    // break;
    // case 'U': cout<< ch <<"is a vowel";
    // default:

    // cout << "ch is a consonant" << endl;
//  }


// if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
//         cout << ch << " is a vowel.";
//     }
//     else {
//         cout << ch << " is not a vowel.";


// char ch;
// cout << "enter the character:" << " ";
// cin >> ch;

// double a = ch;

// cout << "ASCII value of " << ch << "is : " << a;

int n;
int sum;
int count =0;
sum = sum+count;




 return 0;
}