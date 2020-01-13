#include <iostream>
#include <vector> //Contiguous memory 
#include <list>   //Doubly link list
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    cout<<"Size is "<<v.size()<<endl;

    // v.clear();
    // cout<<"Size is "<<v.size()<<endl;

    vector<int>::iterator itr;
    itr = v.begin();
    //OR
    auto it = v.begin();

    sort(v.begin(),v.end());
    
    // cout<<*itr<<endl;
    // cout<<*(itr+1)<<endl;

    // Iteration using iterator

    for(itr = v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }

    //using pointers instead of iterators
    int arr[] = {1,4,2,4,1,6,5,2};

    int* begin = &arr[0];
    int* end = &arr[0] + (sizeof(arr)/sizeof(int));

    sort(begin,end);

    for(int* i = begin;i != end;i++){
        cout<<*i<<endl;
    }
   

}

//Same case is with list , but sort will not work there because it is bidirectional 