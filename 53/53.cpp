#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int result = nums[0];
        int previous = nums[0];
        for (int i=1; i < nums.size(); i++) {
            previous = max(previous + nums[i], nums[i]);
            result = max(previous, result);
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

