#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int, greater<int>> myset;
    myset.insert(100);
    myset.insert(2);
    myset.insert(3);
    myset.insert(-433);
    myset.insert(2);

    //erase
    myset.erase(myset.begin());
    myset.erase(3);

    for(auto itr = myset.begin();itr!=myset.end();itr++){
        cout<<*itr<<endl;
    }

    multiset<int> mymultiset; // similar element can occur more than one time
    mymultiset.insert(100);
    mymultiset.insert(2);
    mymultiset.insert(3);
    mymultiset.insert(-433);
    mymultiset.insert(2);

    for(auto itr = mymultiset.begin();itr!=mymultiset.end();itr++){
        cout<<*itr<<endl;
    }


    set<pair<int,int>, greater<pair<int,int>>> s; // here "greater is called comparator"
    s.insert({10,100});
    s.insert({3,200});
    s.insert({7,900});

    for(auto &i : s){
        cout<<i.first<<"-----"<<i.second<<endl;
    }


    
    
}