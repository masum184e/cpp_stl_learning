#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> sized_vector(10);

    // REMOVING ELEMENTS AT END
    sized_vector.pop_back();
    // it decrement the size
    // but doesn't remove the value from reference

    // REMOVING ELEMENTS AT BEGIN
    sized_vector.erase(sized_vector.begin());
    // it decrement the size & remove the value from very begining

    // REMOVING ELEMENTS AT SPECIFIED INDEX
    sized_vector.erase(sized_vector.begin()+5);
    // it decrement the size & remove the value from specified index

    // REMOVING ELEMENTS WITH RANGE
    sized_vector.erase(sized_vector.begin()+5, sized_vector.begin()+10)
    // it decrement the size & remove the value from reference

    // REMOVING ALL ELEENTS
    sized_vector.clear();
    // it set the size 0
    // but it doesn't remove the value from reference

    // REMOVE SPECIFIC ELEMENT
    sized_vector.erase(remove(sized_vector.begin(), sized_vector.end(), 456), sized_vector.end());
    // it decrement the size & remove the value from reference

    // REMOVE
    // It does not actually remove elements from the container.
    // It rearranges the elements so that all occurrences of a specified value are moved to the end of the container.
    // It returns an iterator pointing to the new logical end of the container after the removal process.
    // The elements at the end of the container, which are duplicates or the elements to be removed, are not valid and can be removed using the erase function.

    return 0;
}