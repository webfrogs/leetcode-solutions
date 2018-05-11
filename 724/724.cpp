#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0) {
            return -1;
        }

        if (nums.size() == 1) {
            return 0;
        }

        int totalSum = 0;
        for(int i=0; i<nums.size();i++) {
            totalSum += nums[i];
        }

        int tmpSum = 0;
        for(int i=0; i<nums.size(); i++) {
            if((tmpSum * 2 + nums[i]) == totalSum) {
                return i;
            }
            tmpSum+=nums[i];
        }

        return -1;
    }
};


int main(int argc, char* argv[]) {
    return 0;
}

