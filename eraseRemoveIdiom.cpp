#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);

    //Using erase
    // v.erase(v.begin()+2,v.begin()+3);

    //using remove
    auto itr = remove(v.begin(),v.end(),30); // rearanges the elements of vector first
    v.erase(itr,v.end());




    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    
}