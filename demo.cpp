#include <iostream>
using namespace std;

int main() {
    // float radius, volume;

    // cout << "Enter radius: ";
    // cin >> radius;

    // volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

    // cout << "Volume of sphere = " << volume;

    int n;
    cout << "enter the value of n :" << endl;
    cin >> n;

    // for(int i=0;i<n;i++){
    //     //space
    //     for(int j=0;j<i;j++){
    //         cout << " ";
    //     }

    //     //stars
    //     for(int j=0;j<9-2*i;j++){
    //         cout << "*";
    //     }
    //     // space
    //     for(int j=0;j<i;j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << "*";

    //     }
    //     cout << endl;
    // }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout << "*";

    //     }
    //     cout << endl;
    // }

     for(int i=0;i<n;i++){
        // for printing 0
        for(int j=0;j<2*i+1;j++){
            cout << "0";
        }
        //for printing 1
        for(int j=0;j<2*i+1;j++){
            cout << "1";
        }
        cout << endl;
    }
    for(char j = 'A';j<'Z';j++){
        cout << j;
    }

        
    

    return 0;
}
