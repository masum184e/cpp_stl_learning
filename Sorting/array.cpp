#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={6,2,9,4,7,3,0,1,5,8};

  cout<<"Enter Start and Ending Index for Array Sorting: ";
  int x,y;
  cin>>x>>y;
  
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  if(y>=sizeOfArray || y<0 || x>=sizeOfArray || x<0){
    cout<<"Invalid Index";
    return 0;
  }

  sort(arr+x, arr+y+1);
  cout<<"Ascending:";for(int i=0;i<10;i++)cout<<" "<<arr[i];

  sort(arr+x, arr+y+1, greater<int>());
  cout<<endl<<"Descending:";for(int i=0;i<10;i++)cout<<" "<<arr[i];

  return 0;
}