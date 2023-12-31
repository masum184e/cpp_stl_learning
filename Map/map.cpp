#include <bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    map<int, string>decMap;
    // key of map is unchangeable, value can be

    // INITIALIZATION
    map<int, string>initMap={
        {1, "One"},
        {2, "Two"},
        {3, "Three"}
    };
    map<int, string>makePairMap={
        make_pair(1, "One"),
        make_pair(2, "Two"),
        make_pair(3, "Three")
    };
    map<int, string>constructorMap{
        make_pair(1, "One"),
        make_pair(2, "Two"),
        make_pair(3, "Three")
    };
    map<int, string>insertMap;
    insertMap.insert(make_pair(1, "One"));
    insertMap.insert(make_pair(2, "Two"));
    insertMap.insert(make_pair(3, "Three"));
    map<int, string>emplaceMap;
    insertMap.emplace(make_pair(1, "One"));
    insertMap.emplace(make_pair(2, "Two"));
    insertMap.emplace(make_pair(3, "Three"));

    // ACCESSING
    for(auto i:constructorMap)cout<<i.first<<" "<<i.second<<endl;
    initMap[5]; // it's not index, put any key, it will return corresponding value
    initMap.at(2); // it's not index, put any key, it will return corresponding value

    // SEARCHING
    auto iterator=initMap.find(2);
    if(iterator!=initMap.end())cout<<"Found and value is: "<<iterator->second<<endl;
    else cout<<"Not Found"<<endl;

    // ERASE
    initMap.erase(2);// erase method accept key, and remove that key and corresponding value

    // FREQUENCY
    vector<int>arr;map<int,int>freq;
    for(int i=0;i<arr.size();i++)freq[arr[i]]++;

    return 0;
}