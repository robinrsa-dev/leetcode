#include<iostream>
using namespace std;


//function to copy one string to another

// void stringcopy(char arr[],char brr[]){
//     int index;

//         int Aindex =sizeof(arr);
//         int Bindex = 0;

//         int count =0;

//         if(arr[Aindex]! = '\0')
//         {
//             arr[Aindex]=brr[Bindex];
//             index++;
            
//             count++;

//             return 1;
//         }

//     return 0;
// }


//FUNCTION TO REVERSE AN ARRAY ::

void Reversearray(int arr[],int size){
    int start = 0;
    int end = size-1;
            
    
       while(start<=end){
                
                swap(arr[start],arr[end]);
                start++;
                end--;
       }
            

}

void checkVowelsornot(char name[],int size,int &count){

    for(int i=0;i<size;i++){
        if(name[i]='a'){
            count ++;
        }

    }
}
    








int main()



{
  
// char arr[]={"robin"};
// char brr[100];

// stringcopy(brr,arr);
// cout << brr;

// int arr[] = {1,4,22,77,8};
// int size = 5;

// Reversearray(arr,size);

// for(int i=0;i<size;i++){

//         cout << arr[i] << " ";
// }

char name[] = {"robin"};
int size= 5;
int count =0;



checkVowelsornot(name,size,count);

cout << count;

    return 0;


}