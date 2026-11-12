#include<iostream>
#include<vector>
using namespace std;

int main(){

    pair<int,pair<int,int>> p ={1,{2,3}};
    pair<int,int> arr[] ={{1,2},{3,4}};
    cout << arr[0].second;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);
    // vector<pair<int,int>> vec ;
    // vector < int > v(5,100);

//     vector<int> :: iterator it = v.begin();
//     cout << *(it);
// for(vector <int>:: iterator itr = v.begin();itr!=v.end();itr++){

//     cout << *(itr);
// }

// for(auto itr = v.begin();itr!=v.end();itr++){
//     cout << *itr;
// }

// for(auto itr:v){
//     cout << itr;
// }
// v.erase(v.begin()+1);
// v.erase(v.begin()+1,v.begin()+3);

// vector<int> v(2,100);
// v.insert(v.begin(),10);
// vector<int> copy(2,50);
// v.insert(v.begin(),copy.begin(),copy.end());











    return 0;
}