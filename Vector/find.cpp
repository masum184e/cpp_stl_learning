#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> sized_vector(10);

    // FIND SPECIFIC ELEMENT
    auto iterator=find(sized_vector.begin(), sized_vector.end(), 456);
    if(iterator!=sized_vector.end())cout<<"Element found at index "<<iterator-sized_vector.begin()<<endl;
    else cout<<"Element not found in the vector."<<endl;

    // FIND MAXIMUM ELEMENT
    cout<<"Max Element = "<<*max_element(sized_vector.begin(),sized_vector.end())<<endl;

    // FIND MINIMUM ELEMENT
    cout<<"Min Element = "<<*min_element(sized_vector.begin(),sized_vector.end())<<endl;
 
    return 0;
}