#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){


    //pair 

    pair<int,int> p = make_pair(10,20);

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //map -- Data sctructure used is balanced binary tree
    map<int,int> mp;

    mp.insert(make_pair(3,4)); //not update only insert
    mp.insert(make_pair(3,1000)); // discarded because key '3' is already there
    
    mp[1] = 100; //update
    mp[2] = 200;

    for(auto itr = mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<"--------"<<itr->second<<endl;
    }

    multimap<int,int> multimp; //allows multiple values for a single key
    multimp.insert(make_pair(1,100));
    multimp.insert(make_pair(1,200));
    for(auto itr = multimp.begin();itr!=multimp.end();itr++){
        cout<<itr->first<<"--------"<<itr->second<<endl;
    }

// unordered_map and unordered_multimap are just like maps and multi maps but here elements are not stored in sorted order. 
// But they are much faster than maps and multi maps because they use hash data structure

}
