#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> initial_value_vector = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  
    // REVERSE
    reverse(initial_value_vector.begin(), initial_value_vector.end());

    // RESIZE
    initial_value_vector.resize(15);
    // if new size if greater than the previous, set 0 to the new indexes
    // if new size if less than the previous, it resize but doesn't remove value from reference

    return 0;
}