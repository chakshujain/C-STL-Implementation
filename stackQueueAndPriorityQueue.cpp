#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;
int main(){

    //stack

    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }

    //queue

    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    while(!q.empty()){
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;
        q.pop();
    }


    //priority_queue

    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(400);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }


    return 0;
}

