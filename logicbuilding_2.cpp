#include<iostream>
using namespace std;

int n =4;
void printpattern1(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            cout << "*" << " ";
        }
        cout << endl;
    }
}

void printpattern2(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

            cout << "*" << " ";
        }
        cout << endl;
    }
}
void printpattern3(int n){
for(int i=1;i<=n;i++){
            for(int j=n;j>=i;j--){
                cout << "*";
            }
            cout << endl;
        }
    }
void printpattern4(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout << "*";
            }
            cout << endl;
        }
    }

void printpattern5(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout << " ";
            }
            for(int j=0;j<2*i+1;j++){
                cout << "*";

            }
            for(int j=0;j<n-i-1;j++){
                cout << " ";
            }
            cout << endl;
        }
    }

void printpattern6(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<2*i+1;j++){
                cout << " ";
            }
            for(int j=0;j<n-i-1;j++){
                cout << "*";

            }
            for(int j=0;j<2*i+1;j++){
                cout << " ";
            }
            cout << endl;
        }
}

void printpattern7(char n){
    for(char i='A';i<n;i++){
        for(char j='A';j<i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main()
{

printpattern7('a');






    return 0;
}