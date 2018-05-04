#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }

        bool hasModified = false;
        for (int i=0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                if (hasModified) {
                    return false;
                }

                if (i==0 || i+1 == nums.size()-1 ) {
                    hasModified = true;
                    continue;
                }

                if ( (i>0) && (nums[i-1] <= nums[i+1]) ) {
                    // modify index: i
                    hasModified = true;
                    continue;
                }
                if ( (i+2<nums.size() && (nums[i] <= nums[i+2]))) {
                    // modify index: i+1
                    hasModified = true;
                    i++;
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {4, 2, 1};

    Solution sol;
    cout<<sol.checkPossibility(nums)<<endl;
    return 0;
}