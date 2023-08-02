#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v ={6,2,9,4,7,3,0,1,5,8};

  cout<<"Enter Start and Ending Index for Sorting: ";
  int x,y;
  cin>>x>>y;

  if(y>=v.size() || y<0 || x>=v.size() || x<0){
    cout<<"Invalid Index";
    return 0;
  }

  sort(v.begin(), v.end());
  cout<<"All Element:";for(auto item: v)cout<<" "<<item;

  sort(v.begin()+x, v.begin()+y+1);
  cout<<endl<<"Ascending:";for(auto item: v)cout<<" "<<item;

  sort(v.begin()+x, v.begin()+y+1, greater<int>());
  cout<<endl<<"Descending:";for(auto item: v)cout<<" "<<item;

  return 0;
}