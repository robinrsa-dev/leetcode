#include<iostream>
#include<cmath>
using namespace std;
//FUNCTION TO PRINT MUTLIPLE OF 10 IN AN ARRAY

void multipleof10(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int size = 9;

    for(int i =0;i<=size;i++){

        cout << 10*arr[i]<< " ";
    }
}


void initializewwithminusone(int arr[],int size){
    

    for(int i =0;i<size;i++){
        arr[i] = -1;
    }


bool linearsearch(int arr[],int size,int key) 

{
    for(int i =0;i<size;i++){
            if(arr[i]==key){

                return 1;
            }
        
    }
    return 0;


}



int main()


{


    // //int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int arr[9];
    // for(int i =1;i<=9;i++){
    //     cin >> arr[i];
    // }
    // int size =9;
    

    // multipleof10();

    // int arr[5];

    // for(int i =0;i<5;i++){
    //     cout << "enter the elements in an array ["<<i<<"] :";
    //     cin >> arr[i];
    // }

    //output

    // for(int i = 0;i<5;i++){
    //     if(arr[i]==0){
    //         arr[i]=1;
    //         cout << arr[i];
    //     }
    //     else{
    //         arr[i]==0;
    //         cout << arr[i];
    //     }
    
    // }

//    int  arr[]={1,2,3,4,5};
//     int size = 5;

//     initializewwithminusone(arr,size);
//         for(int i =0;i<size;i++){

//             cout << arr[i] << " ";
        

//         }      
int arr[]={2,55,77,3,4};

int size=5;

cout <<"enter the key to be searched in the linear search" << " ";

int key;

cin >> key;

bool result =linearsearch(arr,size,77);

for(int i =0;i<size;i++){
    if(result = 1){
        cout << "search is passed" << endl;

    }
    else{

        cout << "search is failed" ;
    }

}




    




  
    



return 0;




}