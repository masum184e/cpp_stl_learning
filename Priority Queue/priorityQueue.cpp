#include <bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    priority_queue<int> decPQ;
    // by default priority is set to large to small
    priority_queue<int,vector<int>,greater<int>> decDPQ;
    // decDPQ priority is set to small to large
    // MIN HEAP: small to large
    // MAX HEAP: large to small

    // INITIALIZATION
    vector<int> initVector = {1, 2, 3};
    priority_queue<int> initPQ(initVector.begin(),initVector.end());
    

    // ADD ELEMENT
    initPQ.push(0);
    // insertion perform based on the priority

    // REMOVE ELEMENT
    initPQ.pop();

    // ACCESSING
    while(!initPQ.empty()){
        cout<<initPQ.top()<<endl;
        initPQ.pop();
    }

    return 0;
}