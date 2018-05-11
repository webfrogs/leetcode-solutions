#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryBit = 1;
        int i = digits.size()-1;
        for(; i >= 0; i--) {
            if(carryBit == 0) {
                break;
            }
            digits[i]+=carryBit;
            if (digits[i] > 9) {
                digits[i]%=10;
                carryBit = 1;
            } else {
                carryBit = 0;
            }
        }
        if (carryBit == 1 && i == -1) {
            digits.insert(digits.begin(), carryBit);
        }

        return digits;
    }
};


int main(int argc, char* argv[]) {
    return 0;
}

