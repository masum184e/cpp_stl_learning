#include <bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    stack<int> decStack;

    // INITIALIZATION
    stack<int> initStack({1,2,3});

    // ADD ELEMENT
    decStack.push(0);

    // REMOVE ELEMENT
    decStack.pop();

    // ACCESSING
    while(!decStack.empty()){
        cout<<decStack.top()<<endl;
        decStack.pop();
    }

    // COMPARISON
    bool status=swapedStack===decStack;
    // return true if each of the element of both stack are equal

    // RANDOM FUNCTIONS
    decStack.top(); // return top element of the stack
    decStack.size(); // return size of the stack, return type size_t
    decStack.empty(); // return true if stack is empty
    stack<int> swapedStack;swapedStack.swap(decStack); // swap element with each other
    
    return 0;
}