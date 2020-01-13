#include <iostream>
#include <forward_list>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v = {1,2,43,2,5,7};
    vector<int> vout(v.size());
    // map function
    transform(v.begin(), v.end(), vout.begin(), [](int &value){return value * 3;}); //use back_inserter instead of vout.begin() if you dont want to give vout size

    for(auto &i : vout){
        cout<<i<<endl;
    }

    // filter
    auto endfilter = remove_if(vout.begin(),vout.end(),[](int &val){
        if(val%2==0){
            return true;
        }
        return false;
    });

    for(auto itr = vout.begin(); itr!= endfilter; itr++){
        cout<<*itr<<endl;
    }

    //reduce

    int finalvalue = accumulate(vout.begin(),endfilter,0,[](int first, int second){return first + second;});

    cout<<finalvalue<<endl;


    return 0;
}