#include<bits/stdc++.h>
using namespace std;
int main(){

    // DECLARATION
    pair<char,char> decPair;
    // default integer value is 0, string value is space

    // INITIALIZATION
    pair<char,char> initPair={'i','n'};
    pair<char,char> constructorPair('c','t');
    pair<char,char> makePair=make_pair('m','p');

    // COPY
    pair<char,char>copiedPair(initPair);

    // ACCESSING
    initPair.first;
    initPair.second;

    // SWAPPING
    constructorPair.swap(initPair);

    // COMPARISON
    bool status=initPair==makePair;
    // EQUAL: both first & second elements are equal
    // NOT EQUAL: any of the corresponding are not equal
    // INEQUALITY: inequality depends on the first element, if first element is equal, it depends on the second element

    return 0;
}