#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> sized_vector(10);

    // ADDING ELEMENTS AT END
    sized_vector.push_back(5);
    // it increment the array size
    // add element at the very last

    // ADDING ELEMENTS AT BEGIN
    sized_vector.insert(sized_vector.begin(), 456)
    // add element at the very first(at index 0), no matter size declare or not
    // if size declare it just access first index and set the value
    // if size is not declare, it will increment size and access first index then set the value
    // if size is declare and value is initialize, it will increment size and access first index then set the value

    // ADDING ELEMENTS AT ANYWHRE(FOR NOW AT INDEX 5)
    sized_vector.insert(sized_vector.begin()+5, 456)
    // add element at your target index
    // it can't change size
    // if your target index is greater than the size, it make no effect

    // ADD VECTOR WITH VECTOR - ADDING A RANGE OF ELEMENT IN VECTOR - VECTOR MERGING
    vector<int> new_vector={0, 1, 2, 3, 4};
    sized_vector.insert(sized_vector.end(), new_vector.begin(), new_vector.end());
    // this will change the parent vector size
    // you can use .begin() method to add it in the front

    return 0;
}