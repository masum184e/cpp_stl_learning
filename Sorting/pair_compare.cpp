#include<bits/stdc++.h>
using namespace std;
bool compare(const std::pair<int, int> p1, const std::pair<int, int> p2) {
  return p1.second/p1.first < p2.second/p2.first;
}
int main(){
  vector<pair<int, int>> pairs = {
    make_pair(1, 3),
    make_pair(2, 9),
    make_pair(3, 8),
    make_pair(4, 4),
    make_pair(5, 12),
    make_pair(6, 15),
    make_pair(7, 19),
    make_pair(8, 32),
    make_pair(9, 37),
    make_pair(10, 45),
  };

  sort(pairs.begin(), pairs.end(), compare);
  
  cout<<"Sort:"<<endl;
  for(auto p : pairs)cout<<p.first<<" "<<p.second<<" "<<p.second/p.first<<endl;
}