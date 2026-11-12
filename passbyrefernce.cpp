#include<iostream>
using namespace std;


void evennumber(int arr[],int size,int&count)
{
        for(int i=0;i<size;i++){
            if(arr[i]%2!=0){ //for odd numbers in an array using pass by value reference
                count ++;
            }
        }

}


class student{
    // properties
    public:
    int age;
    int weight;
    int height;
    //behaviours

    void running(){
        cout << "i am running" << " ";
    }
    void studying(){
        cout << " ia m studying " << " ";
    }
};

int main()

{
    // int arr[]={2,4,5,8,9};
    // int size=5;
    // int count =0;

    // evennumber(arr,size,count);

    // cout << count;
    student s1;

    s1.age=20;
    s1.height=171;

    s1.running();

    


    return 0;


}