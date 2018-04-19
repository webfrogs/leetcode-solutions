#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        bool isOneBit = false;
        while (i < bits.size()) {
            if (bits[i] == 1) {
                i += 2;
                isOneBit = false;
                continue;
            }

            isOneBit = true;
            i++;
        }

        return isOneBit;
    }
};

int main(int argc, char *argv[]) {

    return 0;
}