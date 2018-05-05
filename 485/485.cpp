#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;

        int lastZeroIndex = -1;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                lastZeroIndex = i;
            } else {
                int count = i - lastZeroIndex;
                if (count > result) {
                    result = count;
                }
            }
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> arr = {1,1,0,1,1,1};
    Solution sol;
    cout<<sol.findMaxConsecutiveOnes(arr)<<endl;
    return 0;
}