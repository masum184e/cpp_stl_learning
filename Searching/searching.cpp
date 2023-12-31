#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> initial_value_vector = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    // FIND SPECIFIC ELEMENT
    auto iterator=find(initial_value_vector.begin(), initial_value_vector.end(), 6);
    if(iterator!=initial_value_vector.end())cout<<"Element found at index "<<iterator-initial_value_vector.begin()<<endl;
    else cout<<"Element not found in the vector."<<endl;    

    // BINARY SEARCH
    bool status=binary_search(initial_value_vector.begin(), initial_value_vector.end(),6);
    (status)?cout<<"Found"<<endl:cout<<"Not Found"<<endl;
    // set of data must be sorted
    // binary_search return boolean value

    return 0;
}