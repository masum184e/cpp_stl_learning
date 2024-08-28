#include <bits/stdc++.h>
using namespace std;
int32_t main(){

    // DECLARATION
    bitset<8> myBitset; // ALL DEFAULT BIT IS 0

    // INITIALIZATION
    bitset<8> unsignedLongInt(5);
    bitset<8> stringInit("1100");
    // 8 IS THE TOTAL NUMBER OF BIT, IT CAN'T BE ANY VARIABLE

    // ACCESSING
    unsignedLongInt[0]; // 5=>10100000

    // UPDATING
    myBitset.set(3); // SET(1) SPECIFIC BIT AT INDEX 3 FROM RIGHT SIDE
    myBitset.set();  // SET(1) ALL BIT

    myBitset.reset(3); // RESET(0) SPECIFIC BIT AT INDEX 3 FROM RIGHT SIDE
    myBitset.reset(); // RESET(0) ALL BIT

    myBitset.flip(3); // 0=>1, 1=>0
    myBitset.flip();

    myBitset.any(); // ANY BIT IS SET
    myBitset.all(); // ALL BIT ARE SET
    myBitset.none(); // NONE BIT ARE SET
    myBitset.count(); // TOTAL NUMBER OF SET BIT
    myBitset.size(); // SIZE OF THE BITSET

    // CONVERTING
    myBitset.to_string(); // BINARY NUMBER TO BINARY STRING
    myBitset.to_ullong(); // BINARY NUMBER TO DECIMAL NUMBER

    return 0;
}