#include<iostream>
using namespace std;

int main(){

    int arr[]={1,1,1,2,2,2,2,3,3,3,3,3,3,4,4};


    int officer = 0;
    int res=1;
    int cm=1;

    while(cm < sizeof(arr)){

        if(arr[cm]==arr[cm-1]){
            cm++;
            continue;
        }
        arr[officer+1]==arr[cm];
        officer++;
        cm++;
        res++;
    }
    return res;


    cout << res;




    return 0;
}
