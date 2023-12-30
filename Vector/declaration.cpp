#include<bits/stdc++.h>
using namespace std;
int main(){
  // EMPTY VECTOR
  vector<int> empty_vector;
  // You can only perform push_back operation, it doesn't accept indexing

  // INITIAL VALUE
  vector<int> initial_value_vector = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  // index accessing greater than the size doesn't make any effect in the vector, but make effect in the memory
  // you can perform push_back operation to make effect in the vector
  // THIS IS AS SAME AS THE GIVEN SCRIPT BELOW
  // vector<int> initial_value_vector;
  // initial_value_vector.assign({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 });

  // SIZED VECTOR
  vector<int> sized_vector(10);
  // default value of all item is 0
  // index accessing greater than the size doesn't make any effect in the vector, but make effect in the memory
  // push_back operation insert after size

  // INITIAL ALL VALUE
  vector<int> sized_vector_with_value(10,456)
  // index accessing greater than the size doesn't make any effect in the vector, but make effect in the memory
  // push_back operation insert after size
  // THIS IS AS SAME AS THE GIVEN SCRIPT BELOW
  // vector<int> empty_vector;
  // empty_vector.assign(10, 456);

  return 0;
}