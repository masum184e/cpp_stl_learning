// USED TO STORE SEQUENTIAL & UNIQUE DATA
#include <bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    set<int> decSet;

    // INITIALIZATION
    set<int> initSet={3,1,4,1,5,9,2,6,5};
    set<int> constructorSet({3,1,4,1,5,9,2,6,5});

    // ADD ELEMENT
    decSet.insert(1);

    // ACCESSING
    for(auto i:initSet)cout<<i<<" ";

    // SEARCHING
    (initSet.find(5)!=initSet.end())?cout<<"Found"<<endl:cout<<"Not Found"<<endl;

    // RANDOM FUNCTIONS
    initSet.size();

    return 0;
}