#include <bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    queue<int> decQ;

    // INITIALIZATION
    queue<int> initQ({1,2,3});

    // ADD ELEMENT
    initQ.push(0);

    // REMOVE ELEMENT
    initQ.pop();

    // ACCESSING
    while(!initQ.empty()){
        cout<<initQ.front()<<endl;
        initQ.pop();
    }

    // RANDOM FUNCTIONS
    initQ.back(); // return the last element of queue
    initQ.size(); // return the size of the queue, return type is size_t
    
    return 0;
}