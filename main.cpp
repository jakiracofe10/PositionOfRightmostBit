#include <iostream>

using namespace std;

uint64_t findRightMostBit(uint64_t n) {
    uint64_t count = 1;
    uint64_t test = n&1;
    //loop until lsb is 1
    while ((n&1) == 0) {
        count++;
        //push out current lsb
        n = n>>1;
    }
    return count;
}

int main() {
    uint64_t n = 80;
    uint64_t result = findRightMostBit(n);
    cout << result << endl;

    return 0;
}