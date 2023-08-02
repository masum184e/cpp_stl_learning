#include<bits/stdc++.h>
using namespace std;
bool compare_length_ascending(const string w1, const string w2){
  return w1.length() > w2.length();
};
bool compare_length_descending(const string w1, const string w2){
  return w1.length() < w2.length();
};
int main(){
  vector<string> numbers = { "abcdefg", "abc", "abcdefghij", "abcde", "abcdefgh", "abcd", "a", "ab", "abcdef", "abcdefghi" };

  sort(numbers.begin(), numbers.end(), compare_length_ascending);
  cout<<"Ascending:";for(auto item: numbers)cout<<" "<<item;
  
  sort(numbers.begin(), numbers.end(), compare_length_descending);
  cout<<endl<<"Descending:";for(auto item: numbers)cout<<" "<<item;

  return 0;
}