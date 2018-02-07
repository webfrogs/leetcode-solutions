#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) {
            return 0;
        }

        int maxIndex = -1;

        int max = INT_MIN;
        int max2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (max < nums[i]) {
                max2 = max;
                max = nums[i];
                maxIndex = i;
            } else if (max2 < nums[i]) {
                max2 = nums[i];
            }
        }
        return max >= max2 * 2 ? maxIndex : -1;
    }
};
